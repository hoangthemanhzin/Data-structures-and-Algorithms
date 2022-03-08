#include<iostream>
using namespace std;
int main(){
    int n,x,hihi=0;
    cin>>n;
    int a[5000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    int sum;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum=sum+a[j];
            if(sum==x){
                hihi=hihi+1;
                for(int k=i;k<=j;k++){
                    cout<<a[k]<<" ";
                }
                return 0;
            }
        }
    }
    if(hihi==0){
        cout<<"-1";
    }
    return 0;
}