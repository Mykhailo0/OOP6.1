#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP6.1/Array.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array c(5);
			Array::value_type d[5];

			Array::value_type A = -50;
			Array::value_type B = 50;

			Array::value_type* a = new Array::value_type[5];

			for (int i = 0; i < 5; i++)
				a[i] = A + rand() % int(B - A + 1);

			Array::iterator l = const_cast<Array::iterator>(c.begin());
			for (int j = 0; j < 2 * 5; j++, l++)
				*l = a[j];
			Assert::AreEqual(c[0], -50.0);
		}
	};
}
