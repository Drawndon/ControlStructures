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
	cout << "��������� ���������� ���������� �����" << endl;
	int number;
	cout << "������� �����, ��������� �������� ���������� ���������: "; cin >> number;
	unsigned long long factorial = 1;
	for (int i = 1; i <= number; i++)
		factorial *= i;
	cout << "��������� ����� " << number << " = " << factorial << endl;
#endif // FACTORIAL
#ifdef EXPONENTIATION
	cout << "��������� ���������� ����� � �������" << endl;
	double number;
	int exp;
	cout << "������� �����, ������� ���������� �������� � �������: "; cin >> number;
	
	cout << "������� ������� �����: "; cin >> exp;
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
	cout << number << " � ������� " << exp <<  " = " << result << endl;
#endif // EXPONENTIATION
#ifdef ASCII_TABLE
	int stop_border = UCHAR_MAX;
	cout << "��������� ������ ASCII ������� ��������" << endl;
	for (int i = 0; i <= stop_border; i++) //������� ������� �� � ����, ������ ��� �� ����� �������� � ���� � ������� ��������� ������ ������
	{
		cout << setw(2) << (char)i << " ";
		if (i % 16 == 0)
			cout << endl;
	}
#endif // ASCII_TABLE
#ifdef FIBONACCI_LIMIT
	int number;
	cout << "��������� ������ ���� ��������� �� ���������� �������" << endl;
	cout << "������� �����, �� �������� ���������� ������� ��� ���������: "; cin >> number;
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
	cout << "��������� ������ ��������� ���������� ����� �� ���� ���������" << endl;
	cout << "������� ����� �� ���� ��������� �� ������ �������. ������� �����: "; cin >> number;
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
	cout << "��������� ������ ���� ������� �����" << endl;
	cout << "������� �����, �� �������� ���������� ������� ��� ������� �����: "; cin >> number;
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
	cout << "��������� ������ ���� ����������� �����" << endl;
	cout << "������� �����, �� �������� ���������� ������� ��� ����������� �����: "; cin >> number;
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
	cout << "��������� ������ ������� ��������" << endl;
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