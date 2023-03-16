#include "pch.h"
#include "CppUnitTest.h"
#include "../cequel/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tests
{
	TEST_CLASS(tests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(5.0f, add(2.5f, 2.5f), L"Add function doesn't work");
		}
	};
}
