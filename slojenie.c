/*Программа вычисляет сумму цифр числа и делимость на другое v1.0 by Keksovname*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	unsigned int sum, divisor;
	printf("Введите десятичное целое число и делитель\n");
	scanf("%d%d", &sum, &divisor);
	printf("Число равно =%d делитель равно =%d\n", sum, divisor);
	printf("Теперь проверяем делимость чисел+деление сумм чисел/делитель!\n");
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
		printf("Делитель =%d,число %d не делится без остатка\n", divisor, sum); //если больше то не делится без остатка
	}

	if (bigresult == finalresult)
	{
		printf("Делитель =%d,число %d делится без остатка\n", divisor, sum);  //если равно тогда делится
}
return 0;
}
