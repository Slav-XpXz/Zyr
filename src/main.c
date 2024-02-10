#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "lexer.h"

int main(){
	
	int tok = gettok();

	do{
		switch(tok){
			case tok_plus:
				puts("PLUS\n");
				break;
			case tok_minus:
				puts("MINUS\n");
				break;
			case tok_multiply:
				puts("MULTIPLY\n");
				break;
			case tok_divide:
				puts("DIVIDE\n");
				break;
			case tok_lparen:
				puts("LPAREN\n");
				break;
			case tok_rparen:
				puts("RPAREN\n");
				break;
		}
	} while(tok != tok_eof);
	return 0;
}
