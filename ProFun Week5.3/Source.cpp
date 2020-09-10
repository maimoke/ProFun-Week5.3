#include<stdio.h>
int main()
{
	float money;
	scanf_s("%f", &money);
	if (money > 0) printf("%g %g", money / 32.8 * 32.5, money / 32.8 * 0.3);
	else printf("You don't have money");
	return 0;
}