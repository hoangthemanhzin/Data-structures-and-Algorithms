/*Nhập và một số nguyên dương n, tiếp theo là n số nguyên dương lần lượt là các phần tử của một dãy số, 
hãy đếm tần số (số lần xuất hiện) của các số trong dãy và 
in nó ra màn hình dưới dạng sau: "a1 - t1; a2 - t2; ... an - tn; ",
 trong đó t1 là số lần xuất hiện của số a1, t2
 là số lần xuất hiện của a2, ... a1, a2, .. an không trùng nhau
 và được sắp xếp tăng dần (xem ví dụ để rõ hơn).*/
                    //giải:
 #include<iostream>
 using namespace std;
 int main(){
     int n;
     cin>>n;
     int a[100];
     for(int i = 0;i < n; i++){
         cin>>a[i];
     }
        // tim phần tử lớn nhất trong mảng:
        int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    // khai bao mang dem
    int k[100];
    for(int i=0;i<=max;i++){
        k[i]=0;
    }
    //dem
    for(int i=0; i<n;i++){
        k[a[i]]=k[a[i]]+1;
    }
    for(int i=0;i<max;i++){
        if(k[i]>0){
            cout<<i<<" "<<"-"<<" "<<k[i]<<endl;
        }
    }

 }