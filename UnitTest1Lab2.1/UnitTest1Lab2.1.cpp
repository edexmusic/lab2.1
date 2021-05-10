#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.1/intRange.cpp"
#include "../lab2.1/intRange.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1Lab21
{
	TEST_CLASS(UnitTest1Lab21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			intRange TEST(0, 4);
			Assert::AreEqual(TEST.rangeCheck(TEST, 3), true);
		}
	};
}
