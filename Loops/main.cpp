#include <iostream>
#include <conio.h>
using namespace std;
#define Escape 27
//#define WHILE_1
//#define WHILE_2
void main()
{
	setlocale(LC_ALL, "Russian");
#if defined WHILE_1
	int i = 0; //Счетчик цикла
	int n = 5; //Количество итераций
	while (i < n)
	{
		cout << i << ". Loops" << endl;
		i++;

	}
#endif //WHILE_1
#if defined WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif
	char key;//Эта переменная будет хранить ASCII код нажатой клавиши 
	do
	{
		key = _getch(); //Функция _getch() ожидает нажатия клавиши и возвращает ASCII код нажатой клавиши
						//Функция _getch() находится в библиотеке <conio.h> -Console Input / Output Header
						//Содержит функции для отслеживания нажатий клавиш
						//(int)key - явное преобразование переменной 'key' в тип 'int,
						//для того, чтобы увидеть числовой код нажатой клавиши.
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);

}