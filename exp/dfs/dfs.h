struct Node
{    
    int self; //data
    node *left; //left node 
	node *right; //right node 
};


const int TREE_SIZE = 9; 
std::stack<node*> visited, unvisited; 
node nodes[TREE_SIZE]; 
node* current; 

