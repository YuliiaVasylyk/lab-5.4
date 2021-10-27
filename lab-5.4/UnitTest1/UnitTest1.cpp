#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-5.4\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double f = S1(0, 20);
			Assert::AreEqual(0., f);
		}
	};
}
