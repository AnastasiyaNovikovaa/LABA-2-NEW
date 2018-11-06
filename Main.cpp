#include <iostream>
#include "Class.h"

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	
	cout << "Hello! Laboratory work ¹2\n";
	cout << "by Novikova Anastasiya 7302\n";
	cout << "Have a good mood!\n";
	LinkedList lst;
	lst.push_back(4);
	lst.push_back(1);
	lst.push_back(5);
	lst.push_back(7);
	lst.push_front(2);
	lst.push_front(8);
	lst.push_front(0);
	lst.push_front(2);
	lst.push_front(3);
	lst.push_front(6);
	cout << "------------------------------------------------------------------";
	cout << endl;
	cout << "The first list:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "Size of list= " << lst.get_size();
	cout << endl;

	lst.pop_front();
	cout << "list after deleting the first item:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "List output without using the AT function:\n";
	lst.print_to_console();
	cout << endl;
	lst.pop_back();
	cout << "list after deleting last item:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.insert(-1, 3);
	cout << "the list after adding the number -1 at index 3 :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.deletee(5);
	cout << "the list after deleting the number at index 5 :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	lst.set(4,2);
	cout << "list after replacing the number of 4 positions on the number 2:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "Deleting first list\n";
	lst.clear();
	cout << "Check for the emptiness of the 1st list:\n ";
	if (lst.isEmpty() == true) cout << "1st list is empty\n";
	else
		cout << " list is not empty";
	cout << endl;

	lst.push_back(4);
	lst.push_back(1);
	lst.push_back(5);
	lst.push_back(7);
	cout << "The first list:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	LinkedList lst1;
	lst1.push_back(1);
	lst1.push_back(2);
	lst1.push_back(3);
	lst1.push_back(4);
	cout << "The second list:\n";
	for (size_t i = 0; i < lst1.get_size(); i++)
	{
		cout << lst1.at(i) << " ";
	}
	cout << endl;

	cout << "Combine the lists\n";
	lst.push_front_list(lst1);
	
	cout << endl;
	system("pause");
	return 0;
}