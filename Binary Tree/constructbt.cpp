#include<bits/stdc++.h>
using namespace std;
//            1
//           / \
//         2    3
//        / \  / \
//       4   5 6  7
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
void displayBT(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayBT(root->left);
    displayBT(root->right);
}
int main(){
    Node*a = new Node(1);// root node
    Node*b = new Node(2);
    Node*c = new Node(3);
    Node*d = new Node(4);
    Node*e = new Node(5);
    Node*f = new Node(6);
    Node*g = new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<"The Binary Tree is:"<<endl;
    displayBT(a);// it display in pre-order i.e 1,2,4,5,3,6,7
    cout<<endl;
    return 0;
}
