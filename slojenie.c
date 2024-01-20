/*Программа вычисляет сумму цифр числа и делимость на другое v1.0 by Keksovname*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	unsigned int sum, divisor;
	int divisibilitynumbers=0,divisibilityamounts=0;
	printf("Введите десятичное целое число и делитель\n");
	scanf("%d%d", &sum, &divisor);
	printf("Число равно =%d делитель равно =%d\n", sum, divisor);
	printf("Теперь проверяем делимость чисел+деление сумм чисел/делитель!\n");
	int result;
	int length(int n)   //код взят из гугла
	{
		int l = 1;
		for (; n /= 10; ++l);
		return l;
	}

	int lengthnumbers = length(sum);
	printf("Длина числа =%d\n",lengthnumbers);
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
		printf("Делитель больше числа, будет нецелый результат");
		return 0;
	}
	double bigsum = sum;  //создаём double копии значенийй
	double bigresult = result;   //создаём double копии значений
	double bigdivisor = divisor; //создаём double копии значений
	if(bigsum>bigdivisor)
	{
		bigresult = bigsum / bigdivisor;//Что в итоге для double?
	}
	else
	{
		bigresult=bigdivisor/bigsum;	//Что в итоге для double?
	}
	printf("Деление суммы числа на число полное=%g\n", bigresult);   //пишем результат полный для числа.
	double finalresult = result;    //делаем double из значения result(сколько получился целый результат)
	printf("Деление суммы числа на число равен=%d\n", result); //выводим значение целого результата.
	if (bigresult > finalresult) //сравнение полного результата с результатом целым
	{
		divisibilityamounts=0;
		//printf("Делитель =%d,число %d не делится без остатка\n", divisor, sum); //если больше то не делится без остатка
	}

	if (bigresult == finalresult)
	{
		divisibilityamounts=1;
		//printf("Делитель =%d,число %d делится без остатка\n", divisor, sum);  //если равно тогда делится
	}
	if (summa < divisor)
	{
		int resultnew = divisor / summa;
		double bigsummanew=summa;
		double bigdivisornew = divisor;
		double bigresultnew=bigdivisornew / bigsummanew;
		double newfinalresult = resultnew;
		printf("Деление суммы чисел полное(double)  равно=%g\n", bigresultnew);
		printf("Деление суммы чисел  равно=%d\n", resultnew);
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
		printf("Деление суммы чисел полное(double)  равно=%g\n", bigresultnew);
		printf("Деление суммы чисел  равно=%d\n", resultnew);
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
		printf("Деление суммы чисел полное(double)  равно=%g\n", bigresultnew);
		printf("Деление суммы чисел  равно=%d\n", resultnew);
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
		printf("Делитель =%d,число %d не делится без остатка", divisor, sum);

	}
	if(divisibilityamounts==1&&divisibilitynumbers==0)
	{
		printf("Делитель =%d,число %d делится без остатка", divisor, sum);

	}
	if(divisibilityamounts==1&&divisibilitynumbers==1)
	{
		printf("Делитель =%d,число %d делится без остатка", divisor, sum);
	}
	if(divisibilityamounts==0&&divisibilitynumbers==0)
	{
		printf("Делитель =%d,число %d не делится без остатка", divisor, sum);
	}
	return 0;
}
