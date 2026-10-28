#include <iostream>
#include <queue>
using namespace std;
class TreeNode{
  public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
    TreeNode(){
        this->val=0;
        this->left=NULL;
        this->right=NULL;
    }
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));
    }
    void levelordertraversal(TreeNode* root){
        int n = levels(root);
        for(int i=1;i<=n;i++){
            levelorderREV(root,i,1);
            cout<<endl;
        }
    }
    void levelorder(TreeNode* root,int k,int level){
        if(root==NULL) return;
        if(level==k){
            cout<<root->val<<" ";
            return;

        } 
        levelorder(root->left,k,level+1);
        levelorder(root->right,k,level+1);
        
    }
    void levelorderREV(TreeNode* root,int k,int level){
        if(root==NULL) return;
        if(level==k){
            cout<<root->val<<" ";
            return;

        } 
        levelorderREV(root->right,k,level+1);
        levelorderREV(root->left,k,level+1);
        
    }
    void levelorderqueuue(TreeNode* root){
        queue <TreeNode*> q;
        q.push(root);
        while(q.size()>0){
            TreeNode* temp = q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
        cout<<endl;
    }
};
int main(){
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(7);
    TreeNode *c = new TreeNode(9);
    TreeNode *d = new TreeNode(2);
    TreeNode *e = new TreeNode(6);
    TreeNode *f = new TreeNode(9);
    TreeNode *g = new TreeNode(5);
    TreeNode *h = new TreeNode(11);
    TreeNode *i = new TreeNode(5);
    a->left = b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    e->left=g;
    e->right=h;
    f->left=i;
    TreeNode t;
    //t.levelordertraversal(a);
    t.levelorderqueuue(a);
    

}