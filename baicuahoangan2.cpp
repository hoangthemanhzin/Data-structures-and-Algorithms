#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> st;
    int a[100],b[100],c[100];
    int n,m;
    int k;
    cin>>n;
    cout<<"nhap list A : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"nha k : "<<endl;
    cin>>k;
    cout<<"nhap m"<<endl;
    cin>>m;
    cout<<"nhap list B : "<<endl;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<k){
            st.push(a[i]);
        }else{
            for(int i=0;i<m;i++){
                st.push(b[i]);
            }
        }
    }
    while (!st.empty()){
        cout << st.front() << " ";
        st.pop();
    }
}