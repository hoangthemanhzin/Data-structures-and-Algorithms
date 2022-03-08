/*Cho số nguyên dương n, tiếp theo là n số nguyên cũng một dãy a, cuối cùng là một số x, biết dãy là dãy không giảm.
Hãy đưa ra chỉ số của phần tử đầu tiên có giá trị bằng x, nếu không tồn tại giá trị đó đưa ra -1.
*/
#include<iostream>
using namespace std;
int binarysearch(int a[],int x,int n){
    int d=0;
    int c=n-1;
    while(d<c){
        int g=(c+d)/2;
        if(a[g]>=x){
            c=g;
        }else{
            d=g+1;
        }
    }
    if(a[d]==x){
        return d;
    }   
    return -1;
}
int main(){
    int n,a[100];
    int x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    cout<<binarysearch(a,x,n);
    return 0;
}