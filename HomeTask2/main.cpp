#include <iostream>

using namespace std;
//1. ������������ ������ � ���������� ����� � ��������, ��������� � ������ ���.������� �� ����� ������� ����� � �����, ������� � ��������.���������, ������� �����, ����� � ������ �������� �� ��������.
//2. ������������ ������ ������ � ����������� �������� �� 6 �������.������� �� ����� ����� ����� �������� � �������������� ������(������� ��������������).
//3. �������� ��������� ���������� ������ ���������������.���� �������� ������������� ��� ������ �� ����� ���������� ��������� :
//���������� ������ ���������������.
//������� �������� ������
//�����(��) -> 9;
//������(��) -> 7.5;
//������(��) -> 5;
//�����: 337.50 ���.��.

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
	cout << "������� ����������� ������ ��������� � ������ ��� (�� ����� 86400)" << endl;
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
	cout << "�����:" << hour << " �����: " << min << " ������:" << sec << endl;
	cout << "�� ��������: �����: " << 23 - hour << " �����: "<< 60 - min << " ������: " << 60 - sec << endl;
#endif 

#ifdef Task2
	int num1, num2, num3, num4, num5, num6;
	int avereg = 0;
	cout << "������� ������� �� 6 �������: " << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
	cout << "����� ����� ��������: " << num1+num2+num3+num4+num5+num6 << endl;
	cout << "������� ������: " << (num1 + num2 + num3 + num4 + num5 + num6)/6 << endl;
#endif

#ifdef Task3
	double length = 0;
	double width = 0;
	double height = 0;
	cout << "������� �������� ������ " << endl;
	cout << "������(��) ->"; cin >> length;
	cout << "������(��) ->"; cin >> width;
	cout << "������(��) ->"; cin >> height;
	cout << "�����: " << length * width * height <<"���. ��"<< endl;
#endif
}