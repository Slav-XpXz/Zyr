#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "lexer.h"





Token LexerAdvance(FILE *file) {
    Token token = LexerAdvanceInternal(file);

    while (token.type != END_OF_FILE) {
        printToken(token);
        token = LexerAdvanceInternal(file);
    }

    return token;
}

void printToken(Token token) {
    switch (token.type) {
        case INT:
            printf("INT: %d\n", token.intValue);
            break;
        case PLUS:
            printf("PLUS\n");
            break;
        case MINUS:
            printf("MINUS\n");
            break;
        case MULTIPLY:
            printf("MULTIPLY\n");
            break;
        case DIVIDE:
            printf("DIVIDE\n");
            break;
        case LPAREN:
            printf("LPAREN\n");
            break;
        case RPAREN:
            printf("RPAREN\n");
            break;
        case END_OF_FILE:
            printf("EOF\n");
            break;
        default:
            break;
    }
}

static Token LexerAdvanceInternal(FILE *file) {
    int c = ' ';

    while (isspace(c)) {
        c = getc(file);
    }

    if (isdigit(c)) {
        int value = 0;

        while (isdigit(c)) {
            value = value * 10 + (c - '0');
            c = getc(file);
        }

        return (Token){INT, {.intValue = value}};
    }

    if (c == EOF) {
        return (Token){END_OF_FILE, {0}};
    }

    switch (c) {
        case '+':
            c = getc(file);
            return (Token){PLUS, {0}};
        case '-':
            c = getc(file);
            return (Token){MINUS, {0}};
        case '*':
            c = getc(file);
            return (Token){MULTIPLY, {0}};
        case '/':
            c = getc(file);
            return (Token){DIVIDE, {0}};
        case '(':
            c = getc(file);
            return (Token){LPAREN, {0}};
        case ')':
            c = getc(file);
            return (Token){RPAREN, {0}};
        default:
            fprintf(stderr, "Unexpected char: %c\n", c);
            return (Token){END_OF_FILE, {0}};
    }
}
