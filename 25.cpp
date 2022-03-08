#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *taonode(int x){
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    return temp;
}
node *lknode(node *p,int x){
    node *temp= taonode(x);
    p->next=temp;
    return temp;
}
int main(){
    int n,x,a,b;
    cin>>n;
    cin>>x;
    node *l;
    l=taonode(x);
    node *p=l;
    for(int i=1;i<n;i++){
        cin>>x;
        lknode(p,x);
        p=p->next;
    }
    cin>>a;
    cin>>b;
    node *hehe=l;
    while(hehe!=NULL){
        if(hehe->data==a){
            hehe->data=b;
        }
        cout<<hehe->data<<" ";
        hehe=hehe->next;
    }
    return 0;
}