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
	int i = 0; //������� �����
	int n = 5; //���������� ��������
	while (i < n)
	{
		cout << i << ". Loops" << endl;
		i++;

	}
#endif //WHILE_1
#if defined WHILE_2
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif
	char key;//��� ���������� ����� ������� ASCII ��� ������� ������� 
	do
	{
		key = _getch(); //������� _getch() ������� ������� ������� � ���������� ASCII ��� ������� �������
						//������� _getch() ��������� � ���������� <conio.h> -Console Input / Output Header
						//�������� ������� ��� ������������ ������� ������
						//(int)key - ����� �������������� ���������� 'key' � ��� 'int,
						//��� ����, ����� ������� �������� ��� ������� �������.
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);

}