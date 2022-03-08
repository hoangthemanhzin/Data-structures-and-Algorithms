#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string str="";
    char c;
    string s;
    getline(cin,s);
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(st.empty()){
            st.push(s[i]);
        }
        
        

        
    }
    

}