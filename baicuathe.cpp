#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
bool sont(int n){
    if(n<2){
        return false;
    }
     for (int i = 2; i < (n - 1); i++){
        if (n % i == 0){
            return false;
        }   
    }
    return true;
}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    stack<int> st;
    if(a<b){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=2;i<=b;i++){
        if(sont(i)){
           st.push(i);
         }
    }
    while(!st.empty()){
        if(a%st.top()==0 && b%st.top()==0){
            cout<<st.top();
            break;
        }else{
            st.pop();
        }
    }
    while(st.empty()){
        cout<<"-1";
        break;
    }
    return 0;
}   