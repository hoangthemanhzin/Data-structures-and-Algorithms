#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int x){
    
}
int main(){
    int n,x;
    cin>>n;
    int a[100001],b[100001];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    b[0]=a[0];
    for(int i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
    }
}