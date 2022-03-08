#include<iostream>
using namespace std;
// sử dụng thuật toán tham lam và quy hoạch động:
void quickSort(int a[], int l, int r){  // sử dụng hàm quickSort
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
int main(){
    int n,a[100001],b[100001],c[100001],sotien;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cin>>sotien;
    quickSort(a, 0, n-1);
    for(int i = 0; i < n; i++){
        b[i] = a[n - 1 - i];
    }
    int max = 1000000, vonglap = sotien;
    for(int i = 0; i < n;i++){
	    int hehe = i, k = 0, sotien = vonglap;
        while(sotien != 0){
            if(sotien >= b[hehe]){
                sotien = sotien - b[hehe];
                k++;
            }else{
                hehe++;
            }
        }
		if(max > k){
			max = k;
		}
	}
	cout<<max;
}