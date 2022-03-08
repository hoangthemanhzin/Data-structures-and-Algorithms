#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> st;
    
    int n;
    int hehe;
    cout<<"nhap so n vao :"<<" ";
    cin>>n;
    int k;
    cout<<"nhap so k vao :"<<" ";
    for(int i=0;i<n;i++){
        cin>>hehe;
        st.push(hehe);
    }
    
    
    for(int i=0;i<k;i++){
        int keke=st.front();
        st.pop();
        st.push(keke);

    }
    while(!st.empty()){
        cout<<st.front()<<" ";
        st.pop();


    }
    return 0;


}