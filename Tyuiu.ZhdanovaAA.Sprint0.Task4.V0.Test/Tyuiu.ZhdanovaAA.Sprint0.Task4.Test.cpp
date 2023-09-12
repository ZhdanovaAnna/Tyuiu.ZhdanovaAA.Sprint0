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
			ISprint0Task4* service = new Service();
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
	};
}
