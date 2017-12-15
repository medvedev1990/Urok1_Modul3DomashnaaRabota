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
	cout << "введите номер задания" << endl;
	cin >> N;
	switch (N)
	{
	case 1:
	{
#pragma region Zadanie 1
		/*1.	Напишите функцию int f(int h, int m, int s),
		которая принимает три целых аргумента (часы h, минуты m и секунды s)
		и возвращает количество секунд, прошедших с начала дня.*/
		int hh;
		int mm;
		int sec;
		int itogo;
		cout << "введите колличество часов прошедших с начало суток" << endl;
		cin >> hh;
		cout << "введите кооличество минут" << endl;
		cin >> mm;
		cout << "введите колличество секунд" << endl;
		cin >> sec;
		if (((hh >= 0) && (hh <= 24)) && ((mm >= 0) && (mm <= 60)) && ((sec >= 0) && (sec <= 60)))
		{
			itogo = (hh * 3600) + (mm * 60) + sec;
			cout << itogo << " секунд прошло с начало суток" << endl;
		}
		else
			cout << "вы ввели не корректные данные" << endl;
#pragma endregion
	}
	break;
	case 2:
	{
#pragma region Zadanie 2
		/*2.	Напишите функцию int f(int m, int d),
		которая принимает два целых аргумента (месяц m и день d)
		и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 дней.*/
		short int mes;
		short int den;
		short int itogoDney;
		cout << "введите месяц где январь - 1, декабрь - 12" << endl;
		cin >> mes;
		cout << "введите день месяца от 1 до 30" << endl;
		cin >> den;
		if (((mes != 0) && (mes <= 12)) && ((den >= 0) && (den <= 30)))
		{
			itogoDney = ((mes - 1) * 30) + den;
			cout << itogoDney << " прошло с начало года" << endl;
		}
		else
			cout << "вы ввели не корректные числа" << endl;
#pragma endregion
	}
	break;
	case 3:
	{
#pragma region Zadanie 3
		/*3.	Напишите функцию int f(int m, int d),
		которая принимает два целых аргумента (месяц m и день d)
		и возвращает количество дней, прошедших с начала года.
		Считаем, что в каждом месяце 30 или 31дней, а год не високосный.*/
		short int mes;
		short int den;
		short int itogoDney;
		cout << "введите месяц где январь - 1, декабрь - 12" << endl;
		cin >> mes;
			switch (mes)
			{
			case 1://январь
			{
				cout << "введите день месяца от 1 до 30" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 2: //февраль
			{
				cout << "введите день месяца от 1 до 28" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 28))
				{
					itogoDney = 31 + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 3://март
			{
				cout << "введите день месяца от 1 до 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = (((mes - 1) * 30) - 1) + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 4: //апрель
			{
				cout << "введите день месяца от 1 до 30" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 30))
				{
					itogoDney = ((mes - 1) * 30) + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 5://май
			{
				cout << "введите день месяца от 1 до 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = ((mes - 1) * 30) + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 6: //июнь
			{
				cout << "введите день месяца от 1 до 30" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 30))
				{
					itogoDney = (((mes - 1) * 30) + 1) + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 7://июль
			{
				cout << "введите день месяца от 1 до 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = (((mes - 1) * 30) + 1) + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 8: //август
			{
				cout << "введите день месяца от 1 до 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = (((mes - 1) * 30) + 2) + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 9://сентябрь
			{
				cout << "введите день месяца от 1 до 30" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 30))
				{
					itogoDney = (((mes - 1) * 30) + 3) + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 10://октябрь
			{
				cout << "введите день месяца от 1 до 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = (((mes - 1) * 30) + 3) + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 11: // ноябрь
			{
				cout << "введите день месяца от 1 до 30" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 30))
				{
					itogoDney = (((mes - 1) * 30) + 4) + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			break;
			case 12: //декабрь
			{
				cout << "введите день месяца от 1 до 31" << endl;
				cin >> den;
				if ((den >= 0) && (den <= 31))
				{
					itogoDney = (((mes - 1) * 30) + 4) + den;
					cout << itogoDney << " прошло с начало года" << endl;
				}
				else
					cout << "в этом месяце нет столько дней" << endl;
			}
			default:
				cout << "нет такого месяца" << endl;
				break;
			}
#pragma endregion
	}
	break;
	case 4:
	{
#pragma region Zadanie 4
		/*4.	Напишите функцию f(int& m1, int& m0, int N),
		которая возвращает первую и последнюю цифры двузначного натурального числа N.*/
		short int a;
		cout << "введите двухзначное число" << endl;
		cin >> a;
		if ((a >= 10) && (a < 100))
		{
			int b = a / 10;
			int c = a % 10;
			cout << "первая цифра вашего числа " << b << endl;
			cout << "вторая цифра вашего числа " << c << endl;
		}
		else
		{
			cout << "вы ввели не верное число" << endl;
		}
#pragma endregion
	}
	break;
	case 5:
	{
#pragma region Zadanie 5
		/*5.	Напишите функцию int f(int m1, int m2, int m3),
		которая находит наименьшее число из заданного набора трех целых чисел. Используйте условный оператор if*/
		short int a;
		short int b;
		short int c;
		cout << "введите первое целое число" << endl;
		cin >> a;
		cout << "введите второе целое число" << endl;
		cin >> b;
		cout << "введите третье целое число" << endl;
		cin >> c;
		if ((a != b) && (a != c) && (b != c))
		{
			if ((a < b) && (a < c))
				cout << "наименьшее число а" << endl;
			else if ((b < a) && (b < c))
				cout << "наименьшее число b" << endl;
			else if ((c < a) && (c < b))
				cout << "наименьшее число c" << endl;
			else
				cout << "error" << endl;
		}
		else
			cout << "вы ввели два одинаковых числа повторите ввод" << endl;
#pragma endregion
	}
	break;
	case 6:
	{
#pragma region Zadanie 6
		/*6.	Напишите функцию f(int m, int n),
		которая определяет для пары целых чисел m и n, кратно ли второе число первому*/
		int a;
		int b;
		float c;
		cout << "введите первое целое число" << endl;
		cin >> a;
		cout << "введите второе целое число" << endl;
		cin >> b;
		c = b%a;
		if (c == 0)
			cout << "числа b кратно " << a << endl;
		else
			cout << "False" << endl;

#pragma endregion
	}
	break;
	default:
		cout << "Нет такого задания! Повторите ввод" << endl;
		goto start;
		break;
	}
}
