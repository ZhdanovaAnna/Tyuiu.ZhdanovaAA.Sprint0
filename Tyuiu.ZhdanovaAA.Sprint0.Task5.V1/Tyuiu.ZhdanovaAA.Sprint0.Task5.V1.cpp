// Tyuiu.ZhdanovaAA.Sprint0.Task5.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task5.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task5.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task5* service25 = new Service25();
    setlocale(LC_ALL, "Russian");
    float a, b, c;
    cout << "Zhdanova\a\t" << "Anna\t" << "Alexandrovna\n";
    cout << endl;
    cout << "Task5_V1\n";
    cout << "Цена тетради (руб.) -> ";
    scanf_s("%f", &a);
    cout << "Цена обложки (руб.) -> ";
    scanf_s("%f", &b);
    cout << "Количество комплектов (шт.) -> ";
    scanf_s("%f", &c);
    cout << "Стоимость покупки (целых): " << service25->Zadacha(a, b, c) << " " << "руб.";
    cout << endl;
}
