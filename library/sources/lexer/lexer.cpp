#include <lexer/lexer.hpp>
#include <string>
#include <utility>

namespace Lexer {
    std::vector<Token> Tokenize(std::string input) {
        std::uint32_t current_line_no = 1;
        std::vector<Token> result;

        for(auto it = input.begin(); it != input.end(); ++it) {
            switch(GetAtomType(it)){
                case LEFT_PAREN:
                case RIGHT_PAREN:
                case LEFT_BRACE:
                case RIGHT_BRACE:
                case COMMA:
                case MINUS:
                case PLUS:
                case SEMICOLON:
                case BACKSLASH:
                case STAR:
                case PERCENT:
                case COLON:
                case AT:
                    // Can only be single atoms, they have no derivations
                    break;
                case DOT:
                    break;
                case BANG:
                    // BANG
                    // BANG_EQUAL
                    break;
                case EQUAL:
                    // EQUAL
                    // EQUAL_EQUAL
                    break;
                case GREATER:
                    // GREATER
                    // GREATER_EQUAL
                    break;
                case LESS:
                    // LESS
                    // LESS_EQUAL
                    break;
                case QUOTE:
                    // STRING
                    break;
                case DIGIT:
                    // INTEGER
                    // REAL
                    break;
                case CHAR:
                    // IDENTIFIER
                    // KEYWORD
                    break;
                case SLASH:
                    // SLASH (operator)
                    // COMMENT
                    break;
                case SKIP:
                    // Ignored character such as space.
                    break;
            }
        }

        return result;
    }

    TokenType GetAtomType(const std::string::iterator& it) {
        switch(*it) {
            case '@':
                return TokenType::AT;
            case '(':
                return TokenType::LEFT_PAREN;
            case ')':
                return TokenType::RIGHT_PAREN;
            case '{':
                return TokenType::LEFT_BRACE;
            case '}':
                return TokenType::RIGHT_BRACE;
            case ',':
                return TokenType::COMMA;
            case '.':
                return TokenType::DOT;
            case ':':
                return TokenType::COLON;
            case '+':
                return TokenType::PLUS;
            case '-':
                return TokenType::MINUS;
            case ';':
                return TokenType::SEMICOLON;
            case '/':
                return TokenType::SLASH;
            case '\\':
                return TokenType::BACKSLASH;
            case '*':
                return TokenType::STAR;
            case '%':
                return TokenType::PERCENT;
            case '!':
                return TokenType::BANG;
            case '=':
                return TokenType::EQUAL;
            case '<':
                return TokenType::LESS;
            case '>':
                return TokenType::GREATER;
            case '"':
                return TokenType::QUOTE;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                return TokenType::DIGIT;
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                return TokenType::CHAR;
            case '\r':
            case '\n':
            case '\r\n':
                return TokenType::END_OF_LINE;
        }

        return TokenType::SKIP;
    }
}
