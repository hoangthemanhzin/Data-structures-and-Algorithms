#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node *pre;
};
struct doublelist{
    node *head;
    node *tail;
};
doublelist *taonode(int x){
    doublelist *l= new doublelist;
    l->head=new node;
    l->tail=new node;
    l->head->data=x;
    l->head->next=NULL;
    l->head->pre=NULL;
    l->tail=l->head;
    return l;
}
doublelist *themdau(doublelist *l,int x){        //them 1 node o dau
    node *temp = new node;
    temp->data=x;
    temp->next = l->head;
    l->head->pre= temp;
    temp->pre  = NULL;
    l->head=temp;
}
doublelist *themcuoi(doublelist *l,int x){       // them 1 node o cuối 
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    temp->pre  = l->tail;
    l->tail->next = temp;
    l->tail = temp;
}
void in(doublelist *l){
    node *p = l->tail;
    while(p != NULL){
        cout<<p->data<<" ";
        p = p->pre;
    }
}
int main(){
    int n,x;
    cin>>n;
    doublelist *l=new doublelist;
    l=taonode(1);
    doublelist *p=l;
    for(int i=2;i<=n;i++){
        l=themcuoi(l,i);
         l=themdau(l,i);
         
    }
    in(l);
    return 0;
    
}