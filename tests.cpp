// tests.cpp
#include "LinkedList.h"
#include <gtest/gtest.h>


	void TestEmpty(IList<int>& list)
	{
			ASSERT_TRUE(list.isEmpty());

			ASSERT_EQ(std::string(""), list.toString());

			list.clear();
			ASSERT_TRUE(list.isEmpty());

	}
		TEST(PointerBasedLinkedList,TestEmpy)
		{
			PointerBasedLinkedList<int> linkedList = PointerBasedLinkedList<int>();

			TestEmpty(linkedList);

		}
		
        TEST(ArrayBasedList, TestEmpy) 
		{           
			ArrayBasedList<int> linkedList = ArrayBasedList<int>();

			TestEmpty(linkedList);

		}

		void Test1Add(IList<int>& list)
		{
			ASSERT_TRUE(list.isEmpty());
			ASSERT_TRUE(list.add(1));

			ASSERT_FALSE(list.isEmpty());

			ASSERT_EQ(std::string("1"), list.toString());

			list.clear();
			ASSERT_TRUE(list.isEmpty());

		}

		TEST(ArrayBasedList, Test1Add)
		{
			ArrayBasedList<int> linkedList =  ArrayBasedList<int>();
			Test1Add(linkedList);
		}

		TEST(PointerBasedLinkedList,Test1Add)
		{
			PointerBasedLinkedList<int> linkedList = PointerBasedLinkedList<int>();
			Test1Add(linkedList);
		}

		void Test2Add(IList<int> & list)
		{
			ASSERT_TRUE(list.isEmpty());
			ASSERT_TRUE(list.add(1));
			ASSERT_TRUE(list.add(2));

			ASSERT_FALSE(list.isEmpty());

			ASSERT_EQ(std::string("1 2"), list.toString());

			list.clear();
			ASSERT_TRUE(list.isEmpty());
		}

		TEST(ArrayBasedList, Test2Add)
		{
			ArrayBasedList<int> linkedList = ArrayBasedList<int>();
			Test2Add(linkedList);

		}

		TEST(PointerBasedLinkedList,Test2Add)
		{
			PointerBasedLinkedList<int> linkedList = PointerBasedLinkedList<int>();
			Test2Add(linkedList);

		}

		void Test3Add(IList<int>& list)
		{
			ASSERT_TRUE(list.isEmpty());
			ASSERT_TRUE(list.add(1));
			ASSERT_TRUE(list.add(2));
			ASSERT_TRUE(list.add(3));

			ASSERT_FALSE(list.isEmpty());

			ASSERT_EQ(std::string("1 2 3"), list.toString());

			list.clear();
			ASSERT_TRUE(list.isEmpty());
		}

		TEST(ArrayBasedList, Test3Add)
		{
			ArrayBasedList<int> linkedList = ArrayBasedList<int>();
			Test3Add(linkedList);

		}


		TEST(PointerBasedLinkedList,Test3Add)
		{
			PointerBasedLinkedList<int> linkedList = PointerBasedLinkedList<int>();
			Test3Add(linkedList);

		}

		void Test11Add(IList<int>& list, bool isPointerBased)
		{
			ASSERT_TRUE(list.isEmpty());
			ASSERT_TRUE(list.add(1));
			ASSERT_TRUE(list.add(2));
			ASSERT_TRUE(list.add(3));
			ASSERT_TRUE(list.add(4));
			ASSERT_TRUE(list.add(5));
			ASSERT_TRUE(list.add(6));
			ASSERT_TRUE(list.add(7));
			ASSERT_TRUE(list.add(8));
			ASSERT_TRUE(list.add(9));
			ASSERT_TRUE(list.add(10));
			if(isPointerBased)
			{
				ASSERT_TRUE(list.add(11));
			}
			else
			{
				ASSERT_FALSE(list.add(11));//Capacity is 11 so won't add
			}

			ASSERT_FALSE(list.isEmpty());

			if(isPointerBased)
			{
				ASSERT_EQ(std::string("1 2 3 4 5 6 7 8 9 10 11"), list.toString());
			}
			else
			{
				ASSERT_EQ(std::string("1 2 3 4 5 6 7 8 9 10"), list.toString());//Capacity is 11 so won't add
			}

			list.clear();
			ASSERT_TRUE(list.isEmpty());
		}

		TEST(ArrayBasedList, Test11Add)
		{
			ArrayBasedList<int> linkedList = ArrayBasedList<int>();
			Test11Add(linkedList, false);
		}

		TEST(PointerBasedLinkedList, Test11Add)
		{
			PointerBasedLinkedList<int> linkedList = PointerBasedLinkedList<int>();
			Test11Add(linkedList, true);

		}

		void TestRemoveNonExistant(IList<int>& list)
		{
			ASSERT_TRUE(list.isEmpty());
			ASSERT_TRUE(list.add(1));
			ASSERT_TRUE(list.add(2));
			ASSERT_TRUE(list.add(3));

			ASSERT_FALSE(list.remove(4));

			ASSERT_FALSE(list.isEmpty());

			ASSERT_EQ(std::string("1 2 3"), list.toString());

			list.clear();
			ASSERT_TRUE(list.isEmpty());
		}

		TEST(ArrayBasedList, TestRemoveNonExistant)
		{
			ArrayBasedList<int> linkedList = ArrayBasedList<int>();
			TestRemoveNonExistant(linkedList);

		}

		TEST(PointerBasedLinkedList, TestRemoveNonExistant)
		{
			PointerBasedLinkedList<int> linkedList = PointerBasedLinkedList<int>();
			TestRemoveNonExistant(linkedList);

		}

		void TestBeginingRemove(IList<int>& list)
		{
			ASSERT_TRUE(list.isEmpty());
			ASSERT_TRUE(list.add(1));
			ASSERT_TRUE(list.add(2));
			ASSERT_TRUE(list.add(3));

			ASSERT_TRUE(list.remove(1));

			ASSERT_FALSE(list.isEmpty());

			ASSERT_EQ(std::string("2 3"), list.toString());

			list.clear();
			ASSERT_TRUE(list.isEmpty());
		}

		TEST(ArrayBasedList, TestBeginingRemove)
		{
			ArrayBasedList<int> linkedList = ArrayBasedList<int>();
			TestBeginingRemove(linkedList);

		}

		TEST(PointerBasedLinkedList, TestBeginingRemove)
		{
			PointerBasedLinkedList<int> linkedList = PointerBasedLinkedList<int>();
			TestBeginingRemove(linkedList);

		}

		void TestMiddleRemove(IList<int>& list)
		{
			ASSERT_TRUE(list.isEmpty());
			ASSERT_TRUE(list.add(1));
			ASSERT_TRUE(list.add(2));
			ASSERT_TRUE(list.add(3));

			ASSERT_TRUE(list.remove(2));

			ASSERT_FALSE(list.isEmpty());

			ASSERT_EQ(std::string("1 3"), list.toString());

			list.clear();
			ASSERT_TRUE(list.isEmpty());
		}

		TEST(PointerBasedLinkedList, TestMiddleRemove)
		{
			PointerBasedLinkedList<int> linkedList = PointerBasedLinkedList<int>();
			TestMiddleRemove(linkedList);

		}

		TEST(ArrayBasedList, TestMiddleRemove)
		{
			ArrayBasedList<int> linkedList = ArrayBasedList<int>();
			TestMiddleRemove(linkedList);

		}

		void TestEndRemove(IList<int>& list)
		{
			ASSERT_TRUE(list.isEmpty());
			ASSERT_TRUE(list.add(1));
			ASSERT_TRUE(list.add(2));
			ASSERT_TRUE(list.add(3));

			ASSERT_TRUE(list.remove(3));

			ASSERT_FALSE(list.isEmpty());

			ASSERT_EQ(std::string("1 2"), list.toString());

			list.clear();
			ASSERT_TRUE(list.isEmpty());
		}

		TEST(ArrayBasedList, TestEndRemove)
		{
			ArrayBasedList<int> linkedList = ArrayBasedList<int>();
			TestEndRemove(linkedList);

		}

		TEST(PointerBasedLinkedList, TestEndRemove)
		{
			PointerBasedLinkedList<int> linkedList = PointerBasedLinkedList<int>();
			TestEndRemove(linkedList);

		}

		void TestMultipleRemove(IList<int>& list)
		{
			ASSERT_TRUE(list.isEmpty());
			ASSERT_TRUE(list.add(1));
			ASSERT_TRUE(list.add(2));
			ASSERT_TRUE(list.add(3));
			ASSERT_TRUE(list.add(4));
			ASSERT_TRUE(list.add(5));
			ASSERT_TRUE(list.add(6));
			ASSERT_TRUE(list.add(7));
			ASSERT_TRUE(list.add(8));
			ASSERT_TRUE(list.add(9));
			ASSERT_TRUE(list.add(10));

			ASSERT_TRUE(list.remove(2));
			ASSERT_TRUE(list.remove(4));
			ASSERT_TRUE(list.remove(6));
			ASSERT_TRUE(list.remove(8));

			ASSERT_FALSE(list.remove(2));
			ASSERT_FALSE(list.remove(4));
			ASSERT_FALSE(list.remove(6));
			ASSERT_FALSE(list.remove(8));

			ASSERT_FALSE(list.isEmpty());

			ASSERT_EQ(std::string("1 3 5 7 9 10"), list.toString());

			list.clear();
			ASSERT_TRUE(list.isEmpty());
		}

		TEST(ArrayBasedList, TestMultipleRemove)
		{
			ArrayBasedList<int> linkedList = ArrayBasedList<int>();
			TestMultipleRemove(linkedList);

		}

		TEST(PointerBasedLinkedList, TestMultipleRemove)
		{
			PointerBasedLinkedList<int> linkedList = PointerBasedLinkedList<int>();
			TestMultipleRemove(linkedList);

		}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
