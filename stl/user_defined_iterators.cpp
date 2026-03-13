// C++ program to implement Custom Linked List and iterator pattern.
#include<iostream>
using namespace std;

// Custom class to handle Linked List operations
// Operations like push_back, push_front, pop_back,
// pop_front, erase, size can be added here
template <typename T>
class LinkedList
{
	struct Node
	{
		T data;
		Node* pNext;
	};

	// Create a new Node
	Node* GetNode(T data)
	{
		Node* pNewNode = new Node;
		pNewNode->data = data;
		pNewNode->pNext = nullptr;

		return pNewNode;
	}

	// Return by reference so that it can be used in
	// left hand side of the assignment expression
	Node*& GetRootNode()
	{
		return m_spRoot;
	}

	static Node* m_spRoot;
public:
	// Forward declaration must be done in the same access scope
	class Iterator;

	// Root of LinkedList wrapped in Iterator type
	Iterator begin()
	{
		return Iterator(m_spRoot);
	}

	// End of LinkedList wrapped in Iterator type
	Iterator end()
	{
		return Iterator(nullptr);
	}

	// Adds data to the end of list
	void push_back(T data);

	void Traverse();

	// Iterator class can be used to sequentially access nodes of linked list
	class Iterator
	{
		const Node* m_pCurrentNode;
	public:
		Iterator(const Node* pNode) noexcept :
			m_pCurrentNode(pNode) { }

		Iterator& operator=(Node* pNode)
		{
			this->m_pCurrentNode = pNode;
			return *this;
		}

		// Prefix ++ overload
		Iterator& operator++()
		{
			if (m_pCurrentNode)
				m_pCurrentNode = m_pCurrentNode->pNext;
			return *this;
		}

		// Postfix ++ overload
		Iterator operator++(int)
		{
			Iterator iterator = *this;
			++*this;
			return iterator;
		}

		bool operator!=(const Iterator& iterator)
		{
			return m_pCurrentNode != iterator.m_pCurrentNode;
		}

		int operator*()
		{
			return m_pCurrentNode->data;
		}
	};


};

//static_member initilized outside class
template <typename T>
typename LinkedList<T>::Node* LinkedList<T>::m_spRoot = nullptr;

template <typename T>
void LinkedList<T>::push_back(T data)
{
	Node* pTemp = GetNode(data);
	if (!GetRootNode())
	{
		GetRootNode() = pTemp;
	}
	else
	{
		Node* pCrawler = GetRootNode();
		while (pCrawler->pNext)
		{
			pCrawler = pCrawler->pNext;
		}

		pCrawler->pNext = pTemp;
	}
}

template <typename T>
void LinkedList<T>::Traverse()
{
	Node* pCrawler = GetRootNode();

	while (pCrawler)
	{
		cout << pCrawler->data << " ";
		pCrawler = pCrawler->pNext;
	}

	cout << endl;
}


int main()
{
	LinkedList<int> list;

	list.push_back(10);
	list.push_back(20);
	list.push_back(30);

	cout << "Traversing LinkedList through method" << endl;
	list.Traverse();

	cout << "Traversing LinkedList through Iterator" << endl;
	for (LinkedList<int>::Iterator iterator = list.begin(); iterator != list.end(); iterator++)
	{
		cout << *iterator << " ";
	}

	cout << endl;

	return 0;
}
