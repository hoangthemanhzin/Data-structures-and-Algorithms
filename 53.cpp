#include<iostream>
using namespace std;
int dequy(int a, int b){
    if(a == 1){
        return 1;
    }else if(a == 0){
        return 0;
    }else{
        if(b==1){
            return a;
        }else{
            return a * dequy(a, b-1);
        }
    }

}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<dequy(a,b);
    return 0;
}