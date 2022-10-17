#pragma once

template<class ItemType>
class Node
{
private:
	ItemType m_value;
	Node<ItemType> * m_next;

public:
	Node() = delete;
	Node(ItemType val);
	Node(ItemType val, Node<ItemType> * nextNode);
	void setItem(const ItemType& val);
	void setNext(Node<ItemType>* nextNodePtr);
	int getItem() const;
	Node * getNext() const;
	virtual ~Node();
	
};

#include "Node.cpp"
