// Tyuiu.ZhdanovaAA.Sprint0.Task2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service :public ISprint0Task2V0
{
	// Inherited via ISprint0Task2V0
	virtual int Add(int num_1, int num_2) override
	{
		return num_1 + num_2;
	}

	// Inherited via ISprint0Task2V1
};
