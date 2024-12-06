class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            this->left = NULL;
            this->right = NULL;
        }
};


void levelOrder(Node * root){
    if(root == NULL) return;

	queue<Node*> q; // Create a queue to store nodes for traversal
	q.push(root);   // Start with the root node

	while(!q.empty()){
		Node* current = q.front(); // Get the front node in the queue
		q.pop();                   // Remove the front node from the queue

		cout << current->data << " "; // Print the data of the current node

		// Enqueue the left child if it exists
		if(current->left != NULL) {
			q.push(current->left);
		}

		// Enqueue the right child if it exists
		if(current->right != NULL) {
			q.push(current->right);
		}
	}

}
