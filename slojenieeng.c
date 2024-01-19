/*The program calculates the sum of numbers and business ability for others v1.0 by Keksovname*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	unsigned int sum, divisor;
	printf("Enter a decimal integer and divisor\n");
	scanf("%d%d", &sum, &divisor);
	printf("The number is=%d divisor equals =%d\n", sum, divisor);
	int result;
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
	printf("Dividing the sum of a number by the total number=%g\n", bigresult);   //we write the complete result for the number.
	double finalresult = result;    //make a double from the result value (how much is the whole result)
	printf("Dividing the sum of a number by a number is equal to=%d\n", result); //print the value of the integer result.
	if (bigresult > finalresult) //Comparing the full result with the result of the whole integer result.
	{
		printf("Divider =%d,number %d does not divide without remainder\n", divisor, sum); //if more then it is not divided without remainder
	}

	if (bigresult == finalresult)
	{
		printf("Divider =%d,number %d divided without remainder\n", divisor, sum);  //if equal then divide
}
return 0;
}
