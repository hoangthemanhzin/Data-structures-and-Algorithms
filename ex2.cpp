#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

int main(){
         node *head=new node;
         head->next=NULL;
         head->data=1;

         node *second=new node;
         second->next=NULL;
         second->data=2;

         node *third=new node;
         third->next=NULL;
         third->data=3;
        //lien ket danh sach
         head->next=second;
         second->next=third;
        // in danh sach
        
        while(head!=NULL){
            cout<<head->data;
            head=head->next;
        }

     }