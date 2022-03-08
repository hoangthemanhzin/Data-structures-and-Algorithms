#include<iostream>
#include<string>
using namespace std;
void swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}
int c[1000];
void sort(int a[],int b[],int n,int m ){
     for(int i=0;i<n;i++){
         c[i]=a[i];
     }
    for(int j=n;j<m+n;j++){
         c[j]=b[j];
    }
    for(int i=0;i<m+n;i++){
        for(int j=i+1;j<m+n;j++){
            if(c[i]>c[j]){
                swap(c[i],c[j]);
            }
        }
    }
}
int main(){
    int a[1000];
    int b[1000];
    int n,m;   
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=n;i<m+n;i++){
        cin>>b[i];
    }
    sort(a,b,n,m);
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
    return 0;




}