#include<iostream>
using namespace std;
int counthehe(int a[], int h, int p, int x){
    if(h = p){
        if(a[h] == x){
            return 1;
        }else{
            return 0;
        }
    }else{
        int m = (h+p)/2;
        return counthehe(a,h,m,x) + counthehe(a,m+1,p,x);
    }

}
int main(){
    int n,a[100001],x;
    cin>>n;
    for(int i = 0; i < n; i ++){
        cin>>a[i];
    }
    cin>>x;
    cout<<counthehe(a,0,n-1,x);
}