// Tyuiu.ZhdanovaAA.Sprint0.Task7.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task7* rezalt = new Rezalt1();
    setlocale(LC_ALL, "Russian");
    cout << "ZhdanovaAA\n" << "Task7_V0" << endl;
    cout << "������� 3-��������� �����: ";
    int a, b;
    scanf_s("%i", &a);
    cout << "������� �����: ";
    scanf_s("%i", &b);
    cout << "����� ���� � 3-��������� ����� " << a << ": " << boolalpha << rezalt->Rezalt(a, b) << endl;
}
