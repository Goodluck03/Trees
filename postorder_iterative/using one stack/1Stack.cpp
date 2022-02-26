 vector<int> postOrder(Node* node) {
         vector<int>ans;
         stack<Node*>st;
         if(node==NULL) return ans;
          Node *curr=node;
         while(!st.empty() || curr){
             if(curr){
                 st.push(curr);
                 curr=curr->left;
             }
             else{
                 Node *temp = st.top()->right;
                 if(temp!=NULL){
                     curr = temp;
                 }
                 else{
                     temp = st.top();
                     st.pop();
                     ans.push_back(temp->data);
                     
                     // for right skewed sub-tree
                     while(!st.empty() && st.top()->right==temp){
                         temp=st.top();
                         st.pop();
                         ans.push_back(temp->data);
                         
                         
                     }
                 }
             }
         }
         return ans;
    }
