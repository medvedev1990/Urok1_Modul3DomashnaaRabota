#include<iostream>
#include<stdio.h>
#include<locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout.precision(2);
	short unsigned int(N);
	start:
	cout << "������� ����� �������" << endl;
	cin >> N;
	switch (N)
	{
	case 1:
	{
#pragma region Zadanie 1
		/*1.	�������� ������� int f(int h, int m, int s),
		������� ��������� ��� ����� ��������� (���� h, ������ m � ������� s)
		� ���������� ���������� ������, ��������� � ������ ���.*/
		int hh;
		int mm;
		int sec;
		int itogo;
		cout << "������� ����������� ����� ��������� � ������ �����" << endl;
		cin >> hh;
		cout << "������� ����������� �����" << endl;
		cin >> mm;
		cout << "������� ����������� ������" << endl;
		cin >> sec;
		if (((hh >= 0) && (hh <= 24)) && ((mm >= 0) && (mm <= 60)) && ((sec >= 0) && (sec <= 60)))
		{
			itogo = (hh * 3600) + (mm * 60) + sec;
			cout << itogo << " ������ ������ � ������ �����" << endl;
		}
		else
			cout << "�� ����� �� ���������� ������" << endl;
#pragma endregion
	}
	break;
	case 2:
	{
#pragma region Zadanie 2
		/*2.	�������� ������� int f(int m, int d),
		������� ��������� ��� ����� ��������� (����� m � ���� d)
		� ���������� ���������� ����, ��������� � ������ ����. �������, ��� � ������ ������ 30 ����.*/
		short int mes;
		short int den;
		short int itogoDney;
		cout << "������� ����� ��� ������ - 1, ������� - 12" << endl;
		cin >> mes;
		cout << "������� ���� ������ �� 1 �� 30" << endl;
		cin >> den;
		if (((mes != 0) && (mes <= 12)) && ((den >= 0) && (den <= 30)))
		{
			itogoDney = ((mes - 1) * 30) + den;
			cout << itogoDney << " ������ � ������ ����" << endl;
		}
		else
			cout << "�� ����� �� ���������� �����" << endl;
#pragma endregion
	}
	break;
	case 3:
	{
#pragma region Zadanie 3
		/*3.	�������� ������� int f(int m, int d),
		������� ��������� ��� ����� ��������� (����� m � ���� d)
		� ���������� ���������� ����, ��������� � ������ ����.
		�������, ��� � ������ ������ 30 ��� 31����, � ��� �� ����������.*/
		short int mes;
		short int den;
		short int itogoDney;
		cout << "������� ����� ��� ������ - 1, ������� - 12" << endl;
		cin >> mes;
			switch (mes)
			{
			case 1://������
			{
				cout << "������� ���� ������ �� 1 �� 30" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 2: //�������
			{
				cout << "������� ���� ������ �� 1 �� 28" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 28))
				{
					itogoDney = 31 + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 3://����
			{
				cout << "������� ���� ������ �� 1 �� 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = (((mes - 1) * 30) - 1) + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 4: //������
			{
				cout << "������� ���� ������ �� 1 �� 30" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 30))
				{
					itogoDney = ((mes - 1) * 30) + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 5://���
			{
				cout << "������� ���� ������ �� 1 �� 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = ((mes - 1) * 30) + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 6: //����
			{
				cout << "������� ���� ������ �� 1 �� 30" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 30))
				{
					itogoDney = (((mes - 1) * 30) + 1) + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 7://����
			{
				cout << "������� ���� ������ �� 1 �� 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = (((mes - 1) * 30) + 1) + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 8: //������
			{
				cout << "������� ���� ������ �� 1 �� 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = (((mes - 1) * 30) + 2) + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 9://��������
			{
				cout << "������� ���� ������ �� 1 �� 30" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 30))
				{
					itogoDney = (((mes - 1) * 30) + 3) + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 10://�������
			{
				cout << "������� ���� ������ �� 1 �� 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = (((mes - 1) * 30) + 3) + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 11: // ������
			{
				cout << "������� ���� ������ �� 1 �� 30" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 30))
				{
					itogoDney = (((mes - 1) * 30) + 4) + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			break;
			case 12: //�������
			{
				cout << "������� ���� ������ �� 1 �� 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = (((mes - 1) * 30) + 4) + den;
					cout << itogoDney << " ������ � ������ ����" << endl;
				}
				else
					cout << "� ���� ������ ��� ������� ����" << endl;
			}
			default:
				cout << "��� ������ ������" << endl;
				break;
			}
#pragma endregion
	}
	break;
	case 4:
	{
#pragma region Zadanie 4
		/*4.	�������� ������� f(int& m1, int& m0, int N),
		������� ���������� ������ � ��������� ����� ����������� ������������ ����� N.*/
		short int a;
		cout << "������� ����������� �����" << endl;
		cin >> a;
		if ((a >= 10) && (a < 100))
		{
			int b = a / 10;
			int c = a % 10;
			cout << "������ ����� ������ ����� " << b << endl;
			cout << "������ ����� ������ ����� " << c << endl;
		}
		else
		{
			cout << "�� ����� �� ������ �����" << endl;
		}
#pragma endregion
	}
	break;
	case 5:
	{
#pragma region Zadanie 5
		/*5.	�������� ������� int f(int m1, int m2, int m3),
		������� ������� ���������� ����� �� ��������� ������ ���� ����� �����. ����������� �������� �������� if*/
		short int a;
		short int b;
		short int c;
		cout << "������� ������ ����� �����" << endl;
		cin >> a;
		cout << "������� ������ ����� �����" << endl;
		cin >> b;
		cout << "������� ������ ����� �����" << endl;
		cin >> c;
		if ((a != b) && (a != c) && (b != c))
		{
			if ((a < b) && (a < c))
				cout << "���������� ����� �" << endl;
			else if ((b < a) && (b < c))
				cout << "���������� ����� b" << endl;
			else if ((c < a) && (c < b))
				cout << "���������� ����� c" << endl;
			else
				cout << "error" << endl;
		}
		else
			cout << "�� ����� ��� ���������� ����� ��������� ����" << endl;
#pragma endregion
	}
	break;
	case 6:
	{
#pragma region Zadanie 6
		/*6.	�������� ������� f(int m, int n),
		������� ���������� ��� ���� ����� ����� m � n, ������ �� ������ ����� �������*/
		int a;
		int b;
		float c;
		cout << "������� ������ ����� �����" << endl;
		cin >> a;
		cout << "������� ������ ����� �����" << endl;
		cin >> b;
		c = b%a;
		if (c == 0)
			cout << "����� b ������ " << a << endl;
		else
			cout << "False" << endl;

#pragma endregion
	}
	break;
	default:
		cout << "��� ������ �������! ��������� ����" << endl;
		goto start;
		break;
	}
}
