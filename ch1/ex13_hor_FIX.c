#include <stdio.h>

#define MAX_LEN 15

#define IN 1
#define OUT 0

main() {
	int c = 0, len = 0, lens[MAX_LEN] = {0}, cur_len = 0;
	int state = OUT;

	while ((c = getchar()) != EOF) {
		if ((c == ' ' || c == '\t' || c == '\t') && state == IN && cur_len != 0) {
			state = OUT;
			++lens[cur_len];
			cur_len = 0;
		}
		else if (state == IN) 
			++cur_len;
		else
			state = IN;

	}

	for (int i=1; i < MAX_LEN; ++i) {
		printf("%3d: ", i);
		for (int j=0; j < lens[i]; ++j) 
			printf("#");

		printf("\n");
	}
}
