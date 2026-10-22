#include <stdio.h>
int main(void)
{
	float wt_lb, ht_in, bmi;
		printf("Enter your weight in pounds: ");
	        scanf("%f", &wt_lb);
		 
		printf("Enter your height in inches: ");
		scanf("%f" , &ht_in );

		if (wt_lb <= 0 || ht_in <= 0)
		{
			printf("Weight and height must be greater than zero.");
			return 1;
		}
		bmi = (wt_lb / (ht_in * ht_in)) * 703;
		bmi = (int)(bmi * 10 + 0.5) / 10.0;

		printf("Your BMI is %.1f\n", bmi);
		{
		if (bmi<18,5)
		{
			printf("Category: Underweight\n");
		}
		else if (bmi < 25)
		{
			printf("Category: Normal weight\n");
		}
		else if (bmi < 30)
		{
			printf("Category: Overweight\n");
		}
		else
		{
			printf("Category: obese\n");
		}
		return 0;
		}
}
