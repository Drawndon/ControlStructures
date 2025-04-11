#include <iostream>
using namespace std;
using std::cin;
using std::cout;

#define CHESSBOARD
//#define CHESS
//#define TEACHER_CHESS
//#define TEACHER_CHESSBOARD
//#define HARDCHESS
//#define RHOMBUS
//#define TRIANGLE_4
#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196
#define VERTICAL_LINE (char)179
#define WHITE_BOX "\xDB\xDB"// x - шестнадцатеричный DB - это 219 (char)219
#define BLACK_BOX "\x20\x20"

/*
 Escape - последовательность '\x00' позволяет включить в строку символ по шестнадцатеричному ASCII-коду
*/

void main()
{
	/*for (int i = 176; i < 224; i++) // Этот цикл для выяснения кода ascii, который мы хотим рисовать
	{
		//if (i % 16 == 0)
		cout << endl;
		cout << i << "\t" << (char)i << " ";
	}
	cout << endl; */


	setlocale(LC_ALL, ""); // Включили русский


	int n;
	cout << "Введите число: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C"); // Включили латиницу
#ifdef CHESS
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cout << UPPER_LEFT_ANGLE;
			for (int j = 0; j < 2 * n; j++) cout << HORIZONTAL_LINE;
			cout << UPPER_RIGHT_ANGLE << endl;
		}
		if (i % 2 == 0)
		{
			cout << VERTICAL_LINE;
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0) cout << WHITE_BOX << WHITE_BOX;
				else cout << BLACK_BOX << BLACK_BOX;
			}
			cout << VERTICAL_LINE << endl;
		}
		else
		{
			cout << VERTICAL_LINE;
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0) cout << BLACK_BOX << BLACK_BOX;
				else cout << WHITE_BOX << WHITE_BOX;
			}
			cout << VERTICAL_LINE << endl;
		}
		if (i == n - 1)
		{
			cout << LOWER_LEFT_ANGLE;
			for (int j = 0; j < 2 * n; j++) cout << HORIZONTAL_LINE;
			cout << LOWER_RIGHT_ANGLE << endl;
		}
	}
#endif // CHESS

#ifdef TEACHER_CHESS
	cout << endl << "TEACHER_CHESS" << endl;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n) cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0) cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n) cout << VERTICAL_LINE;
			else cout << (~i & 1 ^ j & 1 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
#endif // TEACHER_CHESS

#ifdef TEACHER_CHESSBOARD
	cout << endl << "TEACHER_CHESSBOARD" << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
						for (int i = 0; i < n; i++) cout << (i == n - 1 ? "*" : "* ");
					else for (int i = 0; i < n; i++) cout << (i == n - 1 ? " " : "  ");
				}
				cout << endl;
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
						for (int i = 0; i < n; i++) cout << (i == n - 1 ? " " : "  ");
					else for (int i = 0; i < n; i++) cout << (i == n - 1 ? "*" : "* ");
				}
				cout << endl;
			}
		}
	}
#endif // TEACHER_CHESSBOARD

#ifdef CHESSBOARD
	cout << endl << "CHESSBOARD" << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
						for (int i = 0; i < n; i++) cout << (i == n - 1 ? "*" : "* ");
					else for (int i = 0; i < n; i++) cout << (i == n - 1 ? " " : "  ");
				}
				cout << endl;
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
						for (int i = 0; i < n; i++) cout << (i == n - 1 ? " " : "  ");
					else for (int i = 0; i < n; i++) cout << (i == n - 1 ? "*" : "* ");
				}
				cout << endl;
			}
		}
	}
#endif // CHESSBOARD


#ifdef HARDCHESS
	cout << endl << "HARDCHESS" << endl;
	cout << " ";
	for (int i = 1; i < (2 * n * n - n + 1); i++)
	{
		cout << "-";
	}
	cout << endl;
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int m = 0; m < n; m++)
			{
				cout << "|";
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
					{
						for (int k = 0; k < n; k++)
						{
							cout << (k == n - 1 ? "*" : "* ");
							counter++;
						}
					}
					else
					{
						for (int l = 0; l < n; l++)
						{
							cout << (l == n - 1 ? " " : "  ");
							counter++;
						}
					}
				}
			if (counter == n * n) cout << "|";
			cout << endl;
			counter = 0;
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				cout << "|";
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
					{
						for (int i = 0; i < n; i++)
						{
							cout << (i == n - 1 ? " " : "  ");
							counter++;
						}
					}
					else
					{
						for (int i = 0; i < n; i++)
						{
							cout << (i == n - 1 ? "*" : "* ");
							counter++;
						}
					}
				}
			if (counter == n * n) cout << "|";
			cout << endl;
			counter = 0;
			}
		}
	}
	cout << " ";
	for (int i = 1; i < (2 * n * n - n + 1); i++)
	{
		cout << "-";
	}
	cout << endl;

#endif // HARDCHESS


#ifdef RHOMBUS
	cout << endl << "RHOMBUS" << endl;
	for (int i = 0; i < 2 * n; i++)
	{
		if (i < n)
		{
			for (int j = 0; j < 2 * n; j++)
			{
				if (j == n - i - 1) cout << "/";
				else if (j == n + i) { cout << "\\"; break; }
				else cout << " ";
			}
			cout << endl;
		}
		else
		{
			for (int j = 0; j < 2 * n; j++)
			{
				if (j == i - n) cout << "\\";
				else if (j == 3 * n - i - 1) { cout << "/"; break; }
				else cout << " ";
			}
			cout << endl;
		}
	}
#endif // RHOMBUS

#ifdef TRIANGLE_4
	cout << endl << "TRIANGLE_4" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_4
}