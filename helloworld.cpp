#include<iostream>

void hello(void(*func)())
{
	func();
}


int main()
{
	std::cout<<"hello world!\n";
	auto f=[](){std::cout<<"hello world!\n";};
	hello(f);
	
	return 0;
}
