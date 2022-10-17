// LinkedListExe.cpp : Defines the entry point for the console application.
//

#include "Node.h"


void FreeNodeList(Node<int> * n)
{
	if (n->getNext() == nullptr)
	{
		delete n;
	}
	else
	{
		Node<int> * cur = n->getNext();
		n->setNext(nullptr);
		delete n;
		FreeNodeList(cur);
	}
}


void FreeNodeList(Node<std::string> * n)
{
	if (n->getNext() == nullptr)
	{
		delete n;
	}
	else
	{
		Node<std::string> * cur = n->getNext();
		n->setNext(nullptr);
		delete n;
		FreeNodeList(cur);
	}
}

// This code is just sandbox code
int main1()
{

	Node<int> * head = nullptr;

	Node<int> * cur = nullptr;

	head = new Node<int>(1);

	cur = head;

	Node<int> * temp = new Node<int>(2);

	cur->setNext(temp);

	cur = cur->getNext();

	temp = nullptr;
	temp = new Node<int>(3);

	cur->setNext(temp);

	cur = cur->getNext();

	//Now delete the memory

	FreeNodeList(head);


    return 0;
}

// This code is just sandbox code
int main2()
{

	Node<std::string> * head = nullptr;

	Node<std::string> * cur = nullptr;

	head = new Node<std::string>("one");

	cur = head;

	Node<std::string> * temp = new Node<std::string>("two");

	cur->setNext(temp);

	cur = cur->getNext();

	temp = nullptr;
	temp = new Node<std::string>("three");

	cur->setNext(temp);

	cur = cur->getNext();

	//Now delete the memory

	FreeNodeList(head);


    return 0;
}

// This code is just sandbox code
int main()
{

	main1();
	main2();


    return 0;
}

