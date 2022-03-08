#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,c;
    cin>>n;
    int min;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
           min=abs(a[1]-a[0]);
           break;
        }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
              c=a[i];
              a[i]=a[j];
              a[j]=c;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(a[j]-a[i])<min){
                min=abs(a[j]-a[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(a[j]-a[i])==min){
              if(a[i]>a[j]){
                  cout<<a[j]<<" "<<a[i]<<endl;
              }else{
                  cout<<a[i]<<" "<<a[j]<<endl;
              }
            }
        }
    }
    
}