#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2rek/lab6.2rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62rek
{
	TEST_CLASS(UnitTest62rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int r[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

			int minIndex = 0;
			int maxIndex = 0;
			int result = Sum(r, n, minIndex, maxIndex, 0);
			Assert::AreEqual(9, result);
		}
	};
}
