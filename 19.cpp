#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> st;
    int n;
    cin>>n;
    
    int a[100];
    bool b[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<100;i++){
        b[i]=false;
    }
    for(int i=0;i<n;i++){
        if(!b[a[i]]){
            if(st.size()<k){
                b[a[i]]=true;
                st.push(a[i]);
            }
        }
        else{
            b[st.front()]=false;
            b[a[i]]=true;
            st.push(a[i]);
            st.pop();
        }
    }
    while(!st.empty()){
           cout<<st.front()<<" ";
           st.pop();
    }

    }