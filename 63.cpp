#include<iostream>
using namespace std;
struct node
{
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
            t->left = insert(t->left, x);
        }else{
            t->right = insert(t->right, x);
        }
    }
}
bool kiemtra(node *t){
    if(t->left == NULL && t->right == NULL){
        return true;
    }else{
        return false;
    }
}
int demnutla(node *t){
    if(t == NULL){
        return 0;
    }
    if(kiemtra(t)){
        return 1;
    }
    return demnutla(t->left) + demnutla(t->right);
}
int main(){
    int n,x;
    cin>>n;
    node *t=NULL;
    for(int i=0;i<n;i++){
        cin>>x;
        t = insert(t,x);
    }
    cout<<demnutla(t);
}