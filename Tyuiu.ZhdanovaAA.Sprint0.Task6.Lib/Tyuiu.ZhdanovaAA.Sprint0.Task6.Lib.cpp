// Tyuiu.ZhdanovaAA.Sprint0.Task6.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Formula3 :public ISprint0Task6
{
	//inherited via ISprint0Task6
	virtual float Calculate(float a, int b) override
	{
		return 5 + ((a * b )/ 3);
	}
};
class Formula4 :public ISprint0Task6
{
	//inherited via ISprint0Task6
	virtual float Calculate(float a, int b) override
	{
		return (a * b) / (5 + a) + 6;
	}
};
