#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 10_1/lab 10_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ifstream f("test.txt");
			bool x = checkTXT("test.txt");
			Assert::AreEqual(x, true);
		}
	};
}
