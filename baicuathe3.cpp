#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool kiemtra(int m,int n,int k){
    int a[100];
    for(int i=0;i<n;i++){
        a[i]=m%10;
        m=(m-a[i])/10;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<=i+1;j++){
            if(abs(a[i]-a[j]==k)){
                return true;
            }else{
                return false;
            }
        }
    }
}


std::vector<int> createNumber(int n, int k)
{
    int a[1000];
    vector<int>vec;
    for(int i=pow(10,n)-1;i>=pow(10,n-1);i--){
        if(kiemtra(i,n,k)){
             vec.push_back(i);
        }
    }
  return vec;
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " "; }
}

  

int main(){
int n,k;
cin>>n;
cin>>k;
createNumber(n,k);

}