#include<iostream>
using namespace std;
void quickSort(int a[], int l, int r){
	int p = a[(l+r)/2];
	int i = l, j = r;
	while (i < j){
		while (a[i] < p){
			i++;
		}
		while (a[j] > p){
			j--;
		}
		if (i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	if (i < r){
		quickSort(a, i, r);
	}
	if (l < j){
		quickSort(a, l, j);
	}
}
int docao(int a[], int n, int p){
    int sum = 0;
    for(int i=p+1; i < n;i++){
        sum = sum + 1;
        if(sum > a[p]){
            return i;
            break;
        }
        if(sum == n-p-1){
            return sum + 1;
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[100001], b[100001],c[100001];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    quickSort(a,0,n-1);
    for(int i = n-1; i >= 0 ; i--){
        b[n-i-1] = a[i];
    }
    int hehe = docao(b,n,0);
    c[0] = hehe;
    for(int i=1; i < hehe - 1; i++){
        c[i] = i + docao(b,hehe-1,i);
    }
    quickSort(c,0,hehe-2);
    cout<<c[0];
    
}