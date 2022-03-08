#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int k=0;k<n-1;k++){
    int min=a[k];
    for(int i=k;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    for(int i=k;i<n;i++){
        if(min==a[i]){
            int temp=a[k];
            a[k]=min;
            a[i]=temp;
        }
        if(min==a[i]){
            break;
        }
    }
}
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}