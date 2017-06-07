#include "SpisokOnU.h"
#include "Queue.h"
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
	
	 Queue<int> Q;
	 Q.push(1);
	 Q.push(3);
	 Q.push(5);
	 std::cout<<std::endl<<Q.pop()<<std::endl;
	 std::cout<<Q.pop()<<std::endl;
	 std::cout<<Q.pop()<<std::endl;
	 std::cin.get();
	 
	return 0;

}