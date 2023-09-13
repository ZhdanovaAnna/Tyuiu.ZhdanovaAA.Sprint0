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
		TEST_METHOD(TestMethodV1)
		{
			//Unit
			ISprint0Task6* formula = new Formula1();
			int a = 9;
			int b = 3;
			int c;


			//run 
			c = formula->Calculate(a, b);

			//valid
			Assert::AreEqual(7, c);
		}
		TEST_METHOD(TestMethodV2)
		{
			//Unit
			ISprint0Task6* formula = new Formula2();
			int a = 5;
			int b = 6;
			int c;


			//run 
			c = formula->Calculate(a, b);

			//valid
			Assert::AreEqual(9, c);
		}
		TEST_METHOD(TestMethodV3)
		{
			//Unit
			ISprint0Task6* formula = new Formula3();
			int a = 2;
			int b = 3;
			int c;


			//run 
			c = formula->Calculate(a, b);

			//valid
			Assert::AreEqual(7, c);
		}
		TEST_METHOD(TestMethodV4)
		{
			//Unit
			ISprint0Task6* formula = new Formula4();
			int a = 2;
			int b = 3;
			int c;


			//run 
			c = formula->Calculate(a, b);

			//valid
			Assert::AreEqual(1, c);
		}
		TEST_METHOD(TestMethodV5)
		{
			//Unit
			ISprint0Task6* formula = new Formula5();
			int a = 2;
			int b = 4;
			int c;


			//run 
			c = formula->Calculate(a, b);

			//valid
			Assert::AreEqual(8, c);
		}
	};
}
