#include<iostream>
#include<queue>
using namespace std;
struct node // khai bao node
{
    int data;
    node *next;
};
node *taonode(int x){      // tao node
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    return temp;
}
node *lknode(int x,node *p){             //lk node
    node *temp=taonode(x);
    p->next=temp;
    return temp;

}
int main(){
    int n,x,k;
    cin>>n;
    cin>>x;
    node *l;
    l=taonode(x);
    node *p=l;
    for(int i=1;i<n;i++){
        cin>>x;
        lknode(x,p);
        p=p->next;
    }
    cin>>k;
    queue<int> q;
    node *hehe=l;
    while(hehe !=NULL){
        if(hehe->data<k){
           q.push(hehe->data);
        }
        hehe=hehe->next;
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}