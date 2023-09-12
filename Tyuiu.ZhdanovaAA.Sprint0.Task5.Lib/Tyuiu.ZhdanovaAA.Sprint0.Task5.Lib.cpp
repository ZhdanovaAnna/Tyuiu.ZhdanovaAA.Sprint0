// Tyuiu.ZhdanovaAA.Sprint0.Task5.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <iostream>  
#include <algorithm> 
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"


// TODO: This is an example of a library function
class Service15 :public ISprint0Task5
{
	//inherited via ISprint0Task5
	virtual float Zadacha(float a, float b, float c) override
	{
		return a * b * c;
	}
};

class Service25 :public ISprint0Task5
{
	//inherited via ISprint0Task5
	virtual float Zadacha(float a, float b, float c) override
	{
		return a * c + b * c;
	}
};

class Service35 :public ISprint0Task5
{
	//inherited via ISprint0Task5
	virtual float Zadacha(float a, float b, float c) override
	{
		return a + b + c;
	}
};