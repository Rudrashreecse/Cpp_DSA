#include<bits/stdc++.h>
using namespace std;
//            1
//           / \
//         2    3
//        / \  / \
//       4   5 6  7
//        \        \
//         8        9
// input array should be = [1,2,3,4,5,6,7,null,8,null,null,null,null,9]
// input array should be = [1,2,3,4,5,6,7,INT_MIN,8,INT_MIN,INT_MIN,INT_MIN,INT_MIN,9] 
//we replace null as int_min as its a integer array it can't store null
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
Node* constructbt(Node* root,int arr[],int n){
    queue<Node*>q;
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node*temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(i<n && arr[i]!= INT_MIN) {
            l = new Node(arr[i]);
            q.push(l);
        }
        else l= NULL;
        if(j<n && arr[j]!= INT_MIN) {
            r = new Node(arr[j]);
            q.push(r);
        }
        else r = NULL;
        temp->left=l;
        temp->right=r;
        i+=2;
        j+=2;
    }
    return root;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,INT_MIN,8,INT_MIN,INT_MIN,INT_MIN,INT_MIN,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node*root = new Node(arr[0]);// root node
    root = constructbt(root,arr,n);
    cout<<"The Binary Tree is:"<<endl;
    displayBT(root);// it display in pre-order i.e 1,2,4,5,3,6,7
    cout<<endl;
}
