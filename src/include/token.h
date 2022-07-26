#ifndef TOKEN_H
#define TOKEN_H

typedef struct TOKEN_H
{
    enum
    {
        TOKEN_ID,
        TOKEN_EQUALS,
        TOEKN_STRING,
        TOKEN_SEMI,
        TOKEN_LPAREN,
        TOKEN_RPAREN
    } type;


char* value;



} token_T;


token_T* init_token(int type, char* value);








#endif