// Tyuiu.ZhdanovaAA.Sprint0.Task7.V3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task7* rezalt = new Rezalt4();
    setlocale(LC_ALL, "Russian");
    cout << "ZhdanovaAA\n" << "Task7_V3" << endl;
    cout << "������� 6-��������� �����: ";
    int a, b;
    cin >> a;
    cout << "������� �����: ";
    cin >> b;
    cout << "����� ���� � 6-��������� ����� " << a << ": " << boolalpha << rezalt->Rezalt(a, b) << endl;
}
