#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task2.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Unit 
			ISprint0Task2V0* service = new Service();
			int a = 3;
			int b = 4;
			int c;

			//run
			c = service->Add(a, b);

			//Valid
			Assert::AreEqual(7, c);

		};
	};
}
