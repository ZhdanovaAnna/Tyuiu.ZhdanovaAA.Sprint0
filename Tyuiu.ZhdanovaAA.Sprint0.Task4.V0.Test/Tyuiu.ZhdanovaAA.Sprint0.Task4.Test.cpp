#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task4.V0.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			//Unit
			ISprint0Task4* service = new Service1();
			int a = 10;
			int b = 5;
			int c = 3;
			int d = 2;
			int i;

			//run
			i = service->Calculate(a, b, c, d);

			//valid
			Assert::AreEqual(3, i);
		}
		TEST_METHOD(TestMethod2)
		{
			//Unit
			ISprint0Task4* service = new Service2();
			int a = 5;
			int b = 7;
			int c = 5;
			int d = 2;
			int i;

			//run
			i = service->Calculate(a, b, c, d);

			//valid
			Assert::AreEqual(62, i);
		}
		TEST_METHOD(TestMethod3)
		{
			//Unit
			ISprint0Task4* service = new Service3();
			int a = 20;
			int b = 2;
			int c = 5;
			int d = 7;
			int i;

			//run
			i = service->Calculate(a, b, c, d);

			//valid
			Assert::AreEqual(9, i);
		}
		TEST_METHOD(TestMethod4)
		{
			//Unit
			ISprint0Task4* service = new Service4();
			int a = 8;
			int b = 10;
			int c = 5;
			int d = 3;
			int i;

			//run
			i = service->Calculate(a, b, c, d);

			//valid
			Assert::AreEqual(95, i);
		}
		TEST_METHOD(TestMethod5)
		{
			//Unit
			ISprint0Task4* service = new Service5();
			int a = 20;
			int b = 10;
			int c = 5;
			int d = 2;
			int i;

			//run
			i = service->Calculate(a, b, c, d);

			//valid
			Assert::AreEqual(16, i);
		}
	};
}
