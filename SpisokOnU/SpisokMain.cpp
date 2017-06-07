#include "SpisokOnU.h"
#include <iostream>

int main()
{
	Link<int> L;
	L.AddStart(2);
	L.AddStart(4);
	L.AddStart(6);
	L.AddEnd(5);
	L.DeleteEnd();

	for( Node<int>* i=L.GetStart(); i!=nullptr; i=L.GetNext(i))
	{
		std:: cout<<L.Get(i)<<" "<<std::endl;
	}
	std::cin.get();
	return 0;

}