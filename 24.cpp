#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node *taonode(int x){
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    return temp;
}
node *lknode(node *p,int x){
    node *temp=taonode(x);
    p->next=temp;
    return temp;
}
void printList(node *l){
	node *p = l;
	while (p != NULL){
		cout << p->data << " ";
		p=p->next;
	}
   
}
void debai(node *l,int k,int n){
    node *p=l;
    int dem=0;
    for(int i=0;i<n;i++){
        if(dem==k){
            cout<<p->data;
            break ;
        }else{
            p=p->next;
            dem=dem+1;
        }
    }
}
int main(){
    int n,x,k;
    cin>>n;
    cin>>x;
    node *l;
    l=taonode(x);
    node*p=l;
    for(int i=1;i<n;i++){
          cin>>x;
          lknode(p,x);
          p=p->next;
    }
    cin>>k;
    debai(l,k,n);
    return 0;

}