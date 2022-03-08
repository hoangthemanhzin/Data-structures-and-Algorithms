#include<iostream>
using namespace std;
void swap(int a[],int p,int q){
  int c=a[p];
  a[p]=a[q];
  a[q]=c;
}
int main(){
  int min,max;
  int p=1;
  int q=1;
  int n,a[100];
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  min=a[0];
  max=a[0];
  for(int i=0;i<n;i++){
      if(a[i]>max){
          max=a[i];
      }
  }
  for(int i=0;i<n;i++){
      if(a[i]<min){
          min=a[i];
      }
  }
  for(int i=0;i<n;i++){
      if(a[i]==min){
        p=i;
        break;
      }
      
  }
  for(int i=(n-1);i>=0;i--){
      if(a[i]==max){
        q=i;
        break;
      }
      
  }
  swap(a,p,q);
  for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
  }
  
}