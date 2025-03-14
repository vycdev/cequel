#include <catch2/catch_test_macros.hpp>
#include <string>
#include <vector>

#include <lexer/lexer.hpp>

TEST_CASE("AtomTokenizing", "[Tokenizer]") {
    std::string input = "a";
    Lexer::TokenType result;

    for (auto it = input.begin(); it != input.end(); ++it) {
        result = Lexer::GetAtomType(it);
    }

    REQUIRE(result == Lexer::CHAR);
}

TEST_CASE("AtomsTokenizing", "[Tokenizer]") {
    // THIS NEEDS TO BE EXPANDED UPON

    std::string input = "abc(){}[].,/%;:";

    std::vector<Lexer::TokenType> expectedOutput;
    expectedOutput.push_back(Lexer::CHAR);
    expectedOutput.push_back(Lexer::CHAR);
    expectedOutput.push_back(Lexer::CHAR);
    expectedOutput.push_back(Lexer::LEFT_PAREN);
    expectedOutput.push_back(Lexer::RIGHT_PAREN);
    expectedOutput.push_back(Lexer::LEFT_BRACE);
    expectedOutput.push_back(Lexer::RIGHT_BRACE);
    expectedOutput.push_back(Lexer::SKIP);
    expectedOutput.push_back(Lexer::SKIP);
    expectedOutput.push_back(Lexer::DOT);
    expectedOutput.push_back(Lexer::COMMA);
    expectedOutput.push_back(Lexer::SLASH);
    expectedOutput.push_back(Lexer::PERCENT);
    expectedOutput.push_back(Lexer::SEMICOLON);
    expectedOutput.push_back(Lexer::COLON);

    std::vector<Lexer::TokenType> result;

    for (auto it = input.begin(); it != input.end(); ++it) {
        result.push_back(Lexer::GetAtomType(it));
    }

    REQUIRE(result == expectedOutput);
}

