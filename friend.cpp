#include<iostream>
 using namespace std;

class demo {
    int a;
    friend void get(demo &t1);
    public:
    void show() {
        cout << "The value of a is: " << a << endl;
    }
};
    void get(demo &t1) {
        cout << "Enter the value of a: ";
        cin >> t1.a;
    }

    int main(){
        demo d1;
        get(d1);
        d1.show();
        return 0;
    }
