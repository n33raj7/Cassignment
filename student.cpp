#include<iostream>
 using namespace std;

class student{
    public:
        string name;
        int roll;
};

class test: public student{
    public:
        float marks1, marks2, marks3, marks4, marks5, total;
        float average;


        test(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> roll;
            cout << "Enter marks for 5 subjects: ";
            cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;
            total = marks1 + marks2 + marks3 + marks4 + marks5;
            average = total / 5.0;
        }
};

class result: public test{
    public:
        result(){
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << roll << endl;
            cout << "Total Marks: " << total << endl;
            cout << "Average Marks: " << average << endl;
        }
    };

int main(){
    result r;
    
    return 0;
}