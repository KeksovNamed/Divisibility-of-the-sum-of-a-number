/*Программа вычисляет сумму цифр числа и делимость на другое v0.6 by Keksovname*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	unsigned int a, i, m, x, del, temp, summax, temp1, temp2, itemp, final, result;
	printf("Введите десятичное целое число и делитель\n");
	scanf("%d%d", &a, &del);
	printf("Число равно =%d делитель равно =%d\n", a, del);
	int length(int n)   //код взят из гугла
	{
		int l = 1;
		for (; n /= 10; ++l);
		return l;
	}

	i = length(a);  //дальше полностью мой
	x = 0;
	m = 0;
	for (m; m < i; m++)
	{
		x++;
		//printf("Длина числа x=%d\n",x);//вычисляем длину цифры
	}

	printf("Длина числа x=%d\n", x);
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
	printf("Сумма всех чисел сложенных вместе=%d\n", tmpfinal);
	int delimostsummy;
	int delimostchisla;
	int tmptemp = tmpfinal; //перетасовывем длину всех чисел со временным хранилищем
	int tmpdel = del;   //перетасовываем делитель с временным хранилищем.
	del = tmpdel;   //холостая операция,незнаю зачем оставил.
	printf("Теперь проверяем делимость чисел+деление сумм чисел/делитель!\n");
	if (a>del)
	{
		result =  a/del;
	}
	else
	{
		result = del/a;
	}
	double doublea = a;  //создаём double копии значений
	double doubleresult = result;   //создаём double копии значений
	double doubledel = del; //создаём double копии значений
	if(doublea>doubledel)
	{
		doubleresult = doublea / doubledel;//Что в итоге для double?
	}
	else
	{
		doubleresult=doubledel/doublea;	//Что в итоге для double?
	}
	printf("Деление суммы числа на число полное=%g\n", doubleresult);   //пишем результат полный для числа.
	double finalresult = result;    //делаем double из значения result(сколько получился целый результат)
	printf("Деление суммы числа на число равен=%d\n", result); //выводим значение целого результата.
	if (doubleresult > finalresult) //сравнение полного результата с результатом целым
	{
		delimostsummy=0;
		//printf("Делитель =%d,число %d не делится без остатка\n", del, a); //если больше то не делится без остатка,отладочная печать
	}

	if (doubleresult == finalresult)
	{
		delimostsummy=1;
		//printf("Делитель =%d,число %d делится без остатка\n", del, a);  //если равно тогда делится
	}


	if (tmpfinal < del) //если сумма всех чисел меньше делителя
	{
		tmptemp = tmpfinal; //перетасовывем длину всех чисел со временным хранилищем
		tmpdel = del;   //перетасовываем делитель с временным хранилищем.
		del = tmpdel;   //холостая операция,незнаю зачем оставил.
		int result2 = del / tmpfinal;    //делим длину делителя и всех чисел
		double doublefinal = tmpfinal;  //создаём double копии значений
		double doubledel = del; //создаём double копии значений
		double doubleresult2 = doubledel / doublefinal; //Что в итоге для double?
		printf("Деление суммы чисел полное(double)  равно=%g\n", doubleresult2);   //пишем результат полный для числа.
		double finalresult = result2;    //делаем double из значения result(сколько получился целый результат)
		printf("Деление суммы чисел  равно=%d\n", result2); //выводим значение целого результата.
		if (doubleresult2 > finalresult) //сравнение полного результата с результатом целым
		{
			delimostchisla=0;
			//printf("Делитель =%d,число %d не делится без остатка", del, a); //если больше то не делится без остатка
		}

		if (doubleresult == finalresult)
		{
			delimostchisla=1;
			//printf("Делитель =%d,число %d делится без остатка", del, a);  //если равно тогда делится
		}
	}

	if (tmpfinal > del) //если сумма всех чисел больше делителя
	{
		int tmptemp = tmpfinal; //перетасовывем длину всех чисел со временным хранилищем
		int tmpdel = del;   //перетасовываем делитель с временным хранилищем.
		del = tmpdel;   //холостая операция,незнаю зачем оставил.
		int result2 = tmpfinal / del;    //делим длину всех чисел с делителем
		double doublefinal = tmpfinal;  //создаём double копии значений
		double doubledel = del; //создаём double копии значений
		double doubleresult2 = doublefinal / doubledel; //Что в итоге для double?
		printf("Деление суммы чисел полное(double)  равно=%g\n", doubleresult);   //пишем результат полный для числа.
		double finalresult = result2;    //делаем double из значения result(сколько получился целый результат)
		printf("Деление суммы чисел  равно=%d\n", result2); //выводим значение целого результата.
		if (doubleresult2 > finalresult) //сравнение полного результата с результатом целым
		{
			delimostchisla=0;
			//printf("Делитель =%d,число %d не делится без остатка", del, a); //если больше то не делится без остатка,отладочная печать
		}

		if (doubleresult == finalresult)    //если равно тогда делится
		{
			delimostchisla=1;
			//printf("Делитель =%d,число %d делится без остатка", del, a);
		}
	}
	if (tmpfinal == del) //если сумма всех чисел больше делителя
	{
		int tmptemp = tmpfinal; //перетасовывем длину всех чисел со временным хранилищем
		int tmpdel = del;   //перетасовываем делитель с временным хранилищем.
		del = tmpdel;   //холостая операция,незнаю зачем оставил.
		int result2 = tmpfinal / del;    //делим длину всех чисел с делителем
		double doublefinal = tmpfinal;  //создаём double копии значений
		double doubledel = del; //создаём double копии значений
		double doubleresult2 = doublefinal / doubledel; //Что в итоге для double?
		printf("Деление суммы чисел полное(double)  равно=%g\n", doubleresult);   //пишем результат полный для числа.
		double finalresult = result2;    //делаем double из значения result(сколько получился целый результат)
		printf("Деление суммы чисел  равно=%d\n", result2); //выводим значение целого результата.
		if (doubleresult > finalresult) //сравнение полного результата с результатом целым
		{
			delimostchisla=0;
			//printf("Делитель =%d,число %d не делится без остатка", del, a); //если больше то не делится без остатка,отладочная печать
		}

		if (doubleresult == finalresult)    //если равно тогда делится
		{
			delimostchisla=1;
			//printf("Делитель =%d,число %d делится без остатка", del, a);
		}
	}
	if (delimostsummy!=delimostchisla)
	{
		if(delimostsummy==1&&delimostchisla==0)
		{
			printf("Делитель =%d,число %d делится без остатка", del, a);
		}
		if(delimostsummy==0&&delimostchisla==1)
		{
			printf("Делитель =%d,число %d не делится без остатка", del, a);
		}
	}
	if(delimostsummy==1&&delimostchisla==1)
	{
		printf("Делитель =%d,число %d делится без остатка", del, a);
	}
	if(delimostsummy==0&&delimostchisla==0)
	{
		printf("Делитель =%d,число %d не делится без остатка", del, a);
	}
	return 0;
}
