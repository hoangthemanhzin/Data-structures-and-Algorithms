
    //Nhập vào một số nguyên dương n, và n số nguyên lần lượt là các phần tử trong dãy a. 
    //Hãy in lần lượt các số nguyên tố có trong dãy a ra màn hình, sau mỗi phần tử có đúng một khoảng trắng.
    //Số a được gọi là ước của b nếu b chia hết cho a). Biết rằng dãy sẽ có ít nhất một số nguyên tố.
    #include<iostream>
    #include<math.h>

using namespace std;

bool isPrime(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		if (isPrime(a[i])){
			cout << a[i] << " ";	
		}
	}
	
	return 0;
}

