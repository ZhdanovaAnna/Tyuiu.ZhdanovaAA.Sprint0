// Tyuiu.ZhdanovaAA.Sprint0.Task7.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task7* rezalt = new Rezalt2();
    setlocale(LC_ALL, "Russian");
    cout << "ZhdanovaAA\n" << "Task7_V1" << endl;
    cout << "������� 4-��������� �����: ";
    int a, b;
    scanf_s("%i", &a);
    cout << "������� �����: ";
    scanf_s("%i", &b);
    cout << "����� ���� � 4-��������� ����� " << a << ": " << boolalpha << rezalt->Rezalt(a, b) << endl;
}
