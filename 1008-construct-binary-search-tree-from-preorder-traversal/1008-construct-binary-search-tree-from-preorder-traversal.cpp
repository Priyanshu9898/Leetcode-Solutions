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
    
    int getPos(vector<int>& arr, int ele, int n){
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == ele){
                return i;
            }
        }
        
        return -1;
    }
    
    TreeNode* solve( vector<int>& inorder, vector<int>& preorder, int &index, int s , int e, int n){
        
        if(index >= n || s > e){
            return NULL;
        }
        
        int ele = preorder[index++];
        int pos = getPos(inorder, ele, n);
        
        
        TreeNode* head = new TreeNode(ele);
        
        head -> left = solve(inorder, preorder, index , s  , pos -1, n);
        head -> right = solve(inorder, preorder, index , pos + 1  , e, n);
        
        return head;
    }
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder(preorder.begin(), preorder.end());
        
        sort(inorder.begin(), inorder.end());
          
        
        
        int n = inorder.size();
        int index = 0;
        return solve(inorder, preorder , index , 0 , n -1 , n);
        
        // return ans;
    }
};