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
	printf("%6c%6c\n",'F','C');
	for (fahr = 300; fahr >= 0; fahr = fahr - 20) 
		printf("%6d%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
