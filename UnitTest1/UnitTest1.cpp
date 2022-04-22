#include "pch.h"
#include "CppUnitTest.h"
#include "../Point.h"
#include "../Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point t(2, 2);
			double x = t.GetX();
			Assert::AreEqual(x, 2.);
		}
	};
}
