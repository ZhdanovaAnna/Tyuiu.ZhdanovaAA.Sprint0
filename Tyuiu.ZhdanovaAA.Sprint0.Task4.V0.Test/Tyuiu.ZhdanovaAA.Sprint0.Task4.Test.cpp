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
			int a = 2;
			int b = 3;
			int c = 4;
			int d = 5;
			int i;

			//run
			i = service->Calculate(a, b, c, d);

			//valid
			Assert::AreEqual(14, i);
		}
	};
}
