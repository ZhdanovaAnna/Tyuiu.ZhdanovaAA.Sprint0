// Tyuiu.ZhdanovaAA.Sprint0.Task4.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task4.V0.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task4.Lib.cpp"
using namespace std;
int main()
{
	ISprint0Task4* service = new Service2();
	cout << "ZhdanovaAA\n";
	cout << "C = a * (b + c) + d\n";
	cout << "Rezult = " << service->Calculate(3, 4, 1, 2);
	cout << endl;
}