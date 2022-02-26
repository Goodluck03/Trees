vector<int> postOrder(Node* root) {
        vector<int>vec;
       stack<Node*>st1,st2;
	st1.push(root);
	
	while(!st1.empty()){
		Node *ptr=st1.top();
		st1.pop();
		st2.push(ptr);
		
		if(ptr->left!=NULL)
		st1.push(ptr->left);
		
		if(ptr->right!=NULL)
		st1.push(ptr->right);
	}
	
	while(!st2.empty()){
		 vec.push_back(st2.top()->data);
		st2.pop();
	}
	return vec;
    }
