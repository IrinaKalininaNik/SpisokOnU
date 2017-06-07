#ifndef _SPISOK_ON_UKAZATEL_
#define _SPISOK_ON_UKAZATEL_

template <class T>
struct Node
{
	Node<T>* next; //указатель на следующую ноду
	T Dom; 
	Node(){
	next=0;}
};
template <class T>
class Link
{
  private:
	  Node<T>*node;
	  int size;
  public:
	  Link();
	  ~Link();
	  void GetSize();
	  void AddStart(T a);
	  void AddEnd(T a);
	  Node<T>* GetStart();
	  Node<T>* GetEnd();
	  T Get(Node<T>* );
	  Node<T>* GetNext(Node<T>* );
	  void DeleteStart();
	  void DeleteEnd();
	  bool isEnd(Node<T>*);

};
 
template <class T>
Link<T>::Link()
{
	size = 0;
	node = 0;
}

template <class T>
Link<T>::~Link()
{}

template <class T>
void Link<T>::GetSize()
{
	return size;
}

template <class T>
void Link<T>::AddStart(T a)
{
	if(node==nullptr)
		{
			node = new Node<T>;
			node->Dom = a;
		}
	else
	{
		Node<T>* D = node;
		node= new Node<T>;
		node->Dom = a;
		node->next = D;
	}
	size++;
}

template <class T>
void Link<T>::AddEnd(T a)
{
	
	if(node==nullptr)
		{
			node = new Node<T>;
			node->Dom = a;		
		}
	else
	{
		Node<T>* D = node;
		while(!isEnd(D)) 
		{ 
			D = D->next;
		}
		D->next = new Node<T>;
		D->next->Dom = a;
	}
	size++;
}

template <class T>
Node<T>* Link<T>::GetStart()
{
	if(node==nullptr)
		throw 2;
	return node;
}

template <class T>
Node<T>* Link<T>::GetEnd()
{
	if(node==nullptr)
		throw 2;
	Node<T>* D = node;
		while(!isEnd(D)) 
		{ 
			D = D->next;
		}
	return D;
}

template <class T>
void Link<T>::DeleteStart()
{
	if(node==nullptr)
		throw 2;
	Node<T>* Cat = node->next;
	delete node;
	node = Cat;
}

template <class T>
void Link<T>::DeleteEnd()
{
	if(node==nullptr)
		throw 2;
	Node<T>* Dog = node;
	Node<T>* D = node;
		while(!isEnd(D)) 
		{ 
			Dog = D;
			D = D->next;
		}
	delete D;
	Dog->next = 0;
}

template <class T>
T Link<T>::Get(Node<T>* a)
{
	return a->Dom;
}

template <class T>
Node<T>* Link<T>::GetNext(Node<T>* a)
{
	return a->next;
}

template <class T>
bool Link<T>::isEnd(Node<T>* a)
{
	if(a==nullptr)
		throw 1;
	if(a->next==nullptr)
		return true;
	return false;

}


#endif