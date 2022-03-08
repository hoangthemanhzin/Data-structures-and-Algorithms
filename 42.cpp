#include<iostream>
using namespace std;
void InsertionSort(int a[],int n){
    int index,value;
    for(int i=0;i<n;i++){
        index=i;
        value=a[i];
        while(index>0 && a[index-1]>value){
            int temp=a[index-1];
            a[index-1]=value;
            a[index]=temp;
            index--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    InsertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}