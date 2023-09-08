// Tyuiu.ZhdanovaAA.Sprint0.Task3.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task3.V0.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task3.V0.Lib.cpp"
int main()
{
    ISprint0Task3* date = new Service1();
    std::cout << "ZhdanovaAA\n";
    std::cout << "P = a+b+c\n";
    std::cout << "Rezult = " << date->SummV3(28, 32, 10);
    std::cout << std::endl;
}

