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
    cout << "Введите 6-тизначное число: ";
    int a, b;
    cin >> a;
    cout << "Введите цифру: ";
    cin >> b;
    cout << "Цифра есть в 6-тизначном числе " << a << ": " << boolalpha << rezalt->Rezalt(a, b) << endl;
}
