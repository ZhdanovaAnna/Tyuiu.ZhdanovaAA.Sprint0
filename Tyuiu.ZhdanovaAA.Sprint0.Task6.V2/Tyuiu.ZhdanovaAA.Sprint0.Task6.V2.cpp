// Tyuiu.ZhdanovaAA.Sprint0.Task6.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task6.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task6.Lib.cpp"
using namespace std;
int main()
{
	ISprint0Task6* formula = new Formula3();
	setlocale(LC_ALL, "Russian");
	float a;
	int b;
	cout << "ZhdanovaAA\n";
	cout << "Task6_V2";
	cout << endl;
	cout << "������� �����: ";
	scanf_s("%f", &a);
	cout << "������� ����� �����: ";
	scanf_s("%i", &b);
	cout << "Formula = 5 + (a * b / 3)\n";
	cout << "Rezult = " << formula->Calculate(a, b);
}
