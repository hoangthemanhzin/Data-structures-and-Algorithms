#include<iostream>
using namespace std;
int kiemtra(int a[],int x,int n){
    int d=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            d=d+1;
            return i;
        }
    }
    if(d==0){
            return -1;
        }
}
int main(){
    int as[100];
    int n;
    int x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>as[i];
    }
    cin>>x;
    cout<<kiemtra(as,x,n);
}