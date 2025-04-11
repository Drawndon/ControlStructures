#include <iostream>
#include <iomanip>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define FACTORIAL
//#define EXPONENTIATION
#define ASCII_TABLE
//#define FIBONACCI_LIMIT
//#define FIBONACCI_ROW
//#define PRIME_NUMBERS
//#define PERFECT_NUMBERS
//#define PYTHAGORAS_TABLE
//#define PARALLELOGRAM
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FACTORIAL
	cout << "Программа вычисления факториала числа" << endl;
	int number;
	cout << "Введите число, факториал которого необходимо вычислить: "; cin >> number;
	unsigned long long factorial = 1;
	for (int i = 1; i <= number; i++)
		factorial *= i;
	cout << "Факториал числа " << number << " = " << factorial << endl;
#endif // FACTORIAL
#ifdef EXPONENTIATION
	cout << "Программа возведения числа в степень" << endl;
	double number;
	int exp;
	cout << "Введите число, которое необходимо возвести в степень: "; cin >> number;
	
	cout << "Введите степень числа: "; cin >> exp;
	double result = 1;
	if (exp < 0)
	{
		for (int i = 0; i < abs(exp); i++)
		{
			result /= number;
		}
	}
	else if (exp > 0)
	{
		for (int i = 1; i <= exp; i++)
		{
			result *= number;
		}
	}
	cout << number << " в степени " << exp <<  " = " << result << endl;
#endif // EXPONENTIATION
#ifdef ASCII_TABLE
	int stop_border = UCHAR_MAX;
	cout << "Программа вывода ASCII таблицы символов" << endl;
	for (int i = 0; i <= stop_border; i++) //Счетчик начинаю не с нуля, потому что до этого значения у меня в консоли выводятся пустые строки
	{
		cout << setw(2) << (char)i << " ";
		if (i % 16 == 0)
			cout << endl;
	}
#endif // ASCII_TABLE
#ifdef FIBONACCI_LIMIT
	int number;
	cout << "Программа вывода ряда Фибоначчи до указанного предела" << endl;
	cout << "Введите число, до которого необходимо вывести ряд Фибоначчи: "; cin >> number;
	int fib1 = 1, fib2 = 1, fib;
	if (number == 1)
		cout << fib1 << " " << fib2;
	else if (number == 2)
		cout << fib1 << " " << fib2 << " " << fib1 + fib2;
	else
	{
		cout << fib1 << " " << fib2 << " ";
		for (int i = 2; fib2 < number; ++i)
		{
			fib = fib1 + fib2;
			if (fib <= number)
				cout << fib << " ";
			else
				break;
			fib1 = fib2;
			fib2 = fib;
		}
	}
	cout << endl;

#endif // FIBONACCI_LIMIT
#ifdef FIBONACCI_ROW
	int number;
	cout << "Программа вывода заданного количества чисел из ряда Фибоначчи" << endl;
	cout << "Сколько чисел из ряда Фибоначчи вы хотите увидеть. Введите число: "; cin >> number;
	unsigned long long fib1 = 1, fib2 = 1, fib;
	if (number == 1)
		cout << fib1;
	else if (number == 2)
		cout << fib1 << " " << fib2;
	else
	{
		cout << fib1 << " " << fib2 << " ";
		for (int i = 2; i < number; ++i)
		{
			fib = fib1 + fib2;
			cout << fib << " ";
			fib1 = fib2;
			fib2 = fib;
		}
	}
	cout << endl;
#endif // FIBONACCI_ROW
#ifdef PRIME_NUMBERS
	int number;
	cout << "Программа вывода ряда простых чисел" << endl;
	cout << "Введите число, до которого необходимо вывести ряд простых чисел: "; cin >> number;
	for (int i = 1; i <= number; i++)
	{
		int counter = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				counter++;
		}
		if (counter == 2)
			cout << i << " ";

	}
	cout << endl;

#endif // PRIME_NUMBERS
#ifdef PERFECT_NUMBERS
	int number;
	cout << "Программа вывода ряда совершенных чисел" << endl;
	cout << "Введите число, до которого необходимо вывести ряд совершенных чисел: "; cin >> number;
	for (int i = 1; i <= number; ++i)
	{
		int s = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				s += j;
		}
		if (i == s)
			cout << i << " ";
	}
	cout << endl;
#endif // PERFECT_NUMBERS
#ifdef PYTHAGORAS_TABLE
	int row = 10, column = 10;
	cout << "Программа вывода таблицы Пифагора" << endl;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= column; j++)
		{
			cout << setw(3) << i * j << " ";
		}
		cout << endl;
	}
#endif // PYTHAGORAS_TABLE
#ifdef PARALLELOGRAM
	int n;
	cin >> n;
	for (int i = 0; i < 2 * n; i++)
	{
		if (i < n)
		{
			for (int j = 0; j < 2 * n; j++)
			{


				if (j == n - i - 1) cout << "/";
				else if (j == n + i) cout << "\\";
				else cout << " ";
			}
		}
		else if (i >= n)
			{
			for (int j = 0; j < 2 * n; j++)
			{
				if (j == n - i - 1) cout << "\\";
				else if (j == n + i) cout << "/";
				else cout << " ";
			}
		}
		cout << endl;
	}

#endif // PARALLELOGRAM










}