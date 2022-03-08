#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	min=a[0];
	for(int i=0;i<n;i++){
        if(min>a[i]){
			min=a[i];
		}
	}
}