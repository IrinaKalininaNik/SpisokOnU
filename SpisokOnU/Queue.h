#ifndef _Queue_
#define _Queue_
#include "SpisokOnU.h"
#include <iostream>
#include <fstream>

template <class T>
class Queue
{
private:
	Link<T> Shark;
public:
	T pop();
	void push(T);
	T next();
	void fail();
};

template <class T>
T Queue<T>::pop()
{
	T Loser = Shark.Get(Shark.GetStart());
	Shark.DeleteStart();
	return Loser;
}

template <class T>
void Queue<T>::push(T a)
{
	Shark.AddEnd(a);
}

template <class T>
T Queue<T>::next()
{
	return Shark.Get(Shark.GetStart());
}

template <class T>
void Queue<T>::fail()
{
	std::ofstream vsd("Queue");
	for (Node<T>* i= Shark.GetStart(); i!=nullptr; i= Shark.GetNext(i))
	{
		vsd << Shark.Get(i) <<std::endl;
	}
	vsd.close();
}


#endif