#include "pch.h"
#include "CppUnitTest.h"
#include "../PR4.1/Add.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT41
{
	TEST_CLASS(UT41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Add t(2, 2);

			Assert::AreEqual(t.GetX(), t.GetY());
		}
	};
}