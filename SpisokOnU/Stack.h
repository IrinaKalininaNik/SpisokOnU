#ifndef _Stack_
#define _Stack_
#include "SpisokOnU.h"

template <class T>
class Stack
{
private:
	Link<T> Ram;
public:
	T pop();
	void push(T);
	T back();
	void fail();
};

template <class T>
T Stack<T>::pop()
{
	T Loser = Ram.Get(Ram.GetEnd());
	Ram.DeleteEnd();
	return Loser;
}

template <class T>
void Stack<T>::push(T a)
{
	Ram.AddEnd(a);
}

template <class T>
T Stack<T>::back()
{
	return Ram.Get(Ram.GetEnd());
}

template <class T>
void Stack<T>::fail()
{
	std::ofstream fil("Stack");
	try
	{
		
		while(true)
			fil<<pop()<<std::endl;
	}
	catch(int){}
		fil.close();
}

#endif