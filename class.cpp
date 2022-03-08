#include <iostream>

using namespace std;

class hocsinh{
public:
    string name;
    int age;

    void nhapthongtin(){
        cin>>name;
        cin>>age;
    }
    void in(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main() {
    hocsinh s1;
    s1.nhapthongtin();
    s1.in();
    return 0;
}