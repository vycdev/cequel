namespace token_types {
    enum class TokenType {
        KEYWORD,
        IDENTIFIER,
        LITERAL,
        OPERATOR,
        SYMBOL,
    };

    // TYPES
    enum class DataTypes {
        INT,
        FLOAT,
        STRING,
        CHAR,
        BOOL,
    };

    // KEYWORDS
    enum class Keywords {
        TYPE, // See enum class

        IF,
        ELSE,

        THEN, // For the ternary operator

        SWITCH,
        CASE,
        DEFAULT,
        BREAK,

        WHILE,
        DO,
        FOR,
        IN,

        CONTINUE, // In case you want to skip a for loop iteration

        FUN, // Function
        RETURN,

        IMPORT,
        EXPORT,

        STRUCT,
        ENUM,
        // CLASS, (Going to be implemented in the future, maybe)
    };

    // OPERATORS
    enum class Operators {
        // Arithmetic
        ADDITION,
        SUBTRACTION,
        MULTIPLICATION,
        DIVISION,
        MODULO,
        // Assignment
        ASSIGNMENT,
        // Comparison
        EQUAL,
        NOT_EQUAL,
        GREATER,
        LESS,
        GREATER_OR_EQUAL,
        LESS_OR_EQUAL,
        // Logical
        AND,
        OR,
        NOT,
        // Bitwise
        BITWISE_AND,
        BITWISE_OR,
        BITWISE_XOR,
        BITWISE_NOT,
        BITWISE_SHIFT_LEFT,
        BITWISE_SHIFT_RIGHT,
        // Increment
        INCREMENT,
        DECREMENT,
    };

    // SYMBOLS
    enum class Symbols {
        LEFT_PARENTHESES,
        RIGHT_PARENTHESES,
        LEFT_BRACE,
        RIGHT_BRACE,
        LEFT_BRACKET,
        RIGHT_BRACKET,

        COMMA,
        DOT,
        COLON,

        SEMICOLON,

        // AT, (Going to be used for attributes if I'm going to implement them)
        // HASH, (Going to be used for preprocessor directives)

        SINGLE_QUOTE,
        DOUBLE_QUOTE,
    };
}
