#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a0,a1,a2,a3,a4,a5,a6,a7;
    int b0,b1,b2,b3,b4,b5,b6,b7;
    int p[9],q[9];
    cout<<"nhap toa do 1 :"<<endl;
    cin>>a0;
    cin>>b0;
    cout<<"nhap toa do 2 :"<<endl;
    cin>>a1;
    cin>>b1;
    cout<<"nhap toa do 3 :"<<endl;
    cin>>a2;
    cin>>b2;
    cout<<"nhap toa do 4 :"<<endl;
    cin>>a3;
    cin>>b3;
    cout<<"nhap toa do 5 :"<<endl;
    cin>>a4;
    cin>>b4;
    cout<<"nhap toa do 6 :"<<endl;
    cin>>a5;
    cin>>b5;
    cout<<"nhap toa do 7 :"<<endl;
    cin>>a6;
    cin>>b6;
    cout<<"nhap toa do 8 :"<<endl;
    cin>>a7;
    cin>>b7;
    p[1]=a0;
    p[2]=a1;
    p[3]=a2;
    p[4]=a3;
    p[5]=a4;
    p[6]=a5;
    p[7]=a6;
    p[8]=a7;
    q[1]=b0;
    q[2]=b1;
    q[3]=b2;
    q[4]=b3;
    q[5]=b4;
    q[6]=b5;
    q[7]=b6;
    q[8]=b7;
    for(int i=1;i<=8;i++){
        for(int j=i+1;j<=8;j++){
            if(p[i]==p[j]){
                cout<<"NO";
                return 0;
            }
        }
    }
    for(int i=0;i<=8;i++){
        for(int j=i+1;j<=8;j++){
            if(q[i]==q[j]){
                cout<<"NO";
                return 0;
            }
        }
    }
    for(int i=1;i<=8;i++){
        for(int j=i+1;j<=8;j++){
            if(abs(p[i]-p[j])==abs(q[i]-q[j])){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;



}