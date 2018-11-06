#include <stdexcept>
#include <iostream>
#include "Class.h"

using namespace std;
void LinkedList::reset_list()//for designers
{
	head = nullptr;
	tail = nullptr;
}

LinkedList::LinkedList()//class constructor
{
	reset_list();
	size = 0;
}

LinkedList::~LinkedList()
{
	clear();
}

void LinkedList::add_first(int newElem)
{
	head = new Node(newElem);
	tail = head;
}

size_t LinkedList::get_size() const//the size of the list
{
	return size;
}

void LinkedList::push_back(int newElem)//at the end of the list
{
	if (size == 0) {
		add_first(newElem);
	}
	else {
		tail->next = new Node(newElem);
		tail = tail->next;
	}
	size++;
}

void LinkedList::push_front(int newElem)//add to start
{
	if (size == 0) {
		add_first(newElem);
	}
	else {
		head = new Node(newElem, head);
	}
	size++;

}

void LinkedList::pop_back()//deleting the last
{
	if (size == 0) return;

	if (size == 1) {
		delete head;
		reset_list();
	}
	else {
		Node * current = head;
		while (current->next != tail) {
			current = current->next;
		}
		current->next = nullptr;
		delete tail;
		tail = current;
	}
	size--;
}
void LinkedList::pop_front()//deleting the first
{
	if (size == 0) return;

	if (size == 1) 
	{   
		reset_list();
		delete head;
		delete tail;
	}
	else
	{
		Node * current = head;
		head = head->next;
	
		delete current;
	}
	size--;
}

int LinkedList::at(size_t index) const//GETTING THE ITEM BY INDEX
{
	if (index < 0)
		throw out_of_range("ERROR");
	else
	{

		if (index >= size) {
			throw out_of_range("Index is greater than list size");
		}
		else {
			size_t counter = 0;
			Node * current = head;
			while (counter != index) {
				current = current->next;
				counter++;
			}
			return current->data;
		}
	}
}

void LinkedList::insert(int new_elem, size_t index)//adding an item by index 
{ 
	if (index < 0)
		throw out_of_range("ERROR");
	else
	{
		if (index > size)
		{
			throw out_of_range("Index is greater than list size");
		}
		else {
			if (index == 0)
			{
				push_front(new_elem);
			}
			else {
				if (index == size)
				{
					push_back(new_elem);

				}
				else
				{
					if (size == 0)
					{
						add_first(new_elem);
						return;
					}
					else {
						size_t counter = 0;
						Node * current = head;
						while (counter != index - 1) {
							current = current->next;
							counter++;
						}

						Node *newelem = new Node(new_elem);
						newelem->next = current->next;
						current->next = newelem;
						size++;
					}
				}
			}
		}
	}
}
void LinkedList::deletee(size_t index) //remove ELEMENT AT INDEX

{
	if (index < 0)
		throw out_of_range("ERROR");
	else
	{
		if (index >= size)
		{
			throw out_of_range("Index is greater than list size");
		}
		else
		{
			if (size == 0)
				throw out_of_range("list is empty");
			else
			{

				size_t counter = 0;
				Node * current = head;
				Node * prev = head;

				while (counter != index)
				{
					prev = current;
					current = current->next;
					counter++;
				}

				if (current == head)
				{
					head = current->next;
				}
				else
				{
					prev->next = current->next;
				}

				delete(current);
				size--;
			}
		}
	}
}


void LinkedList::print_to_console()
{
	Node * current = head;
	while (current != NULL) {
		cout << current->data<<" ";
		current = current->next;
		
	}
}
void LinkedList::clear()
{
	
	if (size == 0) return;

	if (size == 1) {
		reset_list();
		delete head;
		delete tail;
	}
	else {
		while (head != nullptr) {
			pop_front();
		}
		reset_list();
		delete head;
		delete tail;
	}
}
void LinkedList::set(size_t index, int elem)//swap
{
	if (index < 0)
		throw out_of_range("ERROR");
	else
	{
		if (index >= size) {
			throw out_of_range("Index is greater than list size");
		}
		else {
			size_t counter = 0;
			Node * current = head;
			while (counter != index) {
				current = current->next;
				counter++;
			}
			current->data = elem;

		}
	}

}
bool LinkedList::isEmpty()
{
	if (size == 0)
		return true;
	else
		return false;
}
void LinkedList::push_front_list(LinkedList list)
{
	
	list.tail->next = head;
	head = list.head;
	LinkedList main_list;
	Node *current = head;
	Node *El = new Node(current->data, nullptr);
	main_list.head = El;
	Node *cur = El;
	cout << cur->data << " ";
	current = current->next;
	while (current != NULL)
	{
		Node *El = new Node ( current->data);
		cur->next = El;
		cur = El;
		cout << cur->data << " ";
		current = current->next;
		
	}
	head = main_list.head;
	
}
bool LinkedList::equals(LinkedList * list) const
{
	if (size != list->size)
		return false;
	for (int i = 0; i < size; i++)
	{
		if (at(i) != list->at(i))
			return false;
	}
	return true;
}