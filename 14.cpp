#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100];
    stack<int>st;
    for(int i=0;i<100;i++){
         a[i]=n%2;
         n=(n-a[i])/2;
         st.push(a[i]);
         if(n==0){
             break;
         }
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();

    }

}