// Tyuiu.ZhdanovaAA.Sprint0.Task4.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task4.V0.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task4.Lib.cpp"
using namespace std;
int main()
{
	ISprint0Task4* service = new Service1();
	cout << "ZhdanovaAA\n";
	cout << "C = (a / b * c) / d\n";
	cout << "Rezult = " << service->Calculate(6, 2, 3, 9);
	cout << endl;
}