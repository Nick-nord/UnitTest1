#include "pch.h"
#include "CppUnitTest.h"
#include "extended_array.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		
		TEST_METHOD(Mean) {
			ExtArray<int> v1{ 4, 2, 7, 3, -5, 0, -3, 1 };
			Assert::AreEqual(v1.mean(), 1.125);
			try
			{
				if (static_cast<int>(v1.size()));
				throw 0;
			}
			catch (int code)
			{
				std::cout << "Error code: " << code << std::endl;
			}
			catch (const char* error_message)
			{
				std::cout << error_message << std::endl;
			}
		}
		TEST_METHOD(Median) {
			ExtArray<double> v2{ 4.5, 0.7, 10.8, -3.5 };
			Assert::AreEqual(2.6, v2.median());
		}
		TEST_METHOD(Mode) {
			ExtArray<int> v3{ 4, 2, 7, 2, 5, -5, 0, 5, 5 };
			Assert::AreEqual(5, v3.mode().first);
		}

        TEST_METHOD(Zero) {
			ExtArray<int> v4{ };
			Assert::AreEqual(0, static_cast<int>(v4.size()));
		}

	};
}
