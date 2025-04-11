#pragma warning(disable:4326)
#include <iostream>
using std::cin;
using std::cout;
using namespace std;

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI
//#define SIMPLE_NUMBERS
void main()
{
	setlocale(LC_ALL, "Russian");
/*	for (;;)
	{
		cout << "Hello FOR";
	}*/

	//int n = 5;
	//for (
	//	int i = 0;
	//	i < n;
	//	i++
	//	)
	//{
	//	cout << i << "\t";
	//}
#ifdef FACTORIAL
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	long long f = 1; // factorial
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL
#ifdef POWER
	double a; // Основание степени
	int n; // Показатель степени
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	double N = 1; // Степень
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER
#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
		// (type)value; C-like notation
		// type(value); Functional notation
	}
#endif // ASCII
#ifdef FIBONACCI
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;

	cout << "Введите количество членов ряда: "; cin >> n;
	for (long long i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
		cout << a << "\t";
	cout << endl;
#endif // FIBONACCI

#ifdef SIMPLE_NUMBERS



	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 1; i < n; i++)
	{
		bool simple = true; //Изначально предполагаем, что число простое, но это нужно проверить
		for (int j = 2; j < sqrt(i); j++)
		{
			//Функция sqrt() возвращает квадратный корень числа
			if (i % j == 0)
			{
				simple = false;
				break; // Ключевое слово прерывает текущую итерацию и все последующие итерации цикла
			}
		}
		if (simple) cout << i << "\t";
	}
	cout << endl;
#endif // SIMPLE_NUMBERS

	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		//bool perfect = true; //Предположим, что число совершенное, но это нужно проверить.
		int sum = 0;
		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0) sum += j;
		}
		//if (sum == i) perfect = true;
		if (sum == i) cout << i << "\t";
	}

}