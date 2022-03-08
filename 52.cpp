#include<iostream>
using namespace std;
int dequy(int n){
    if(n==1){
        return 1;
    }else{
        return n * dequy(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<dequy(n);
}