#include <stdio.h>

#define IN 1
#define OUT 0

main() {
	int c, nl, nw, nc, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == '\n' && state == IN) {
			state = OUT;
			putchar(c);
		}
		else if ((c == '\n' || c == '\t' || c == ' ') && state == OUT)
			;
		else if ((c == '\n' || c == '\t' || c == ' ') && state == IN) {
			state = OUT;
			putchar('\n');
		}
		else {
			state = IN;
			putchar(c);
		}

	}
}
