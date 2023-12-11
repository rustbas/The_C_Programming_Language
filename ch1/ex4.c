#include <stdio.h>

main()
{
	// Комментарий

	int fahr, cel;
	int lower, upper, step;
	lower = -100;
	upper = 300;
	step  = 20;
	cel = lower;
	printf("%6c%6c\n",'C','F');
	while (cel <= upper) {
		fahr = 9 * (cel + 32) / 5;
		printf("%6d%6d\n", cel, fahr);
		cel = cel + step;
	}
}
