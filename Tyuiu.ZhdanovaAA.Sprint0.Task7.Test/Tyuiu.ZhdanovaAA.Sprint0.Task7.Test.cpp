#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task7.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{	
			//Unit
			ISprint0Task7* rezalt = new Rezalt1();
			int a = 456, b = 4;
			bool n;

			//run
			n = rezalt->Rezalt(a, b);

			//valid 
			Assert::AreEqual(true, n);
		}
		TEST_METHOD(TestMethod2)
		{
			//Unit
			ISprint0Task7* rezalt = new Rezalt2();
			int a = 4567, b = 3;
			bool k;

			//run
			k = rezalt->Rezalt(a, b);

			//valid 
			Assert::AreEqual(false, k);
		}
		TEST_METHOD(TestMethod3)
		{
			//Unit
			ISprint0Task7* rezalt = new Rezalt3();
			int a = 45678, b = 5;
			bool r;

			//run
			r = rezalt->Rezalt(a, b);

			//valid 
			Assert::AreEqual(true, r);
		}
		TEST_METHOD(TestMethod4)
		{
			//Unit
			ISprint0Task7* rezalt = new Rezalt4();
			int a = 456789, b = 3;
			bool p;

			//run
			p = rezalt->Rezalt(a, b);

			//valid 
			Assert::AreEqual(false, p);
		}
		TEST_METHOD(TestMethod5)
		{
			//Unit
			ISprint0Task7* rezalt = new Rezalt5();
			int a = 3456789, b = 3;
			bool z;

			//run
			z = rezalt->Rezalt(a, b);

			//valid 
			Assert::AreEqual(true, z);
		}
	};
}
