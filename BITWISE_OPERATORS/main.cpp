#include <iostream>
using std::cin;
using std::cout;
using namespace std;


#define SIZE 100
#define ABSWAP
#define CHESSBOARD
#define PASCAL_TRIANGLE

void main() {

#ifdef ABSWAP
	cout << "Swap values using bitwise operators" << endl;
    int a = 7, b = 9;
    cout << "Initial values:" << endl;
    cout << "a = " << a << endl << "b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "Swapped values:" << endl;
    cout << "a = " << a << endl << "b = " << b << endl;
#endif // ABSWAP


	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите число: "; cin >> n;
#ifdef PASCAL_TRIANGLE
	cout << endl << "PASCAL TRIANGLE" << endl;
   int arr[SIZE][SIZE];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i) arr[i][j] = 1;
            else arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - 1; j++) cout << " ";
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
#endif // PASCAL_TRIANGLE


#ifdef CHESSBOARD
	cout << endl << "CHESSBOARD with bitwise operators" << endl;
	for (int i = 0; i < n; i++)
	{
		if (i & 1)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (j & 1)
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
					if (j & 1)
						for (int i = 0; i < n; i++) cout << (i == n - 1 ? " " : "  ");
					else for (int i = 0; i < n; i++) cout << (i == n - 1 ? "*" : "* ");
				}
				cout << endl;
			}
		}
	}
#endif // CHESSBOARD



}
