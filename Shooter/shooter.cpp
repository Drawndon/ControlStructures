#include <iostream>
#include <conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
#define Escape 27
#define w 119
#define W 87
#define a 97
#define A 65
#define s 115
#define S 83
#define d 100
#define D 68
#define Space 32
#define Enter 13
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

//#define SHOOTER_1
//#define SHOOTER_2
#define SHOOTER_CASE
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Shooter" << endl;
#ifdef SHOOTER1
	char key;
	cout << "���������" << endl << "(w - ������, s - �����, a - �����, d - ������, Space - ������, Enter - �����, Escape - �����)" << endl;
	do
	{
		key = _getch();
		if (key == w || key == W)
			cout << "������" << endl;
		else if (key == a || key == A)
		{
			cout << "�����" << endl;
		}
		else if (key == s || key == S)
		{
			cout << "�����" << endl;
		}
		else if (key == d || key == D)
		{
			cout << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "�����" << endl;
		}
		else if (key == Space)
		{
			cout << "������" << endl;
		}
		//		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);
#endif // SHOOTER_1
#ifdef SHOOTER_2
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UpArrow) cout << "������" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow) cout << "�����" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow) cout << "�����" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow) cout << "������" << endl;
		else if (key == ' ') cout << "������" << endl;
		else if (key == Enter) cout << "�����" << endl;
		else if (key == Escape) cout << "�����" << endl;
		else if (key != - 32) cout << "Error" << endl;
	} while (key != Escape);
#endif // SHOOTER_2

#ifdef SHOOTER_CASE
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case 'w':
		case 'W':
		case UpArrow: cout << "������" << endl; break;
		case 's':
		case 'S':
		case DownArrow: cout << "�����" << endl; break;
		case 'a':
		case 'A':
		case LeftArrow: cout << "�����" << endl; break;
		case 'd':
		case 'D':
		case RightArrow: cout << "������" << endl; break;
		case Space: cout << "������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case Escape:
		case -32: break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
#endif // SHOOTER_CASE


}