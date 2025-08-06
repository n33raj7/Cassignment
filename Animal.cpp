#include<iostream>
 using namespace std;


class animal {
public:
    virtual void sound() = 0;
};

class dog : public animal {
public:
    void sound() override {
        cout << "Woof!" << endl;
    }
};


class cat : public animal {
public:
    void sound() override {
        cout << "Meow!" << endl;
    }

};


int main(){

    animal* myDog = new dog();
    animal* myCat = new cat();

    
    
    myDog->sound();
    myCat->sound(); 

    delete myDog;
    delete myCat;

    return 0;
}