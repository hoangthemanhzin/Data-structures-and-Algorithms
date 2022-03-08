#include<iostream>
#include<math.h>
using namespace std;
int dequy(int a,int b){
       if(b==0){
           return 1;
       }else{
           return a*(dequy(a,b-1) % 10) %10;
       }
}
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    c=dequy(a,b);
    cout<<c;
}