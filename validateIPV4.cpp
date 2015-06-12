#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

vector<int> split(string);

int main(){

	vector<int> temp;
	//string dir = "198.10.1.1";
	string dir = "256.10.1.1";
	int j = 0;
	
	temp = split(dir);
		
	for(int i = 0; i < temp.size() + 1; i++)
	{
		
		if(temp[i] < 255)
		{
			j++;
		}
	}
	
	if(j == 4)
	{
		cout << "is Valid";
	}
	
	else
	{
		cout << "is not valid";
	}
	
	
	return 0;
}

vector<int> split(string dir)
{
	string temp;	
	int dirLenght = 0;
	int i = 0;
	vector<int> temp2;
	
	while(i < dir.length())
	{
		if(dir[i] != '.')
		{
			temp[i] = dir[i];			
		}
		
		else
		{
			temp2.push_back(atoi(temp.c_str()));
		}
		i++;
	}
	
	return temp2;
	
}


