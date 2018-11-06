#include "stdafx.h"
#include "CppUnitTest.h"
#include <stdexcept>
#include "../3.2 алг/Class.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests_for_lab_32_
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		        TEST_METHOD(Empty_or_not_true)
		         {
			       LinkedList List;
			       Assert::IsTrue(List.isEmpty());
		         }
		        TEST_METHOD(Empty_or_not_false)
				{
					LinkedList List;
					List.push_front(5);
					Assert::IsFalse(List.isEmpty());
				}
                TEST_METHOD(equals_or_not_push_back)
				{
					LinkedList List1;
					List1.push_back(1);
					List1.push_back(2);
					List1.push_back(3);
					List1.push_back(4);

					LinkedList List2;
					List2.push_back(1);
					List2.push_back(2);
					List2.push_back(3);
					List2.push_back(4);

					Assert::IsTrue(List1.equals(&List2));
				}
				TEST_METHOD(equals_or_not_combi_push)
				{
					LinkedList List1;
					List1.push_back(1);
					List1.push_back(2);
					List1.push_back(3);
					List1.push_back(4);

					LinkedList List2;
					List2.push_front(4);
					List2.push_front(3);
					List2.push_front(2);
					List2.push_front(1);

					Assert::IsTrue(List1.equals(&List2));
				}
				TEST_METHOD(at_last_item)
				{
					
					LinkedList List;
					List.push_back(1);
					List.push_back(2);
					List.push_back(3);
					List.push_back(4);

					Assert::IsTrue(List.at(3) == 4);
				}
				TEST_METHOD(at_first_item)
				{

					LinkedList List;
					List.push_back(1);
					List.push_back(2);
					List.push_back(3);
					List.push_back(4);

					Assert::IsTrue(List.at(0) == 1);
				}
				TEST_METHOD(at_middle_item)
				{

					LinkedList List;
					List.push_back(1);
					List.push_back(2);
					List.push_back(3);
					List.push_back(4);

					Assert::IsTrue(List.at(2) == 3);
				}
				TEST_METHOD(get_size_true_EMPTY_list)
				{
					LinkedList List;
					Assert::IsTrue(List.get_size() == 0);
				}
                TEST_METHOD(get_size_true)
				{
					LinkedList List;
					List.push_back(1);
					List.push_back(2);
					List.push_back(3);
					
					Assert::IsTrue(List.get_size() == 3);
				}
				TEST_METHOD(get_size_false)
				{
					LinkedList List;
					List.push_back(0);
					List.push_back(5);
					List.push_front(2
);
					List.push_front(4);
					Assert::IsFalse(List.get_size() == 1);
				}
                TEST_METHOD(push_front_list_true)
				{
					LinkedList List;
					List.push_front(1);
					List.push_front(2);
					List.push_front(3);
					List.push_front(4);
					
					Assert::IsTrue(List.at(3) ==1 );
				}
				TEST_METHOD(push_front_list_false)
				{
					LinkedList List;
					List.push_front(1);
					List.push_front(2);
					List.push_front(3);
					List.push_front(4);

					Assert::IsFalse(List.at(3) == 4);
				}
				TEST_METHOD(push_back_List_true)
				{
					LinkedList List;
					List.push_back(1);
					List.push_back(2);
					List.push_back(3);
					List.push_back(4);

					Assert::IsTrue(List.at(3) == 4);
				}
				TEST_METHOD(push_back_List_false)
				{
					LinkedList List;
					List.push_back(1);
					List.push_back(2);
					List.push_back(3);
					List.push_back(4);

					Assert::IsFalse(List.at(3) == 3);
				}
				TEST_METHOD(equals_or_not_back_false)
				{
					LinkedList List1;
					List1.push_back(1);
					List1.push_back(2);
					List1.push_back(3);
			

					LinkedList List2;
					List2.push_back(1);
					

					Assert::IsFalse(List1.equals(&List2));
				}
				TEST_METHOD(equals_or_not_combi_false)
				{
					LinkedList List1;
					List1.push_front(1);
					List1.push_front(2);
					List1.push_back(3);


					LinkedList List2;
					List2.push_front(1);


					Assert::IsFalse(List1.equals(&List2));
				}
				TEST_METHOD(equals_pop_back)
				{
					LinkedList List1;
					List1.push_back(1);
					List1.push_back(2);
					List1.push_back(3);
					List1.push_back(4);

					LinkedList List2;
					List2.push_back(1);
					List2.push_back(2);
					List2.push_back(3);

					List1.pop_back();

					Assert::IsTrue(List1.equals(&List2));
				}
				TEST_METHOD(equals_pop_front)
				{
					LinkedList List1;
					List1.push_front(5);
					List1.push_front(1);
					List1.push_front(2);
					List1.push_front(3);
					

					LinkedList List2;
					List2.push_front(1);
					List2.push_front(2);
					List2.push_front(3);

					List1.pop_front();

					Assert::IsFalse(List1.equals(&List2));
				}
				TEST_METHOD(insert_equals_0_posotion)
				{
					LinkedList List1;
					List1.push_back(1);
					List1.push_back(3);
					List1.push_back(4);

					LinkedList List2;
				
					List2.push_back(3);
					List2.push_back(4);

					List2.insert(1, 0);

					Assert::IsTrue(List1.equals(&List2));
				}
				TEST_METHOD(insert_equals)
				{
					LinkedList List1;
					List1.push_back(1);
					List1.push_back(3);
					List1.push_back(4);

					LinkedList List2;
					List2.push_back(1);
					List2.push_back(2);
					List2.push_back(3);
					List2.push_back(4);

					List1.insert(2, 1);

					Assert::IsTrue(List1.equals(&List2));
				}
                TEST_METHOD(insert_back_equals)
				{
					LinkedList List1;
					List1.push_back(1);
					List1.push_back(2);
					List1.push_back(3);

					LinkedList List2;
					List2.push_back(1);
					List2.push_back(2);
					List2.push_back(3);
					List2.push_back(4);

					List1.insert(4, 1);

					Assert::IsFalse(List1.equals(&List2));
				}
				TEST_METHOD(insert_empty_list)
				{
					LinkedList List1;
					LinkedList List2;
					List2.push_back(1);
					
					List1.insert(1, 0);

					Assert::IsFalse(List1.equals(&List2));
				}
				TEST_METHOD(clear_list_not_empty)
				{
					LinkedList List1;
					List1.push_back(1);
					List1.push_back(2);
					List1.push_back(3);
					List1.clear();
					Assert::IsTrue(List1.isEmpty());

				}
				TEST_METHOD(clear_list_empty)
				{
					LinkedList List;
					List.clear();
					Assert::IsTrue(List.isEmpty());
				}
				TEST_METHOD(set_in_List_true)
				{
					LinkedList List1;
					List1.push_back(1);
					List1.push_back(2);
					List1.push_back(3);
					List1.set(1, 8);
					Assert::IsTrue(List1.at(1) == 8);
				}
				TEST_METHOD(set_in_List_false)
				{
					LinkedList List1;
					List1.push_back(1);
					List1.push_back(2);
					List1.push_back(3);
					List1.set(1, 9);
					Assert::IsFalse(List1.at(1) == 1);
				}
                TEST_METHOD(push_List_first_item_false)
				{
					
					LinkedList list;
					list.push_back(1);
					list.push_back(2);
					list.push_back(3);

					LinkedList list2;
					list2.push_back(4);
					list2.push_back(5);
					list2.push_back(6);
					
					list.push_front_list(list2);//456123
                    
					Assert::IsTrue(list.at(0) != 1);

				}
				TEST_METHOD(push_List_first_item_true)
				{
					
					LinkedList list;
					list.push_back(1);
					list.push_back(2);
					list.push_back(3);

					LinkedList list2;
					list2.push_back(4);
					list2.push_back(5);
					list2.push_back(6);

					list.push_front_list(list2);//456123

					Assert::IsTrue(list.at(0) == 4);

				}
				TEST_METHOD(push_List_equal)
				{
					int check_array[4] = {1,2,3,4 };

					LinkedList list;
					list.push_back(3);
					list.push_back(4);
					
					LinkedList list2;
					list2.push_back(1);
					list2.push_back(2);
				
					list.push_front_list(list2);
					bool check = true;
					for (int i = 0; i < list.get_size(); i++)
						if (list.at(i) != check_array[i]) check = false;
					Assert::IsTrue(check);
				}
				TEST_METHOD(push_List_equal_with_change)
				{
					int check_array[4] = { 1,2,3,4 };

					LinkedList list;
					list.push_back(3);
					list.push_back(4);

					LinkedList list2;
					list2.push_back(1);
					list2.push_back(2);

					list.push_front_list(list2);//1234

					list.push_back(9);//change
					
					bool check = true;
					for (int i = 0; i < list.get_size(); i++)
						if (list.at(i) != check_array[i]) check = false;
					Assert::IsTrue(check);
				}
                TEST_METHOD(delete_middle_item)
				{
					LinkedList list1;
					list1.push_back(1);
					list1.push_back(2);
					list1.push_back(3);
					list1.push_back(4);

					LinkedList list2;
					list2.push_back(1);
					list2.push_back(2);
					list2.push_back(4);

					list1.deletee(2);

					Assert::IsTrue(list1.equals(&list2));
				}
				TEST_METHOD(delete_first_item)
				{
					LinkedList list1;
					list1.push_back(5);
                    list1.push_back(1);
					list1.push_back(2);
			        list1.push_back(4);

					LinkedList list2;
					list2.push_back(1);
					list2.push_back(2);
					list2.push_back(4);

					list1.deletee(0);

					Assert::IsTrue(list1.equals(&list2));
				}
				TEST_METHOD(delete_false)
				{
					LinkedList list1;
					list1.push_back(1);
					list1.push_back(2);
					list1.push_back(3);
					list1.push_back(4);

					LinkedList list2;
					list2.push_back(1);
					list2.push_back(2);
					list2.push_back(4);

					list1.deletee(1);

					Assert::IsFalse(list1.equals(&list2));
				}
				TEST_METHOD(clear_list)
				{
					LinkedList List1;
					List1.push_back(4);
					List1.push_back(2);
					List1.push_back(3);
					List1.clear();
					List1.push_back(6);
					Assert::IsFalse(List1.isEmpty());

				}
				TEST_METHOD(insert_negative_index_iskl)
				{
					LinkedList list1;
					char error;
					try
					{
						list1.insert(-1, 1);
					}
					catch (const std::out_of_range& error)
					{

						Assert::AreEqual("ERROR", error.what());
					}


				}
				TEST_METHOD(insert_huge_index_iskl)
				{
					LinkedList list;
					list.push_back(3);
					list.push_back(4);
					char error;
					try
					{
						list.insert(1, 5);
					}
					catch (const std::out_of_range& error)
					{

						Assert::AreEqual("Index is greater than list size", error.what());
					}


				}
				TEST_METHOD(delete_Empty_list_iskl)
				{
					LinkedList list1;

					try
					{
						list1.deletee(5);
					}
					catch (const std::out_of_range& error)
					{

						Assert::AreEqual("list is empty", error.what());
					}

				}
				TEST_METHOD(delete_negative_index_iskl)
				{
					LinkedList list1;

					try
					{
						list1.deletee(-5);
					}
					catch (const std::out_of_range& error)
					{

						Assert::AreEqual("ERROR", error.what());
					}

				}
				TEST_METHOD(delete_huge_index_iskl)
				{
					LinkedList list;
					list.push_back(3);
					list.push_back(4);
					char error;
					try
					{
						list.deletee(5);
					}
					catch (const std::out_of_range& error)
					{

						Assert::AreEqual("Index is greater than list size", error.what());
					}


				}
				TEST_METHOD(set_negative_index_iskl)
				{
					LinkedList list1;

					try
					{
						list1.set(-5,4);
					}
					catch (const std::out_of_range& error)
					{

						Assert::AreEqual("ERROR", error.what());
					}

				}
				TEST_METHOD(set_huge_index_iskl)
				{
					LinkedList list;
					list.push_back(3);
					list.push_back(4);
					char error;
					try
					{
						list.set( 5,1);
					}
					catch (const std::out_of_range& error)
					{

						Assert::AreEqual("Index is greater than list size", error.what());
					}


				}


	
	};
}