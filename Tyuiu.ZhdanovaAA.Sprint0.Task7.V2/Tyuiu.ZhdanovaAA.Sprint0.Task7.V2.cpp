// Tyuiu.ZhdanovaAA.Sprint0.Task7.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task7* rezalt = new Rezalt3();
    setlocale(LC_ALL, "Russian");
    cout << "ZhdanovaAA\n" << "Task7_V2" << endl;
    cout << "������� 5-��������� �����: ";
    int a, b;
    cin >> a;
    cout << "������� �����: ";
    cin >> b;
    cout << "����� ���� � 5-��������� ����� " << a << ": " << boolalpha << rezalt->Rezalt(a, b) << endl;
}
