#include<iostream>
using namespace std;
int main(){
    int n,a[10001],b[10001];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            b[0] = a[j];
        }
    }
}