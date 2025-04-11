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
	cout << "��� ��������� ���������� �������� �� ����� �����������" << endl;
	cout << "������� �����: "; cin >> number;
	temporary_variable = number;
	int last_digit;
	while (temporary_variable)
	{
		last_digit = temporary_variable % 10;
		reversed_number = reversed_number * 10 + last_digit;
		temporary_variable /= 10;
	}
	cout << "����� " << number << (number == reversed_number ? " ���������" : " �� ���������");
#endif
#if defined FACTORIAL
	cout << "��������� ���������� ��������� �����" << endl;
	int n;
	cout << "������� �����, ��������� �������� ���������� ���������: "; cin >> n;
	int i = 1;
	long long factorial = 1;
	while (i++ < n) factorial *= i;
	cout << "��������� ����� " << n << " = " << factorial;
#endif
#if defined EXPONENTIATION
	cout << "��������� ���������� ����� � �������" << endl;
	int num, exp;
	long long exp_num = 1;
	cout << "������� ���������� �����: "; cin >> num;
	cout << "������� ���������� �������: "; cin >> exp;
	int i = 0;
	while (i++ < exp) exp_num *= num;
	cout << num << " � ������� " << exp << " = " << exp_num;
#endif
#if defined ASCII_TABLE
	cout << "��������� ��������� �� ����� ������� ASCII-��������" << endl;
	int i = 32; //����� ������ � ����, �� ������ ������� � ��� ��������, ������� � ���� ������������ �� ������
	while (i++ < 256)
	{
		cout << (char)i << " ";
		if (i % 16 == 0) cout << endl;
	}
#endif
#if defined FIBONACCI_1
	cout << "��������� ������������ ���� ��������� �� ���������� �������" << endl;
	int fib1 = 1, fib2 = 1, fib, n;
	cout << "������� �����, �� �������� ���������� ������������ ��� ���������: "; cin >> n;
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
	cout << "��������� ������ ��������� ���������� ����� �� ���� ���������" << endl;
	int fib1 = 1, fib2 = 1, fib, n;
	cout << "������� ����� ���������� ����� �� ���� ��������� ���������� ������� �� �����: "; cin >> n;
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