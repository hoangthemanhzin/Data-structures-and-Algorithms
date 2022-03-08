#include<iostream>
using namespace std;
int dequy(int n){
    if(n == 1){
        return 1;
    }else if(n == 2){
        return 1;
    }else{
        return dequy(n-1) + dequy(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<dequy(n);
}