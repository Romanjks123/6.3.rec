#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMaxWithEvenNumbers)
        {
            // Test case with only even numbers
            int arr[] = { 2, 4, 6, 8, 10 };
            const int size = sizeof(arr) / sizeof(arr[0]);
            Assert::AreEqual(10, Max(arr, size, arr[0], 0), L"Max did not return the correct maximum even number");
        }

        TEST_METHOD(TestMaxWithMixedNumbers)
        {
            // Test case with mixed even and odd numbers
            int arr[] = { 1, 3, 4, 7, 6, 8, 5 };
            const int size = sizeof(arr) / sizeof(arr[0]);
            Assert::AreEqual(8, Max(arr, size, arr[0], 0), L"Max did not return the correct maximum even number");
        }

        TEST_METHOD(TestMaxWithNoEvenNumbers)
        {
            // Test case with no even numbers
            int arr[] = { 1, 3, 5, 7, 9 };
            const int size = sizeof(arr) / sizeof(arr[0]);
            Assert::AreEqual(arr[0], Max(arr, size, arr[0], 0), L"Max should return the first element when there are no even numbers");
        }

        TEST_METHOD(TestMaxWithSingleEvenNumber)
        {
            // Test case with a single even number
            int arr[] = { 4 };
            const int size = sizeof(arr) / sizeof(arr[0]);
            Assert::AreEqual(4, Max(arr, size, arr[0], 0), L"Max did not return the correct maximum even number for single even element");
        }

        TEST_METHOD(TestMaxWithSingleOddNumber)
        {
            // Test case with a single odd number
            int arr[] = { 3 };
            const int size = sizeof(arr) / sizeof(arr[0]);
            Assert::AreEqual(3, Max(arr, size, arr[0], 0), L"Max should return the first element when there is a single odd number");
        }
	};
}
