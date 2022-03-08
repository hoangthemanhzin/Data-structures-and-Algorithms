#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *taonode(int x){
    node *temp=new node; //tao mot node mơi de lien ket ^^
    temp->data=x;
    temp->next=NULL;
    return temp;
}
node *lienket(node *p,int x){
   node *temp=taonode(x);
   p->next=temp;
   return temp;
}
node *dau(node*l,int m){
   node *temp=new node;
   temp->data=m;//truyen data la bien m vao node
   temp->next=l; // next cua node temp chi den node l vi tri dau hang
   l=temp;       // vi de truy xuat list nen phai gan l=temp
   return l;
}
node *cuoi(node*l,int m){
    node *p=l;    //gan p=l de vi tri ban dau khong thay doi
    while(p->next!=NULL){
        p=p->next;  // xac dinh phan tu cuoi cua list
    }
    node*temp=new node;
    temp->data=m;
    temp->next=NULL;
    p->next=temp;
    return l; //thu neu sai sua lai là l

}
node *giua(node*l,int k,int m){
    node*p=l;
    for(int i=0;i<k-1;i++){
        p=p->next;
    }
    node *temp=new node;
    temp->data=m;
    temp->next=p->next;
    p->next=temp;
    return l;
}
void in(node *l){
     node *p=l;
     while(p!=NULL){
         cout<<p->data<<" ";
         p=p->next;
     }
}
int main(){
int n,x,k,m;
cin>>n;
cin>>x;
node *l;
l=taonode(x);
node *p=l;
for(int i=1;i<n;i++){
   cin>>x;
   p=lienket(p,x);
}
cin>>k;//nhap vi tri muon vào
cin>>m;//gia tri muon vao
if(k==0){
    l=dau(l,m);
    in(l);
}
else if(k==n){
    l=cuoi(l,m);
    in(l);
}
else{
    l=giua(l,k,m);
    in(l);
}
}