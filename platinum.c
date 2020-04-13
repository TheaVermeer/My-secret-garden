#include <stdio.h>
int main(void)
{
	float weight;
	float value;
	printf("Please enter your weight:\n");
	scanf("%f",&weight);
	value=1700.00*weight*14.5833;
	printf("Your weight %.2f KG is worth $%.4f\n",weight,value);
	return 0;
}
