#include <iostream>
using namespace std;
using std::cout;
using std::cin;


#define SQUARE
#define TRIANGLE_1
#define TRIANGLE_2
#define TRIANGLE_3
#define TRIANGLE_4
#define RHOMBUS
#define CHESS

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите число: "; cin >> n;
#ifdef SQUARE
	cout << endl << "SQUARE" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << (j == n - 1 ? "*" : "* ");
		cout << endl;
	}
#endif // SQUARE
#ifdef TRIANGLE_1
	cout << endl << "TRIANGLE_1" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{

			cout << (j == i ? "*" : "* ");
		}
		cout << endl;
	}
#endif // TRIANGLE_1
#ifdef TRIANGLE_2
	cout << endl << "TRIANGLE_2" << endl;
	for (int i = n; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
			cout << (j == 1 ? "*" : "* ");
		cout << endl;
	}
#endif // TRIANGLE_2
#ifdef TRIANGLE_3
	cout << endl << "TRIANGLE_3" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3
#ifdef TRIANGLE_4
	cout << endl << "TRIANGLE_4" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_4
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
#ifdef CHESS

	cout << endl << "CHESS" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0) cout << "+ "; else cout << "- ";
			if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
		}
		cout << endl;
	}
#endif // CHESS

}