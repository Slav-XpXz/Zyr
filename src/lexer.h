#ifndef LEXER_H
#define LEXER_H


typedef enum{
    INT,
    RPAREN,
    LPAREN,
    PLUS,
    MINUS,
    MULTIPLY,
    DIVIDE,
    STRING,
    END_OF_FILE
}Tokens;

typedef struct{
    Tokens type;
    union{
        int intValue;
        char* stringValue;
    };

}Token;

extern Token LexerAdvance(FILE* file);
static Token LexerAdvanceInternal(FILE *file);
extern void printToken(Token token);


#endif