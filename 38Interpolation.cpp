#include<iostream>
using namespace std;
int Interpolation_search(int a[],int n,int x){
    int d,c,mid;
    d=0;
    c=n-1;
    while(a[d]!=a[c]&& x>=a[d] && x<=a[c]){
        mid=d + (c-d)*(x-a[d])/(a[c]-a[d]);
        if(x > a[mid]){
            d=mid+1;
        }else if(x < a[mid]){
            c=mid-1;
        }else{
            return mid;
        }
    }
    if(a[d]==x){
        return d;
    }
    return -1;
}
int main(){
    int n,x;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
   cout<<Interpolation_search(a,n,x);
   return 0;
}