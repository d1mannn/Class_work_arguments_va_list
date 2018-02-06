// �������� � �����������

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <stdarg.h> // ��� va_list
using namespace std;


int t2(int a = 5, char b = '-'); // ������� �� ���������. t2();
void addRD(int d, int & k); 
int sumNumb(int num, ...); // num - ���-�� ����������, ... - ��������; ����� ���������� ���-��, ����� � ����������

void main()
{	
	int sum = sumNumb(3, 1, 1, 1, 1, 1, 1, 2, 2, 2);
	cout << sum << endl;
	cout << endl;

	/*int k, d;
	cout << " k = ";
	cin >> k;

	for (int i = 0; i < 2; i++)
	{
		while (1)
		{
			cout << "d: ";
			cin >> d;
			if (d >= 0 && d <= 9)
			{
				addRD(d, k);
				break;
			}
			else
			{
				cout << " !!! " << endl;
			}
		}
		cout << "k = " << k << endl;
	}
	cout << "=======\n======" << endl << endl;
	t2(3,'+');
*/
}

int t2(int a, char b)
{	
	cout << (int)b << endl;
	for (int i = 0; i < a; i++)
	{
		cout << b << endl;
	}
	
	return 0;
}

void addRD(int d, int & k)
{
	k = 10 * k + d; // ��������� ����� k � �������� �� ��������� ���� ���-� �(int *�) ��������� ����� &a;
}

int sumNumb(int num, ...)
{	
	int sum = 0.0;

	va_list arg; // ����������, ������� ��������� va_list - ��� ������������. - ������� �����

	//�������������� ��������� arg

	va_start(arg, num); // ����� ������� ��������� ��� ������������

	//��������� ����
	int t;
	for (; num; num--)
	{
		t = va_arg(arg, int); // ����������� �������� � �������� � ���
		sum += t;
	}



	//���������� ������
	va_end(arg);


	// va_copy() - �������� ������ ���������� � ������
	return sum;
}