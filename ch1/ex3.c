#include <stdio.h>

main()
{
	// Комментарий

	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step  = 20;
	fahr = lower;
	printf("%6c%6c\n",'C','F');
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%6d%6d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
