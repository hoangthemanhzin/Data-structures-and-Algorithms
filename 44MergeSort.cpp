#include<iostream>
using namespace std;
//tao ham merge để gộp hai mảng con không giảm thành 1 mảng không giảm
void merge(int arr[],int l,int mid,int r){
    int i, j, k;
    int x = mid - l + 1;
    int y =  r - mid;
    int L[x];
    int R[y];
    for (i = 0; i < x; i++){
    	L[i] = arr[l + i];
	}  
    for (j = 0; j < y; j++){
    	R[j] = arr[mid + 1+ j];
	}
    i = 0;
    j = 0; 
    k = l; 
    while (i < x && j < y){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < x){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < y){
        arr[k] = R[j];
        j++;
        k++;
    }
}
//tao ham mergeSort
void mergeSort(int a[],int l,int r){
    //với l,r là 2 biến chỉ vị trí đầu và cuối của mảng con cần chia
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}
int main(){
    int n;
	cin >> n;
    int a[1000];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
    mergeSort(a, 0, n - 1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}