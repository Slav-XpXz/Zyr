
enum Tokens{
	tok_eof = -1,
	tok_plus = -2,
	tok_minus = -3,
	tok_multiply = -4,
	tok_divide = -5,
	tok_lparen = -6,
	tok_rparen = -7,
};

static int gettok(){
	static int c = ' ';

	while(isspace(c)){
		c = getchar();
		continue;
	}


	switch(c){
		case '+':
			c = getchar();
			return tok_plus;
		case '-':
			c = getchar();
			return tok_minus;
		case '*':
			c = getchar();
			return tok_multiply;
		case '/':
			c = getchar();
			return tok_divide;
		case '(':
			c = getchar();
			return tok_lparen;
		case ')':
			c = getchar();
			return tok_rparen;
	}

	if(c==EOF){
		return tok_eof;
	}


}

