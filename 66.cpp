#include<iostream>
#include<math.h>
using namespace std;
struct node{
    int data;
    node *right;
    node *left;
};
node *insert(node *t,int x){
    if(t == NULL){
        node *temp = new node;
        temp->data = x;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }else{
        if(x < t->data){
            t->left = insert(t->left,x);
        }else{
            t->right=insert(t->right,x);
        }
    }
}
int bacTree(node *t){
    if(t == NULL){
        return -1;
    }
    return 1 + max(bacTree(t->right),bacTree(t->left));
}
int main(){
    int n,x;
    cin>>n;
    node *t=NULL;
    for(int i=0; i<n; i++){
        cin>>x;
        t = insert(t,x);
    }
    int hehe;
    hehe = bacTree(t->right) - bacTree(t->left);
    if(abs(hehe) <= 1){
        cout<<"true";
    }else{
        cout<<"flase";
    }
    return 0;
}