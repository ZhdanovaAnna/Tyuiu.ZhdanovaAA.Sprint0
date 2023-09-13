#include "pch.h"
#include "CppUnitTest.h"
#include <math.h> 
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task6.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task6.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethodV2)
		{
			//Unit
			ISprint0Task6* formula = new Formula3();
			float a = 2.4;
			int b = 4;
			float c;


			//run 
			c = formula->Calculate(a, b);

			//valid
			Assert::AreEqual(8.2f, c);
		}
		TEST_METHOD(TestMethodV1)
		{
			//Unit
			ISprint0Task6* formula = new Formula4();
			float a = 2.5;
			int b = 2;
			float c;


			//run 
			c = round(formula->Calculate(a, b)*1000)/1000;

			//valid
			Assert::AreEqual(6.667f, c);
		}
	};
}
