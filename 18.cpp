#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
bool isPrime(int n){
	if (n<2) return false;
	for (int i=2; i<=sqrt(n); i++)
	if (n%i==0) return false;
	return true;
}

int main(){
     int n;
     cin>>n;
     if(n==2 || n==3 || n==5 || n==9){
         cout<<n;
     }


}