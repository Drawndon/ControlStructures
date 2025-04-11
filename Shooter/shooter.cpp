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
	cout << "Стрелялка" << endl << "(w - вперед, s - назад, a - влево, d - вправо, Space - прыжок, Enter - огонь, Escape - выход)" << endl;
	do
	{
		key = _getch();
		if (key == w || key == W)
			cout << "вперед" << endl;
		else if (key == a || key == A)
		{
			cout << "влево" << endl;
		}
		else if (key == s || key == S)
		{
			cout << "назад" << endl;
		}
		else if (key == d || key == D)
		{
			cout << "вправо" << endl;
		}
		else if (key == Enter)
		{
			cout << "огонь" << endl;
		}
		else if (key == Space)
		{
			cout << "прыжок" << endl;
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
		if (key == 'w' || key == 'W' || key == UpArrow) cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow) cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow) cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow) cout << "Вправо" << endl;
		else if (key == ' ') cout << "Прыжок" << endl;
		else if (key == Enter) cout << "Огонь" << endl;
		else if (key == Escape) cout << "Выход" << endl;
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
		case UpArrow: cout << "Вперед" << endl; break;
		case 's':
		case 'S':
		case DownArrow: cout << "Назад" << endl; break;
		case 'a':
		case 'A':
		case LeftArrow: cout << "Влево" << endl; break;
		case 'd':
		case 'D':
		case RightArrow: cout << "Вправо" << endl; break;
		case Space: cout << "Прыжок" << endl; break;
		case Enter: cout << "Огонь" << endl; break;
		case Escape:
		case -32: break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
#endif // SHOOTER_CASE


}