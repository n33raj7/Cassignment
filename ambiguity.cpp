#include<iostream>
 using namespace std;

 class a{
    public:
    a() {
        cout << "a constructor called" << endl;
    }
 };

 class b: public a{
    public:
    b() {
        cout << "b constructor called" << endl;
    }
 };

 class c: public a{
    public:

    c() {
        cout << "c constructor called" << endl;
    }
 };

 class d: public b, public c{
    public:
    d() {
        cout << "d constructor called" << endl;
    }
 };

int main() {
    d::c d1;
    return 0;
}