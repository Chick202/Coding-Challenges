#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
Challenge 2: Palindromes
A palindrome is a word that reads the same backward as forward. For instance "civic" or "deed" are palindromes while "toyota" is not.
Given a list of words
Your task is to
write a function that rearranges their letters so that they become palindromes
for example, having the sequence “cecarar” we can rearrange the letters and obtain “racecar” which is a palindrome

print to the standard output (stdout) a single line containing one palindrome that can be obtained from the initial word by rearranging its letters or -1 if it’s not possible to obtain a palindrome (for each of the given words)
please note that the palindromes don't have to be necessarily real words from the English dictionary (e.g. dbd is a valid palindrome word)
Note that your function will receive the following arguments:


words
which is an array of strings giving the words that need to have their letters rearranged to obtain palindromes


Data constraints
the number of words that need to br rearranged will not exceed 1000
the maximum length of any of the words will not exceed 1000 characters
all words will contain only lowercase English letters (a-z)
Efficiency constraints
your function is expected to print the requested result and return in less than 2 seconds

Example

Input	
words: [“ivcci”, “oyotta”, “cecarar”, "bbb", "babbb"]


Output
civic
-1
racecar
bbb
bbabb
*/

void populateVectors(vector<string>&);
void printVectors(vector<string>&);
vector<string> generatePalindrome(const vector<string>&);
string invert(string);

int main(){
	
	vector<string> wordList;
	
	populateVectors(wordList);
	//printVectors(wordList);
	generatePalindrome(wordList);
	
	return 0;
}

string invert(string word)
{
	string invertedWord = "hola";
	char charAppend;
	int size = 0;
	char temp;
	
	cout << size;
		
	for(int i = 0; i < word.length(); i++)
	{
			size = word.length() - i;
			
			if(word.at(i) != word.at(size))
			{
				temp = word.at(size);
			}
			
			
			
	}		
	
	return invertedWord;
}

vector<string> generatePalindrome(const vector<string>& wordList)
{
	vector<string> palindrome;
	string wordToInvert;
	string invertedWord;
	
	for(int i = 0; i < wordList.size(); i++)
	{
		wordToInvert = wordList[i];
		//cout << endl << "word to Invert: ";
		//cout << wordToInvert;
		invertedWord = invert(wordToInvert);
		//palindrome.push_back(invertedWord);
	}
	
	return  palindrome;
}

void printVectors(vector<string>& wordList)
{
	cout << endl << "Populated vector: ";
	
	for(int i= 0; i < wordList.size(); i++)
	{
		cout << wordList[i];
		cout << " ";
	}	
	
}

void populateVectors(vector<string>& wordList)
{
	wordList.push_back("ivcci");
	wordList.push_back("oyotta");
	wordList.push_back("cecarar");
	wordList.push_back("bbb");
	wordList.push_back("babbb");
}

