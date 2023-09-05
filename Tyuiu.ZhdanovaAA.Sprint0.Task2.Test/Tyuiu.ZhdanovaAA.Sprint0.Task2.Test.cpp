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
			int num_1 = 3;
			int num_2 = 4;
			int num_3;

			//run
			num_3 = service->Add(num_1, num_2);

			//Valid
			Assert::AreEqual(7, num_3);

		};
	};
}
