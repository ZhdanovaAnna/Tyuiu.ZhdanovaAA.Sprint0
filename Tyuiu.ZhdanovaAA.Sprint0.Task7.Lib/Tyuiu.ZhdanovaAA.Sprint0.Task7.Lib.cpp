// Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Rezalt1 :public ISprint0Task7
{
	//Inherited via ISprint0Task7
	virtual bool Rezalt(int a, int b) override
	{
		int num_1 = a / 100, num_2 = a / 10 % 10, num_3 = a % 10;
		bool n = (num_1 == b) || (num_2 == b) || (num_3 == b);
		return n;
	}
};
class Rezalt2 :public ISprint0Task7
{
	//Inherited via ISprintTask7
	virtual bool Rezalt(int a, int b) override
	{
		int num_1 = a / 1000, num_2 = a / 100 % 10, num_3 = a / 10 % 10, num_4 = a % 10;
		bool k = (num_1 == b) || (num_2 == b) || (num_3 == b) || (num_4 == b);
		return k;
	}
};
class Rezalt3 :public ISprint0Task7
{
	//Inherited via ISprintTask7
	virtual bool Rezalt(int a, int b) override
	{
		int num_1 = a / 10000, num_2 = a / 1000 % 10, num_3 = a / 100 % 10, num_4 = a /10 % 10, num_5 = a % 10;
		bool r = (num_1 == b) || (num_2 == b) || (num_3 == b) || (num_4 == b) || (num_5 == b);
		return r;
	}
};
class Rezalt4 :public ISprint0Task7
{
	//Inherited via ISprintTask7
	virtual bool Rezalt(int a, int b) override
	{
		int num_1 = a / 100000, num_2 = a / 10000 % 10, num_3 = a / 1000 % 10, num_4 = a / 100 % 10, num_5 = a / 10 % 10, num_6 = a % 10;
		bool p = (num_1 == b) || (num_2 == b) || (num_3 == b) || (num_4 == b) || (num_5 == b) || (num_6 == b);
		return p;
	}
};
class Rezalt5 :public ISprint0Task7
{
	//Inherited via ISprintTask7
	virtual bool Rezalt(int a, int b) override
	{
		int num_1 = a / 1000000, num_2 = a / 100000 % 10, num_3 = a / 10000 % 10, num_4 = a / 1000 % 10, num_5 = a / 100 % 10, \
			num_6 = a / 10 % 10, num_7 = a % 10;
		bool z = (num_1 == b) || (num_2 == b) || (num_3 == b) || (num_4 == b) || (num_5 == b) || (num_6 == b) || (num_7 == b);
		return z;
	}
};