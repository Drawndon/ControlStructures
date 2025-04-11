#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "ControlStructures" << endl;
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	cout << temperature << endl;
	if (temperature > 50)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 40)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 30)
	{
		cout << "Капец как жарко" << endl;
	}
	else if (temperature > 20)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 10)
	{
		cout << "Тепло" << endl;
	}
	
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -30)
	{
		cout << "Сильный мороз" << endl;
	}
	else if (temperature > -70)
	{
		cout << "Вы на северном полюсе" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
}