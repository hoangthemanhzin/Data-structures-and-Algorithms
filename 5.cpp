#include<iostream>
using namespace std;
int main(){
    //Nhập vào một số nguyên dương n, và n số nguyên lần lượt là các phần tử trong dãy a. 
    //Tiếp theo nhập vào số nguyên là k (0 ≤ k < n).

    //Hãy xóa phần tử có chỉ số k ở trong dãy đó. 
    //In mảng kết quả ra màn hình, sau mỗi phần tử có đúng một khoảng trắng.
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    for(int i=k;i<n-1;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}