#include<iostream>
using namespace std;
int main(){
    int n,a[10001],l[10001];
    cin>>n;
    for(int i = 0;i < n; i++){
        cin>>a[i];
    }
    l[0] = 1;
    for(int i = 0;i < n-1; i++){
        if(a[i] <= a[i + 1]){
            l[i + 1] = l[i] + 1;
        }else{
            l[i + 1] = 1;
        }
    }
    int max = l[0];
    for(int i = 0; i < n; i++){
        if(max < l[i]){
            max = l[i];
        }
    }
    int vitrimax;
    for(int i = n-1; i >= 0; i--){
        if(max == l[i]){
            vitrimax = i;
        }
    }
    
    for(int i = vitrimax - max + 1; i <= vitrimax; i++){
        cout<<a[i]<<" ";
    }
} 