#include <stdio.h>

main() {
	int c, ns, nt, nl;

	nl = 0;
	while ((c = getchar()) != EOF){
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if (c == ' ')
			++ns;
	}

	printf("Spaces: %d\n", ns);
	printf("Tabs:   %d\n", nt);
	printf("Lines:  %d\n", nl);
}
