/*Nhập vào một số nguyên dương n, tiếp theo nhập n số nguyên lần lượt là các phần tử của dãy a.
Hãy in ra những phần tử lẻ ở chỉ số chẵn, sau mỗi phần tử có đúng một dấu cách, 
nếu không có phần tử nào thõa mãn thì in ra "NULL"
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n,a[100];
    cin>>n;
    queue<int> st;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0 && i%2==0){
            count=count+1;
            st.push(a[i]);
        }
    }
    if(count==0){
        cout<<"NULL";
    }else{
        while(!st.empty()){
            cout<<st.front()<<" ";
            st.pop();
        }
    }
    return 0;
}