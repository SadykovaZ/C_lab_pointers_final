#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n = 0;
start:
	cout << "Введите номер лаб.: ";
	cin >> n;
	if (n == 1)
	{
		cout << "1.	Объвить две переменные и два указателя. Присвоить указателям адреса переменных. Сложить переменные, используя указатели и присвоить результат третьей переменной. Вывести результат сложения на экран и адрес результата." << endl;
		int a = 5, b = 4, s = 0;
		int *p, *p1;
		p = &a;
		p1 = &b;
		s = *p + *p1;
		cout << "Адрес результата = " << &s << " " << "Сумма = " << s << endl;
	}
	else if (n == 2)
	{
		cout << "2.	Исправить код: " << endl;
		//#include <iostream> 
		//using namespace std;
		//void main()
		//{
		//	int a = 2, b = 5;
		//	int *p1, *p2 = &b;
		//	*p1 = 10;
		//	cout << *p1 - *p2;
		//}

		//Исправленный код:
		int a = 2, b = 5;
		int *p1, *p2 = &b;
		p1 = &a;

		cout << *p1 - *p2;
		cout << endl;

	}
	else if (n == 3)
	{
		cout << "3.Исправить код:" << endl;
		//#include <iostream> 
		//using namespace std;
		//void main()
		//{
		//	double a = 2.5, b = 5.2, res;
		//	int *p1 = a, p2 = b;
		//	res = *p1 - p2;
		//	cout << res;
		//}

		//Исправленный код

		double a = 2.5, b = 5.2, res;
		double *p1 = &a, *p2 = &b;
		res = *p1 - *p2;
		cout << res;
		cout << endl;
	}
	else if (n == 4)
	{
		cout << "4.Исправить код:" << endl;
		//#include <iostream>
		//using namespace std;
		//void main()
		//{
		//	const int SIZE = 10;
		//	int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
		//	int *p = A;
		//	for (int i = 0; i<SIZE; i++) //выполнить вывод массива используя указатели
		//		cout << *A++;
		//}

		//Исправленный код

		const int SIZE = 10;
		int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
		int *p = A;
		for (p = A; p < A + SIZE; p++) //выполнить вывод массива используя указатели
			cout << *p << " ";
		cout << endl;
	}
	else if (n == 5)
	{
		cout << "5. Используя указатели заполнить массив случайными числами и вывести его на экран." << endl;

		int a[10];
		int *p = a;

		for (p = a; p < a + 10; p++)
		{
			*p = 1 + rand() % 10;
		}
		for (p = a; p < a + 10; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
	}
	else if (n == 6)
	{
		cout << "Дано натуральное число N и массив целых чисел. Используя указатели, выяснить имеется ли в массиве хотя бы одно нечетное отрицательное число и определить его местонахождение в массиве." << endl;

		int a[10] = { 1,2,3,-5,2,8,9,1,4,1 };
		int N;
		int *p = a;
		for (p = a; p < a + 10; p++)
		{
			if (*p < 0 && *p % 2 != 0)
			{
				cout << "Да есть = " << *p << " его номер = " << p - a << endl;
				break;
			}
		}
	}
	else if (n == 7)
	{
		cout << "7. Даны действительные числа а1,..a16. Используя указатели получить min(a1*a9,a2*a10,...,a8*a16)." << endl;
		int a[16] = { 1,2,3,4,5,6,1,2,1,2,2,2,2,1,1,2 };
		int *p = a;
		int res;
		int min = INT_MAX;
		for (p = a; p < a + 16 / 2; p++)
		{
			res = (*p * *(p + 8));
			cout << res << endl;
			if (res < min)
			{
				min = res;
			}
		}
		cout << "Min = " << min << endl;
	}
	else if (n == 8)
	{
		cout << "8. Дана последовательность a1,a2,...,a20. Используя указатели расположить положительные элементы последовательности, стоящие на нечетных местах по возрастанию" << endl;
		int a[20] = { 20,-2,16,1,13,3,10,-7,-6,5,7,8,9,11,12,10,14,13,20,15 };
		int *p = a;
		for (p = a; p < a + 20; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
		for (int pass = 1; pass < 20; pass += 2)
		{
			for (p = a + 1; p < a + 19; p += 2)
			{
				if (*p < 0 || *(p + 2) < 0) continue;
				{
					if (*p > *(p + 2))
					{
						swap(*p, *(p + 2));
					}
				}
			}
		}
		for (p = a; p < a + 20; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
	}

	else if (n == 9)
	{
		cout << "9.Дана последовательность x1,x2,...,x20. Используя указатели элементы, cтоящие на нечетных местах, расположить в порядке возрастания, а на нечетных в порядке убывания" << endl;

		int a[20] = { 1,3,6,10,2,5,8,13,4,20, 4,3,6,11,2,5,89,13,40,20 };
		int *p = a;
		int temp, temp1;

		//смогла сделать только в порядке возрастания четные и нечетные элементы
		for (p = a; p < a + 20; p++)
		{
			cout << *p << " ";
		}
		cout << endl;

		for (int i = 1; i < 20; i++)
		{
			for (int j = 0; j < 20-i; j += 2)
			{
				if (a[j] < a[j + 1])
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < 20; i++)
		{
			for (int j = i + 1; j < 20; j += 2)
			{
				if (a[i] > a[j])
				{
					temp1 = a[i];
					a[i] = a[j];
					a[j] = temp1;
				}
			}
		}
		for (p = a; p < a + 20; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
	}
	else if (n == 10)
	{
		cout << "10. Дана последовательность a1,a2,...,a15. Используя указатели требуется упорядочить ее по возрастанию абсолютных значений элементов." << endl;
		int a[15];
		int *p = a;
		int temp;

		for (p = a; p < a + 15; p++)
		{
			*p = -5 + rand() % 15;
		}
		for (p = a; p < a + 15; p++)
		{
			cout << *p << " ";
		}
		cout << endl;

		for (int i = 0; i < 15 - 1; i++)
		{
			for (int j = 0; j < 15 - i - 1; j++)
			{
				if (abs(a[j]) > abs(a[j + 1]))
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		for (p = a; p < a + 15; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
	}

	else if (n == 11)
	{
		cout << "Используя указатели в упорядоченном по возрастанию массиве выяснить, что больше элементов со значением > Р или элементов со значением < Р." << endl;
		int a[10];
		int *p = a;
		int temp;
		int pos = 0, neg = 0;
		for (p = a; p < a + 10; p++)
		{
			*p = -5 + rand() % 10;
		}
		for (p = a; p < a + 10; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
		for (int i = 0; i < 10; i++)
		{
			for (int j = i + 1; j < 10; j++)
			{
				if (a[i] > a[j])
				{
					swap(a[i], a[j]);
				}
			}
		}
		for (p = a; p < a + 10; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
		for (p = a; p < a + 10; p++)
		{
			if (*p > 0)
				pos++;
			if (*p < 0)
				neg++;
		}
		cout << "Pos = " << pos << " Neg = " << neg << endl;
		if (pos > neg)
			cout << "Больше элементов со значением > Р" << endl;
		else if (neg > pos)
			cout << "Больше элементов со значением < Р " << endl;
	}

	else if (n == 12)
	{
		cout << " Используя указатели в упорядоченном по возрастанию массиве подсчитать сумму элементов, расположенных за элементом со значением Р и до элемента со значением К ( Р > К )." << endl;
		const int size = 10;
		int a[size];
		int *p = a;
		int s = 0;
		int f = 0;
		int sum = 0;

		for (p = a; p < a + size; p++)
		{
			*p = 1 + rand() % 15;
		}
		for (p = a; p < a + size; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (a[i] > a[j])
				{
					swap(a[i], a[j]);
				}
			}
		}
		for (p = a; p < a + size; p++)
		{
			cout << *p << " ";
		}
		cout << endl;
		cout << "Введите начало : ";
		cin >> s;
		cout << "Введите конец : ";
		cin >> f;
		bool flag = false;
		for (p = a; p < a + size; p++)
		{
			if (!flag && *p == s)
				flag = true;
			else if (flag && *p == f)
				flag = false;
			else if (flag)
			{
				cout << *p << " + ";
				sum += *p;
			}
		}
		cout << " = " << sum;
		cout << endl;

	}
	goto start;
	system("pause");
	return 0;
}

