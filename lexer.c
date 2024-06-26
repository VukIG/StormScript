#include "lexHeader.h"

const char* tokenTypeToString(TokenType type) {
    switch (type) {
        case TOKEN_LPAREN: return "TOKEN_LPAREN";
        case TOKEN_RPAREN: return "TOKEN_RPAREN";
        case TOKEN_LBRACE: return "TOKEN_LBRACE";
        case TOKEN_RBRACE: return "TOKEN_RBRACE";
        case TOKEN_LBRACKET: return "TOKEN_LBRACKET";
        case TOKEN_RBRACKET: return "TOKEN_RBRACKET";
        case TOKEN_SEMICOLON: return "TOKEN_SEMICOLON";
        case TOKEN_COMMA: return "TOKEN_COMMA";
        case TOKEN_IDENTIFIER: return "TOKEN_IDENTIFIER";
        case TOKEN_NUMBER: return "TOKEN_NUMBER";
        case TOKEN_STRING: return "TOKEN_STRING";
        case TOKEN_WHITESPACE: return "TOKEN_WHITESPACE";
        case TOKEN_COMMENT: return "TOKEN_COMMENT";
        case TOKEN_UNKNOWN: return "TOKEN_UNKNOWN";
        default: return "UNKNOWN_TOKEN_TYPE";
    }
}

TokenType charCheck(char token) {
    printf("%d",token);
    if (token == '(') {
        return TOKEN_LPAREN;
    } else if (token == ')') {
        return TOKEN_RPAREN;
    } else if (token == '{') {
        return TOKEN_LBRACE;
    } else if (token == '}') {
        return TOKEN_RBRACE;
    } else if (token == '[') {
        return TOKEN_LBRACKET;
    } else if (token == ']') {
        return TOKEN_RBRACKET;
    } else if (token == ';') {
        return TOKEN_SEMICOLON;
    } else if (token == ',') {
        return TOKEN_COMMA;
    } else if (isalpha(token)) {
        return TOKEN_IDENTIFIER;
    } else if (isdigit(token)) {
        return TOKEN_NUMBER;
    } else if (isspace(token)) {
        printf("Whitespace\n");
        return TOKEN_WHITESPACE;
    } else {
        return TOKEN_UNKNOWN;
    }
}


void openFile(char *filename, token tokens[]) {
    
    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        perror("Failed to open file");
        return;
    }

    fseek(f, 0, SEEK_END);
    long length = ftell(f);
    fseek(f, 0, SEEK_SET);

    char *buffer = (char *)malloc(length + 1);  // +1 for null terminator
    if (buffer == NULL) {
        perror("Failed to allocate memory");
        fclose(f);
        return;
    }

    size_t read_size = fread(buffer, 1, length, f);
    if (read_size != length) {
        perror("Failed to read file");
        free(buffer);
        fclose(f);
        return;
    }

    buffer[length] = '\0';  // Null-terminate the buffer
    fclose(f);
    // Tokenize the buffer
    int i=0;
    for (int s = 0; s < length; s++)
    {
        TokenType tokenType = charCheck(buffer[i]);
        //prebaciti tokentype u string jebem ti sunce stvara mi ogromne probleme
        tokens[i].tokenType = charCheck(buffer[i]);
        printf("%s\n", tokenTypeToString(tokens[i].tokenType));
    }
    free(buffer);
}

int main(int argc, char *argv[]) {

    token tokens[30];

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    openFile(argv[1], tokens);
    return 0;
}