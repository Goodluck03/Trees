     vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        stack<TreeNode*> st;
        if(root==NULL) return vec;
        st.push(root);
        while(!st.empty()){
            TreeNode *ptr = st.top();
            st.pop();
            vec.push_back(ptr->val);
            if(ptr->left!=NULL)
                st.push(ptr->left);
            if(ptr->right!=NULL)
                st.push(ptr->right);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
