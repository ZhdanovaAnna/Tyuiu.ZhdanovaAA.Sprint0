// Tyuiu.ZhdanovaAA.Sprint0.Task5.V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task5.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task5.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task5* service35 = new Service35();
    setlocale(LC_ALL, "Russian");
    float a, b, c;
    cout << "Zhdanova\a\t" << "Anna\t" << "Alexandrovna\n";
    cout << endl;
    cout << "Task5_V2\n";
    cout << "���� ������ (����) (���.) -> ";
    scanf_s("%f", &a);
    cout << "���� ������ (������) (���.) -> ";
    scanf_s("%f", &b);
    cout << "���� ������� (���.) -> ";
    scanf_s("%f", &c);
    cout << "��������� ������� (�����): " << service35->Zadacha(a, b, c) << " " << "���.";
    cout << endl;
}
