#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void initializeString(string&, string&);
void printString(string&, string&);
bool isPermutation(string&, string&);

int main(){

	string word1;
	string word2;
	
	initializeString(word1, word2);
	//printString(word1, word2);
		
	if(isPermutation(word1, word2))
	{
		cout << endl << "The words are permutations";
	}
	
	else
	{
		cout << endl << "The words are not permutations";
	}
	
	return 0;
}

bool isPermutation(string& word1, string& word2)
{
	if(word1 == word2)
	{
		return true;
	}
	
	return false;
}

void initializeString(string& myWord1, string& myWord2)
{
	myWord1 = "dogg";
	sort(myWord1.begin(), myWord1.end());
	myWord2 = "dog";
	sort(myWord2.begin(), myWord2.end());
}

void printString(string& word1, string& word2)
{
	cout << endl << "word 1: ";
	cout << word1;
	
	
	cout << endl << "word 2: ";
	cout << word2;
}
