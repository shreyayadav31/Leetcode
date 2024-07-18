/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        
        for(int i=0;i<to_delete.size();i++){
            st.insert(to_delete[i]);
        }
        deleteNode(root);
        if(root){          //if root node is present after deletion 
            res.push_back(root);
        }
        return res;
    }

    vector<TreeNode*> res;
    unordered_set<int>st;

    void deleteNode(TreeNode* &root){
        if(root){

            deleteNode(root->left);
            deleteNode(root->right);

            if(st.find(root->val)!=st.end()){  //deletion of root node  
                if(root->left){              //if left child of root is present
                    res.push_back(root->left);
                }
                if(root->right) {               //if right child of root is present
                    res.push_back(root->right);  
                }
                root=NULL;    //delete root node
            }
        }
    
    }
};