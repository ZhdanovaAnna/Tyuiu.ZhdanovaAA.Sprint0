// Tyuiu.ZhdanovaAA.Sprint0.Task6.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task6.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task6.Lib.cpp"
using namespace std;
int main()
{
	ISprint0Task6* formula = new Formula5();
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	cout << "ZhdanovaAA\n";
	cout << "Task6_V4";
	cout << endl;
	cout << "������� ������ �����: ";
	scanf_s("%i", &a);
	cout << "������� ������ �����: ";
	scanf_s("%i", &b);
	cout << "Formula = (a * 8) / b * 2\n";
	cout << "Rezult = " << formula->Calculate(a, b);
}
