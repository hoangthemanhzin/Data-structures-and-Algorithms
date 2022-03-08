#include<iostream>
using namespace std;
int dem = 0;
void dequy(int a, int b){
    if(b == 0){
        dem++;
    }else{
        dequy(a * 2, b-1);
        if((a - 1) % 3 == 0){
            dequy((a - 1)/3,b-1);
        }
    }
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    dequy(a,b);
    cout<<dem;
}