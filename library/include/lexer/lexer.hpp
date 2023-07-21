#pragma once

#include <string>
#include <vector>

namespace Lexer {
    enum TokenType {
        // Atoms
        LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
        COMMA, DOT, MINUS, PLUS, COLON, SEMICOLON, SLASH, BACKSLASH, STAR, PERCENT,
        BANG, EQUAL, GREATER, LESS,
        QUOTE, DIGIT, CHAR,
        AT,

        // Logical
        BANG_EQUAL,
        EQUAL_EQUAL,
        GREATER_EQUAL,
        LESS_EQUAL,
        AND, OR,

        // Literals.
        IDENTIFIER, STRING, INTEGER, REAL,

        // Keywords.
        IF, ELSE,
        FOR, WHILE,
        FN, RETURN,
        TRUE, FALSE, NIL,

        // Special
        COMMENT,
        SKIP,
        END_OF_LINE,
        END_OF_FILE
    };

    struct Token {
        TokenType type;
        std::string_view lexeme;
        std::uint32_t line_no;
    };

    TokenType GetAtomType(std::string::iterator it);
    std::vector<Token> Tokenize(std::string input);
}