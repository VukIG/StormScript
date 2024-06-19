typedef enum {
    // Single-character tokens
    TOKEN_LPAREN,        // (
    TOKEN_RPAREN,        // )
    TOKEN_LBRACE,        // {
    TOKEN_RBRACE,        // }
    TOKEN_LBRACKET,      // [
    TOKEN_RBRACKET,      // ]
    TOKEN_SEMICOLON,     // ;
    TOKEN_COMMA,         // ,
    TOKEN_DOT,           // .
    TOKEN_PLUS,          // +
    TOKEN_MINUS,         // -
    TOKEN_STAR,          // *
    TOKEN_SLASH,         // /
    TOKEN_PERCENT,       // %
    TOKEN_AMPERSAND,     // &
    TOKEN_PIPE,          // |
    TOKEN_CARET,         // ^
    TOKEN_TILDE,         // ~
    TOKEN_BANG,          // !
    TOKEN_QUESTION,      // ?
    TOKEN_COLON,         // :
    TOKEN_EQUAL,         // =
    TOKEN_LESS,          // <
    TOKEN_GREATER,       // >
    
    // Multi-character tokens
    TOKEN_PLUS_PLUS,     // ++
    TOKEN_MINUS_MINUS,   // --
    TOKEN_PLUS_EQUAL,    // +=
    TOKEN_MINUS_EQUAL,   // -=
    TOKEN_STAR_EQUAL,    // *=
    TOKEN_SLASH_EQUAL,   // /=
    TOKEN_PERCENT_EQUAL, // %=
    TOKEN_AMPERSAND_EQUAL,// &=
    TOKEN_PIPE_EQUAL,    // |=
    TOKEN_CARET_EQUAL,   // ^=
    TOKEN_BANG_EQUAL,    // !=
    TOKEN_EQUAL_EQUAL,   // ==
    TOKEN_LESS_EQUAL,    // <=
    TOKEN_GREATER_EQUAL, // >=
    TOKEN_AND,           // &&
    TOKEN_OR,            // ||

    // Literals
    TOKEN_IDENTIFIER,    // Variable names, function names, etc.
    TOKEN_NUMBER,        // Numeric literals
    TOKEN_STRING,        // String literals
    TOKEN_CHAR,          // Character literals

    // Keywords (Example set, modify according to your language)
    TOKEN_KEYWORD_IF,         // if
    TOKEN_KEYWORD_ELSE,       // else
    TOKEN_KEYWORD_WHILE,      // while
    TOKEN_KEYWORD_FOR,        // for
    TOKEN_KEYWORD_RETURN,     // return
    TOKEN_KEYWORD_BREAK,      // break
    TOKEN_KEYWORD_CONTINUE,   // continue
    TOKEN_KEYWORD_FUNCTION,   // function
    TOKEN_KEYWORD_VAR,        // var
    TOKEN_KEYWORD_CONST,      // const
    TOKEN_KEYWORD_LET,        // let
    TOKEN_KEYWORD_TRUE,       // true
    TOKEN_KEYWORD_FALSE,      // false
    TOKEN_KEYWORD_NULL,       // null
    TOKEN_KEYWORD_UNDEFINED,  // undefined
    TOKEN_KEYWORD_CLASS,      // class
    TOKEN_KEYWORD_THIS,       // this
    TOKEN_KEYWORD_NEW,        // new
    TOKEN_KEYWORD_IMPORT,     // import
    TOKEN_KEYWORD_EXPORT,     // export

    // Miscellaneous
    TOKEN_WHITESPACE,    // Spaces, tabs, etc.
    TOKEN_COMMENT,       // Single-line and multi-line comments

    // End of file
    TOKEN_EOF,           // End of file
    TOKEN_UNKNOWN        // Unknown token type
} TokenType;
