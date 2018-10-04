#include <iostream>
using namespace std ;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) { 
        TreeNode t;
        if(t1==NULL&&t2!=NULL){
            t=t2;
        }else if(t1!=NULL&&t2==NULL){
            t=t1;
        }else if(t1!=NULL&&t2!=NULL){
            t->val=(t1->val)+(t2->val);
        }
        if(t!=NULL){
            t->left=mergeTrees(t1->left,t2->left);
            t->right=mergeTrees(t1->right,t2->right); 
                   } 
        return t;
    }    
};

int main(){

}