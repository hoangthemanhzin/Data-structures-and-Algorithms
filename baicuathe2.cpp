#include<iostream>
using namespace std;
bool songuyento(int a){
        if(a<2) {return false;}
        for(int i=2;i<(a-1);i++){
            if(a%i==0){
                return false;
            }
        }
        return true;
    }
int tongcacso(int a){
        int tong =0;
        int du;
        while(a!=0){
            du=a%10;
            tong=tong+du;
            a=(a-du)/10;
        }
        return tong;
    }
bool smithNumber(int n)
{
    int dem=0;
    int a;
    if(n<4){
        return false;
    }
    if(n=4){
        return true;
    }
    
    for(int i=2;i<=n;i++){
        if(n%i==0 && songuyento(i)){
            

            if(i<10){
                dem=dem+i;
            }else{
                dem=dem+tongcacso(i);
            }
            
            a=dem;
            
        }
    }
    if(a==tongcacso(n)){
           return true; 
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(smithNumber(n)){
        cout<<"true";
    }else{cout<<"false";}


}