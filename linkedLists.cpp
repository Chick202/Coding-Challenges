#include <iostream>

using namespace std;

struct node
{
	int data;
	node *next;
};



int main()
{
	node *root;
	node *creator;
	node *temp;
	
	
	//This node can't be moved. Root is our starter node.
	root = new node;
	root->data = 0;
	root->next = 0;
	
	//Set the creator node on the starter
	creator = root;
	//Set the "connector" node on the starter
	temp = root;
	
	//Create a linked list of ten integers (one per node)
	for(int i = 1; i < 10; i++)
	{
		//Create new node
		creator = new node;
		creator->data = i;
		creator->next = 0;
		
		//Connect the nodes 
		temp->next = creator;
		
		//Move the connector to the newly created node
		temp = creator;		
	}
	
	
	//To print the linked list, set the connector node
	//on the starting position (root)
	temp = root;

	//Iterate until we have nothing left
	while(temp != NULL)
	{
		//Print the data 
		cout << temp->data;
		//Move to the next position
  		temp = temp->next;
	}
	
	
	return 0;
}
