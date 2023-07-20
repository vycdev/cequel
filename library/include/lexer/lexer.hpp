#pragma once

#include <string>

namespace Lexer {
    enum TokenType {
        // Single-character tokens.
        LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
        COMMA, DOT, MINUS, PLUS, COLON, SEMICOLON, SLASH, STAR, PERCENT,

        // One or two character tokens.
        BANG, BANG_EQUAL,
        EQUAL, EQUAL_EQUAL,
        GREATER, GREATER_EQUAL,
        LESS, LESS_EQUAL,
        AND, OR,

        // Literals.
        IDENTIFIER, STRING, INTEGER, REAL,

        // Keywords.
        IF, ELSE,
        FOR, WHILE,
        FN, RETURN,
        TRUE, FALSE, NIL,

        // Standard library
        PRINT,

        END_OF_FILE
    };

    struct Token {
        TokenType type;
        std::string_view lexeme;
    };
}