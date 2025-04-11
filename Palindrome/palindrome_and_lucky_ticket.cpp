#include <iostream>
using namespace std;
//#define PALINDROME
//#define LUCKY_TICKET
#define LEFT_BORDER 100000
#define RIGHT_BORDER 999999
#define ANOTHER_LUCKY_TICKET
void main()
{
	setlocale(LC_ALL, "Russian");
#if defined PALINDROME
	int number;
	cout << "Введите число: "; cin >> number;
	int buffer = number; //Создаем копию введенного числа, поскольку данные введенные пользователем
						//должны гарантированно остаться неизменными
	int reverse = 0; //Эта переменная будет хранить исходное число, записанное наоборот
	while (buffer > 0)
	{
		reverse *= 10; //Освобождаем место для следующей цифры
		reverse += buffer % 10; //Получаем младший разряд (цифру) и сохраняем ее в 'reverse'
		buffer /= 10; //Убираем младшую цифру из исходного числа
	}
	cout << reverse << endl;
	cout << number << endl;
	if (reverse == number)
		cout << "Это палиндром" << endl;
	else
		cout << "Это простое число" << endl;
#endif
#if defined LUCKY_TICKET
	cout << "Программа определения счастливого билета" << endl;
	int ticket_number;
	cout << "Введите шестизначный номер: "; cin >> ticket_number;
	while (ticket_number < LEFT_BORDER || ticket_number > RIGHT_BORDER)
	{
		cout << "Введите шестизначный номер: ";
		cin >> ticket_number;
	}
	int right_half = ticket_number % 1000;
	int left_half = ticket_number / 1000;
	int left_sum = 0, right_sum = 0;
	while (left_half)
	{
		left_sum += left_half % 10;
		right_sum += right_half % 10;
		right_half /= 10;
		left_half /= 10;
	}
	cout << "Ticket number " << ticket_number << " is " << (right_sum == left_sum ? "LUCKY" : " ORDINARY") << endl;
#endif
#ifdef ANOTHER_LUCKY_TICKET

	int number;
	cout << "Введите номер автобусного билета: "; cin >> number;
	int sum_1 = 0; //сумма трех младших разрядов
	int sum_2 = 0; //сумма трех старших разрядов
	while (number > 1000)
	{
		sum_1 += number % 10;
		number /= 10;
	}
	while (number > 0)
	{
		sum_2 += number % 10;
		number /= 10;
	}
	cout << sum_1 << endl;
	cout << sum_2 << endl;
#endif
}