#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void initializeVectors(vector<string>&, vector<string>&);
void compareSize(vector<string>&, vector<string>&);
void printVector(const vector<string>&, const vector<string>&);
bool areAnagrams(string, string);

int main(int argc, char **argv)
{
	vector<string> wordList1;
	vector<string> wordList2;
	
	initializeVectors(wordList1, wordList2);
	//printVector(wordList1, wordList2);
	compareSize(wordList1, wordList2);
	//printVector(wordList1, wordList2);
   
	return 0;
}

void initializeVectors(vector<string>& wordList1, vector<string>& wordList2)
{
	wordList1.push_back("iceman");
	wordList1.push_back("acaa");
	wordList1.push_back("foo");
	
	wordList2.push_back("cinema");
	wordList2.push_back("caaa");
	wordList2.push_back("of");
}


void compareSize(vector<string>& wordList1, vector<string>& wordList2)
{
	string word1;
	string word2;
	
	for(unsigned int i = 0; i<wordList1.size(); i++)
		{
			word1 = wordList1[i];
			word2 = wordList2[i];
			
			if(word1.size() != word2.size())
				{
					cout << endl << word1 + " and " + word2 + " are not anagrams" << endl; 
					
					wordList1.erase(wordList1.begin()+i);
					wordList2.erase(wordList2.begin()+i);
				}
			
			else
				{
					if(areAnagrams(word1, word2))
						{
							cout << endl << word1 + " and " + word2 + " are anagrams";
						}
					else
						{	
							cout << endl << word1 + " and " + word2 + " are not anagrams";
						}
				}
		}
}

void printVector(const vector<string>& wordList1, const vector<string>& wordList2)
{
	cout << endl<< "Vector 1: ";
	
	for(unsigned int i = 0; i<wordList1.size(); i++)
		{
			cout << wordList1[i] + " ";
		}
		
	cout << endl << "Vector 2: ";
	
	for(unsigned int i = 0; i<wordList2.size(); i++)
		{
			cout << wordList2[i] + " ";
		}
}

bool areAnagrams(string word1, string word2)
{
	int valueWord1 = 0;
	int valueWord2 = 0;
	char aChar1;
	char aChar2;
	 
    for(int i = 0; i < word1.length();  i++)
		{			
			aChar1 = word1.at(i);
			aChar2 = word2.at(i);
						
			valueWord1 = valueWord1 + int(aChar1);
			valueWord2 = valueWord2 + int(aChar2);
		}  
		
		if(valueWord1 != valueWord2)
			{
				return false;
			}

	return true;	
}
