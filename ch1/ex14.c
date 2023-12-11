#include <stdio.h>

main() {
	int chars[256] = {0}, c;

	while ((c = getchar()) != EOF)
		++chars[c];

	for (int i=0; i<256; ++i)
		if (chars[i] != 0)
			printf("%3c: %4d\n", i, chars[i]);


}
