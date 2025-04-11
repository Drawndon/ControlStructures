#include <iostream>
using namespace std;
using std::cout;
using std::cin;


//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RHOMBUS_1
//#define RHOMBUS_2
//#define RHOMBUS_3

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
#ifdef RHOMBUS_1
	cout << endl << "RHOMBUS_1" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++) cout << "  "; cout << "/";
		cout << endl;
	}
#endif // RHOMBUS_1
#ifdef RHOMBUS_2
	cout << endl << "RHOMBUS_2" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++) cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0-1; j < i; j++) cout << " "; cout << "\\";
		for (int j = 0; j < (n - i - 1) * 2; j++) cout << " "; cout << "/";
		cout << endl;
}
#endif // RHOMBUS_2
#ifdef RHOMBUS_3
	cout << endl << "RHOMBUS_3" << endl;
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i) cout << "\\";
			else if (i == n - 1 - j || j - n == 2 * n - 1 - i) cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif // RHOMBUS_3
#ifdef CHESS

	cout << endl << "CHESS" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0) cout << "+ "; else cout << "- ";
			//if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // CHESS

}