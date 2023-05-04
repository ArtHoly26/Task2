﻿#include <iostream>

using namespace std;
//1. Пользователь вводит с клавиатуры время в секундах, прошедшее с начала дня.Вывести на экран текущее время в часах, минутах и секундах.Посчитать, сколько часов, минут и секунд осталось до полуночи.
//2. Пользователь вводит данные о ежемесячных расходах за 6 месяцев.Вывести на экран общую сумму расходов и среднемесячный расход(среднее арифметическое).
//3. Написать программу вычисления объема параллелепипеда.Ниже приведен рекомендуемый вид экрана во время выполнения программы :
//Вычисление объема параллелепипеда.
//Введите исходные данные
//Длина(см) -> 9;
//Ширина(см) -> 7.5;
//Высота(см) -> 5;
//Объем: 337.50 куб.см.

//#define Task1
//#define Task2
//#define Task3

int main()
{
	setlocale(LC_ALL, "Rus");
#ifdef Task1
	int sec = 0, sec2 = 0;
	int min = 0, min2 = 0;
	int hour = 0, hour2 = 0;
	cout << "Введите колличество секунд прошедшее с начала дня (не более 86400)" << endl;
	cin >> sec;
	do
	{
		sec -= 60;
		min += 1;
		if (min > 60)
		{
			hour += 1;
			min -= 60;
		}
		if (hour == 24) hour = min = sec = 0;
		
	} while (sec > 60);
	cout << "Часов:" << hour << " Минут: " << min << " Секунд:" << sec << endl;
	cout << "До полуночи: Часов: " << 23 - hour << " Минут: "<< 60 - min << " Секунд: " << 60 - sec << endl;
#endif 

#ifdef Task2
	int num1, num2, num3, num4, num5, num6;
	int avereg = 0;
	cout << "Введите расходы за 6 месяцев: " << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
	cout << "Общая сумма расходов: " << num1+num2+num3+num4+num5+num6 << endl;
	cout << "Средний расход: " << (num1 + num2 + num3 + num4 + num5 + num6)/6 << endl;
#endif

#ifdef Task3
	double length = 0;
	double width = 0;
	double height = 0;
	cout << "Введите исходные данные " << endl;
	cout << "Длинна(см) ->"; cin >> length;
	cout << "Ширина(см) ->"; cin >> width;
	cout << "Высота(см) ->"; cin >> height;
	cout << "Объем: " << length * width * height <<"куб. см"<< endl;
#endif
}