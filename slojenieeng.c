/*The program calculates the sum of the digits of a number and divisibility by another v1.0 by Keksovname*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	unsigned int sum, divisor;
	int divisibilitynumbers=0,divisibilityamounts=0,warning=0;
	printf("Enter a decimal integer and divisor\n");
	scanf("%d%d", &sum, &divisor);
	printf("The number is =%d divisor equals =%d\n", sum, divisor);
	if (sum==0||divisor==0)
	{
		printf("You can't divide by zero!\n");
		warning=1;
		return 0;
	}
	if (warning==0);
	{
		if(sum==0&&divisor==0)
		{
			printf("You can't divide by zero!\n");
			return 0;
		}
	}
	if(warning==1)
	{
		//then we do nothing
	}
	printf("Now we check the divisibility of numbers + division of sums of numbers / divisor!\n");
	int result;
	int length(int n)   //код взят из гугла
	{
		int l = 1;
		for (; n /= 10; ++l);
		return l;
	}

	int lengthnumbers = length(sum);
	printf("Number length =%d\n",lengthnumbers);
	int final = 0;
	int one = 1;
	int tmpfinal = 0;
	int count1=0;
	int newfinal=0;
	for (count1; count1 < lengthnumbers; ++count1)
	{
		final = sum / one % 10;
		newfinal = newfinal + final;
		one = one * 10;
	}
	int summa=newfinal;
	if (sum>divisor)
	{
		result =  sum/divisor;
	}
	if(sum==divisor)
	{
		result=sum/divisor;
	}
	if(sum<divisor)
	{
		printf("The divisor is greater than the number, the result will be non-integer");
		return 0;
	}
	double bigsum = sum;  //create double copies of values
	double bigresult = result;   //create double copies of values
	double bigdivisor = divisor; //create double copies of values
	if(bigsum>bigdivisor)
	{
		bigresult = bigsum / bigdivisor;//What's the bottom line for double?
	}
	else
	{
		bigresult=bigdivisor/bigsum;	//What's the bottom line for double?
	}
	printf("Dividing the sum of a number by the total number=%g\n", bigresult);   //write the complete result for the number.
	double finalresult = result;    //make a double from the result value (how much is the whole result)
	printf("Dividing the sum of a number by a number is equal to=%d\n", result); //print the value of the integer result.
	if (bigresult > finalresult) //comparison of the full result with the whole result
	{
		divisibilityamounts=0;
		//printf("Divider =%d,number %d does not divide without remainder\n", divisor, sum); //if more then it is not divided without remainder
	}

	if (bigresult == finalresult)
	{
		divisibilityamounts=1;
		//printf("Divider =%d,number %d divided without remainder\n", divisor, sum);  //if equal then divide
	}
	if (summa < divisor)
	{
		int resultnew = divisor / summa;
		double bigsummanew=summa;
		double bigdivisornew = divisor;
		double bigresultnew=bigdivisornew / bigsummanew;
		double newfinalresult = resultnew;
		printf("Full division of the sum of numbers (double) is equal to=%g\n", bigresultnew);
		printf("Dividing the sum of numbers is equal to=%d\n", resultnew);
		if (bigresultnew > newfinalresult)
		{
			divisibilitynumbers=0;
		}
		if (bigresultnew == newfinalresult)
		{
			divisibilitynumbers=1;
		}
	}
	if (summa > divisor)
	{
		int resultnew = summa / divisor;
		double bigsummanew=summa;
		double bigdivisornew = divisor;
		double bigresultnew=bigsummanew / bigdivisornew;
		double newfinalresult = resultnew;
		printf("Full division of the sum of numbers (double) is equal to=%g\n", bigresultnew);
		printf("Dividing the sum of numbers is equal to=%d\n", resultnew);
		if (bigresultnew > newfinalresult)
		{
			divisibilitynumbers=0;
		}
		if (bigresultnew == newfinalresult)
		{
			divisibilitynumbers=1;
		}

	}
	if (summa == divisor)
	{
		int resultnew = summa / divisor;
		double bigsummanew=summa;
		double bigdivisornew = divisor;
		double bigresultnew=bigsummanew / bigdivisornew;
		double newfinalresult = resultnew;
		printf("Full division of the sum of numbers (double) is equal to=%g\n", bigresultnew);
		printf("Dividing the sum of numbers is equal to=%d\n", resultnew);
		if (bigresultnew > newfinalresult)
		{
			divisibilitynumbers=0;
		}
		if (bigresultnew == newfinalresult)
		{
			divisibilitynumbers=1;
		}
	}
	if(divisibilityamounts==0&&divisibilitynumbers==1)
	{
		printf("Divider =%d,number %d does not divide without remainder", divisor, sum);

	}
	if(divisibilityamounts==1&&divisibilitynumbers==0)
	{
		printf("Divider =%d,number %d divided without remainder", divisor, sum);

	}
	if(divisibilityamounts==1&&divisibilitynumbers==1)
	{
		printf("Divider =%d,number %d divided without remainder", divisor, sum);
	}
	if(divisibilityamounts==0&&divisibilitynumbers==0)
	{
		printf("Divider =%d,number %d does not divide without remainder", divisor, sum);
	}
	return 0;
}
