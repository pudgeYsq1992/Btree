#include<stdio.h>
using namespace std;

class node
{
    public:
	node(int data)
	{
	    content = data;
	    this->leftLeaf = NULL;
	    this->rightLeaf = NULL;
	}
        int content;
        node* leftLeaf;
        node* rightLeaf;
};

class BinaryTree
{
    public:
        

    private:
	node rootNode;
};


int main(){
    node entity(1);
    entity.content = 1;
 
    printf("entity.content = %d\n",entity.content);
}
