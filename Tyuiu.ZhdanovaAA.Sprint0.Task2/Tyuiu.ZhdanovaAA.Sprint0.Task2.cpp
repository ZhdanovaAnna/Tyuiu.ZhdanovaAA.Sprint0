// Tyuiu.ZhdanovaAA.Sprint0.Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task2.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task2.Lib.cpp"

int main()
{
	ISprint0Task2V0* service = new Service();
	std::cout << "ZhdanovaAA\n";
	std::cout << "Result 24 + 32 = " << service->Add(24, 32);
}