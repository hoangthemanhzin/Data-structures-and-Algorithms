#include<iostream>
using namespace std;
struct node{
     int data;
     node *next;
};
node *taonode(int x){
	node *p=new node;
	p->data=x;
	p->next=NULL;
	return p;
}
node *lienket(node *p,int x){
    node *temp=taonode(x);
	p->next=temp;
	return temp;
}
void in(node*p){
    while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main(){
   int n,x;
   cin>>n;
   cin>>x;
   node *l;
   l=taonode(x);
   node *p=l;
   for(int i=1;i<n;i++){
	   cin>>x;
	   p=lienket(p,x);
   }
   in(l);
}