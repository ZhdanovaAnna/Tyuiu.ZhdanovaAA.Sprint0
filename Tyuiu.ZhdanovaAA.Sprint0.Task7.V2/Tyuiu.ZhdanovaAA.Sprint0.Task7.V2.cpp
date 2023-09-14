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
    cout << "Введите 5-тизначное число: ";
    int a, b;
    cin >> a;
    cout << "Введите цифру: ";
    cin >> b;
    cout << "Цифра есть в 5-тизначном числе " << a << ": " << boolalpha << rezalt->Rezalt(a, b) << endl;
}
