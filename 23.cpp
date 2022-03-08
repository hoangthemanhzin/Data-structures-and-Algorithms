#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *taonode(int x){
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    return temp;
}
node *lienket(node *p,int x){
    node *temp = taonode(x);
    p->next=temp;
    return temp;
}
void in(node *l){
	node *p = l;
	while (p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}
node *dau(node *l){
	node *p = l;
	p = p->next;
	delete(l);
	return p;
}
node *cuoi(node*l){
    node *p=l;
    while(p->next->next!=NULL){
        p=p->next;
    }
    delete(p->next);
    p->next=NULL;
    return l;
}
node *giua(node*l,int k){
    node *p=l;
    for(int i=0;i<k-1;i++){
        p=p->next;
    }
    node *temp=p->next;
    
    p->next=p->next->next;
    delete(temp);
    return l;
}
int main(){
   int n,x,k;
   cout<<"nhap n : "<<endl;
   cin>>n;
   cout<<"nhap gia tri data dau tien : "<<endl;
   cin>>x;
   node *l=taonode(x);
   node *p=l;
   for(int i=1;i<n;i++){
       cin>>x;
       p=lienket(p,x);
   }
   cout<<"nhap k vao "<<endl;
   cin>>k;
   if(k==0){
       l=dau(l);
       
   }
   else if(k==n-1){
       l=cuoi(l);
       
   }
   else{
       l=giua(l,k);
       
   }
   in(l);
  
}