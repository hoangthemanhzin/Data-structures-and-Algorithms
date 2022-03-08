#include<iostream>
using namespace std;
int main(){
   /* nhap vao 1 so nguyen dương n tiep theo la n so nguyen dương lần lượt là các phần tử dãy số a kiểm trâ
   xem dãy a có phải la một day dơn dieu hay ko
   Dãy đơn điệu là dãy số tăng hoặc dãy số giảm */
   int n;
   cin>>n;
   int a[100];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
    int  kt1; //kiem tra day tăng
    int  kt2; //kiem ta day giảm
    for (int  i = 1; i < n; i++){
        if(a[i]<=a[i-1]){
            kt1=0;
        }
        else{
           kt1=1;
           break;
        }
    }
    for(int i = 1;i < n; i++) {
        if(a[i]>=a[i-1]){
            kt2=0;
        }
        else{
           kt2=1;
           break;
        }
    }
    if(kt1 * kt2 == 0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}