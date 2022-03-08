#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int kelvin=0;
    int stuart=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='a'||s[i]=='i'){
              kelvin=kelvin+s.length()-i;
        }else{
              stuart=stuart+s.length()-i;
        }
    }
    cout<<kelvin;
    cout<<stuart;
    if(kelvin>stuart){
        cout<<"kelvin"<<" "<<kelvin;
    }

    if(kelvin==stuart){
        cout<<"draw";
    }else(stuart > kelvin);{
        cout<<"stuart"<<" "<<stuart;
    }
    
}