/*The program calculates the sum of the digits of a number and its divisibility by another v0.6 by Keksovname*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	unsigned int a, i, m, x, del, temp, summax, temp1, temp2, itemp, final, result;
	printf("Enter a decimal integer and divisor\n");
	scanf("%d%d", &a, &del);
	printf("The number is =%d divisor equals =%d\n", a, del);
	int length(int n)   //code taken from Google
	{
		int l = 1;
		for (; n /= 10; ++l);
		return l;
	}

	i = length(a);  //further completely mine
	x = 0;
	m = 0;
	for (m; m < i; m++)
	{
		x++;
		//printf("Number length x=%d\n",x);//calculate the length of a digit
	}

	printf("Number length x=%d\n", x);
	temp2 = summax;
	temp1 = 0;
	final = 0;
	int tmp2 = 1;
	int tmpfinal = 0;
	for (temp1; temp1 < x; ++temp1)
	{
		final = a / tmp2 % 10;
		tmpfinal = tmpfinal + final;
		tmp2 = tmp2 * 10;
	}
	printf("Sum of all numbers added together=%d\n", tmpfinal);
	int delimostsummy;
	int delimostchisla;
	int tmptemp = tmpfinal; //shuffle the length of all numbers with temporary storage
	int tmpdel = del;   //shuffle the divider with temporary storage.
	del = tmpdel;   //idle operation, I don’t know why I left it.
	printf("Now we check the divisibility of numbers + division of sums of numbers / divisor!\n");
	if (a>del)
	{
		result =  a/del;
	}
	else
	{
		result = del/a;
	}
	double doublea = a;  //create double copies of values
	double doubleresult = result;   //create double copies of values
	double doubledel = del; //create double copies of values
	if(doublea>doubledel)
	{
		doubleresult = doublea / doubledel;//What's the bottom line for double?
	}
	else
	{
		doubleresult=doubledel/doublea;	//What's the bottom line for double?
	}
	printf("Dividing the sum of a number by the total number=%g\n", doubleresult);   //we write the complete result for the number.
	double finalresult = result;    //We make a double value of the result (how much is the full result)
	printf("Dividing the sum of a number by a number is equal to=%d\n", result); //print the value of the integer result.
	if (doubleresult > finalresult) //comparison of the full result with the whole result
	{
		delimostsummy=0;
		//printf("Divider =%d,number %d does not divide without remainder\n", del, a); //if more then it is not divided without remainder, debug printing
	}

	if (doubleresult == finalresult)
	{
		delimostsummy=1;
		//printf("Divider =%d,number %d does not divide without remainder\n", del, a);  //if equal then divide
	}


	if (tmpfinal < del) //if the sum of all numbers is less than the divisor
	{
		tmptemp = tmpfinal; //shuffle the length of all numbers with temporary storage
		tmpdel = del;   //shuffle the divider with temporary storage.
		del = tmpdel;   //Idle operation, I don’t know why I left it.
		int result2 = del / tmpfinal;    //divide the length of the divisor and all numbers
		double doublefinal = tmpfinal;  //create double copies of values
		double doubledel = del; //create double copies of values
		doubleresult2 = doubledel / doublefinal; //What's the bottom line for double?
		printf("Full division of the sum of numbers (double) is equal to=%g\n", doubleresult2);   //we write the complete result for the number.
		double finalresult = result2;    //make a double from the result value (how much is the whole result)
		printf("Деление суммы чисел  равно=%d\n", result2); //print the value of the integer result.
		if (doubleresult2 > finalresult) //comparison of the full result with the whole result
		{
			delimostchisla=0;
			//printf("Divider =%d,number %d does not divide without remainder", del, a); //if more then it is not divided without remainder
		}

		if (doubleresult2 == finalresult)
		{
			delimostchisla=1;
			//printf("Divider =%d,number %d does not divide without remainder", del, a);  //if equal then divide
		}
	}

	if (tmpfinal > del) //if the sum of all numbers is greater than the divisor
	{
		int tmptemp = tmpfinal; //shuffle the length of all numbers with temporary storage
		int tmpdel = del;   //shuffle the divider with temporary storage.
		del = tmpdel;   //Idle operation, I don’t know why I left it.
		int result2 = tmpfinal / del;    //divide the length of all numbers with a divisor
		double doublefinal = tmpfinal;  //create double copies of values
		double doubledel = del; //create double copies of values
		doubleresult2 = doublefinal / doubledel; //What's the bottom line for double?
		printf("Full division of the sum of numbers (double) is equal to=%g\n", doubleresult2);   //we write the complete result for the number.
		double finalresult = result2;    //make a double from the result value (how much is the whole result)
		printf("Dividing the sum of numbers is equal to=%d\n", result2); //print the value of the integer result.
		if (doubleresult2 > finalresult) //comparison of the full result with the whole result
		{
			delimostchisla=0;
			//printf("Divider =%d,number %d does not divide without remainder", del, a); //if more then it is not divided without remainder
		}

		if (doubleresult2 == finalresult)    //if equal then divide
		{
			delimostchisla=1;
			//printf("Divider =%d,number %d does not divide without remainder", del, a);
		}
	}
	if (tmpfinal == del) //if the sum of all numbers is equal to the divisor
	{
		int tmptemp = tmpfinal; //shuffle the length of all numbers with temporary storage
		int tmpdel = del;   //shuffle the divider with temporary storage.
		del = tmpdel;   //idle operation, I don’t know why I left it.
		int result2 = tmpfinal / del;    //divide the length of all numbers with a divisor
		double doublefinal = tmpfinal;  //create double copies of values
		double doubledel = del; //create double copies of values
		doubleresult2 = doublefinal / doubledel; //What's the bottom line for double?
		printf("Full division of the sum of numbers (double) is equal to=%g\n", doubleresult2);   //we write the complete result for the number.
		double finalresult = result2;    //make a double from the result value (how much is the whole result)
		printf("Dividing the sum of numbers is equal to=%d\n", result2); //print the value of the integer result.
		if (doubleresult2 > finalresult) //comparison of the full result with the whole result
		{
			delimostchisla=0;
			//printf("Divider =%d,number %d does not divide without remainder", del, a); //if more then it is not divided without remainder, debug printing
		}

		if (doubleresult2 == finalresult)    //if equal then divide
		{
			delimostchisla=1;
			//printf("Divider =%d,number %d divided without remainder", del, a);
		}
	}
	if (delimostsummy!=delimostchisla)
	{
		if(delimostsummy==1&&delimostchisla==0)
		{
			printf("Divider =%d,number %d divided without remainder", del, a);
		}
		if(delimostsummy==0&&delimostchisla==1)
		{
			printf("Divider =%d,number %d does not divide without remainder", del, a);
		}
	}
	if(delimostsummy==1&&delimostchisla==1)
	{
		printf("Divider =%d,number %d divided without remainder", del, a);
	}
	if(delimostsummy==0&&delimostchisla==0)
	{
		printf("Divider =%d,number %d does not divide without remainder", del, a);
	}
	return 0;
}
