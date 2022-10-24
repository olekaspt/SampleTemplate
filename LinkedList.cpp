// LinkedList.cpp : Defines the exported functions for the DLL application.
//

#include "LinkedList.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;
template<class ItemType>
IList<ItemType>::IList() : m_count(0)
{

}

template<class ItemType>
int IList<ItemType>::getSize() const
{
	return m_count;
}



/** Returns true  if list is empty, otherwise true */
template<class ItemType>
bool IList<ItemType>::isEmpty() const
{
	//TODO - hint use m_count

	return false;
	
}


template<class ItemType>
PointerBasedLinkedList<ItemType>::PointerBasedLinkedList() : IList<ItemType>(), m_head(nullptr), m_tail(nullptr)
{

}

/** Adds a value to the LinkedList.  Return true if able to, otherwise false */
template<class ItemType>
bool PointerBasedLinkedList<ItemType>::add(ItemType val)
{
	return false;
	//TODO
}
/** Remove a value to the LinkedList.  Return true if able to, otherwise false.
Will only remove one entry if there are multiple entries with the same value */
template<class ItemType>
bool PointerBasedLinkedList<ItemType>::remove(ItemType val)
{
	//TODO
	return false;
}

/** Remove  all elements from LinkedList */
template<class ItemType>
void PointerBasedLinkedList<ItemType>::clear()
{
	m_head = nullptr;
	m_tail = nullptr;


}
template<class ItemType>
PointerBasedLinkedList<ItemType>::~PointerBasedLinkedList()
{
	clear();
	
}
template<class ItemType>
std::string PointerBasedLinkedList<ItemType>::toString() const
{
	string str = "";


    //TODO
	return str;
}
template<class ItemType>
ArrayBasedList<ItemType>::ArrayBasedList() : IList<ItemType>()
{
	// you got it for free :)
}
template<class ItemType>
bool ArrayBasedList<ItemType>::add(ItemType val)
{
	//TODO
	return false;
}
template<class ItemType>
bool ArrayBasedList<ItemType>::remove(ItemType val)
{
	//TODO
	return false;
}
template<class ItemType>
void ArrayBasedList<ItemType>::clear()
{
	//TODO
}
template<class ItemType>
ArrayBasedList<ItemType>::~ArrayBasedList()
{
	clear();
}
template<class ItemType>
std::string ArrayBasedList<ItemType>::toString() const
{
	string str = "";
	
	//TODO

	return str;
}
