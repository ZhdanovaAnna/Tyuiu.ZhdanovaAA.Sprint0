#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZhdanovaAA.Sprint0.Task5.Lib/Tyuiu.ZhdanovaAA.Sprint0.Task5.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethodV0)
		{
			//Unit
			ISprint0Task5* service15 = new Service15();
			float a = 2.5;
			float b = 1.5;
			float c = 4.7;
			float d;

			//run
			d = service15->Zadacha(a, b, c);

			//valid
			Assert::AreEqual(17.625f, d);
		}
		TEST_METHOD(TestMethodV1)
		{
			//Unit
			ISprint0Task5* service25 = new Service25();
			float a = 2.5;
			float b = 1.5;
			float c = 4;
			float d;

			//run
			d = service25->Zadacha(a, b, c);

			//valid
			Assert::AreEqual(16.0f, d);
		}
		TEST_METHOD(TestMethodV2)
		{
			//Unit
			ISprint0Task5* service35 = new Service35();
			float a = 2.5;
			float b = 1.5;
			float c = 12.1;
			float d;

			//run
			d = service35->Zadacha(a, b, c);

			//valid
			Assert::AreEqual(16.1f, d);
		}
	};
}
