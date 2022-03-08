#include <iostream>

using namespace std;

void inc(int* a) {
    (*a)++;
}

int main() {
    int a;
    cin>>a;
    inc(&a);
    cout << "Value of a: " << a;
    return 0;
}