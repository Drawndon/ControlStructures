#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define PALINDROME
//#define FACTORIAL
//#define EXPONENTIATION
//#define ASCII_TABLE
//#define FIBONACCI_1
//#define FIBONACCI_2

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined PALINDROME
	long long number, reversed_number = 0, temporary_variable;
	cout << "Эта программа определяет является ли число палиндромом" << endl;
	cout << "Введите число: "; cin >> number;
	temporary_variable = number;
	int last_digit;
	while (temporary_variable)
	{
		last_digit = temporary_variable % 10;
		reversed_number = reversed_number * 10 + last_digit;
		temporary_variable /= 10;
	}
	cout << "Число " << number << (number == reversed_number ? " палиндром" : " не палиндром");
#endif
#if defined FACTORIAL
	cout << "Программа вычисления факторила числа" << endl;
	int n;
	cout << "Введите число, факториал которого необходимо вычислить: "; cin >> n;
	int i = 1;
	long long factorial = 1;
	while (i++ < n) factorial *= i;
	cout << "Факториал числа " << n << " = " << factorial;
#endif
#if defined EXPONENTIATION
	cout << "Программа возведения числа в степень" << endl;
	int num, exp;
	long long exp_num = 1;
	cout << "Введите возводимое число: "; cin >> num;
	cout << "Введите показатель степени: "; cin >> exp;
	int i = 0;
	while (i++ < exp) exp_num *= num;
	cout << num << " в степени " << exp << " = " << exp_num;
#endif
#if defined ASCII_TABLE
	cout << "Программа выведения на экран таблицы ASCII-символов" << endl;
	int i = 32; //Можно начать с нуля, но вывожу начиная с тех символов, которые у меня отображаются на экране
	while (i++ < 256)
	{
		cout << (char)i << " ";
		if (i % 16 == 0) cout << endl;
	}
#endif
#if defined FIBONACCI_1
	cout << "Программа формирования ряда Фибоначчи до указанного предела" << endl;
	int fib1 = 1, fib2 = 1, fib, n;
	cout << "Введите число, до которого необходимо сформировать ряд Фибоначчи: "; cin >> n;
	int i = 0;
	if (n == 1) cout << fib1 << " " << fib2;
	else if (n == 2)
	{
		cout << fib1 << " " << fib2 << " " << fib1 + fib2;
	}
	else
	{
		cout << fib1 << " " << fib2 << " ";
		while (fib2 < n)
		{
			fib = fib1 + fib2;
			if (fib <= n) cout << fib << " ";
			else break;
			fib1 = fib2;
			fib2 = fib;
		}
	}
#endif
#if defined FIBONACCI_2
	cout << "Программа вывода заданного количества чисел из ряда Фибоначчи" << endl;
	int fib1 = 1, fib2 = 1, fib, n;
	cout << "Введите какое количество чисел из ряда Фибоначчи необходимо вывести на экран: "; cin >> n;
	if (n == 1) cout << fib1;
	else if (n == 2) cout << fib1 << " " << fib2;
	else
	{
		int i = 2;
		cout << fib1 << " " << fib2 << " ";
		while (i++ < n)
		{
			fib = fib1 + fib2;
			cout << fib << " ";
			fib1 = fib2;
			fib2 = fib;
		}
	}

#endif
}