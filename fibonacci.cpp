#include <iostream>

using namespace std;

int printFibonacci(int);

int main(){
	
	int amount = 0;
	
	
	for(int i = 0; i < 10 ; i++)
	{
		cout<< printFibonacci(i) << " " ;
	}
	
	
	return 0;
}

int printFibonacci(int value)
{
	if(value == 0)
	{
		return 1;
	}
	
	else if(value == 1)
	{
		return 2;
	}
	
	else 
	{
		 return (printFibonacci(value-1)+printFibonacci(value-2));
	}
	
}
