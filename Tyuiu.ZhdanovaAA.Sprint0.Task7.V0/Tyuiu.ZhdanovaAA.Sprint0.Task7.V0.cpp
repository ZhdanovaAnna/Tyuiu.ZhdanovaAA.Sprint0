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
    cout << "Введите 3-ехзначное число: ";
    int a, b;
    scanf_s("%i", &a);
    cout << "Введите цифру: ";
    scanf_s("%i", &b);
    cout << "Цифра есть в 3-ехзначном числе " << a << ": " << boolalpha << rezalt->Rezalt(a, b) << endl;
}
