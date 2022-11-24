#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 8.1.string/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			string cs = {'w', 'h', 'i', 'l', 'e', 'b'};
			Change(cs);
			Assert::AreEqual(cs[1], '*');

		}
	};
}