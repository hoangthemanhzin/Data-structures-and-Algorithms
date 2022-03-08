#include<iostream>
using namespace std;
void bubbleSort(int a[], int n){
	for (int i = 0; i < n-1; i++){
		for (int j = i+1; j < n; j++){
			if (a[i] < a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
} 
int main(){
    int n;
    cin>>n;
    int a[100],b[100];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        b[i] = 0;
    }
    bubbleSort(a,n);
    for(int i=1; i <= n; i++){
        b[i] = a[i - 1] + i;
    }
    bubbleSort(b,n+1);
    cout<<b[0];
}