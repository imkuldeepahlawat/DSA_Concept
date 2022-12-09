#include<iostream>
using namespace std;
class ci{};

class student {
    int rollno;
    char name[20];
    float marks;
    char grade;
    public:
        // get function for output
        int getRollno(){
            return rollno;
        }
        int setRollno(int r){
            rollno = r;
        }
        char getname(){
            return name;
        }
        char setname(char& n){
            name = n;
        }
        // get function for output
        int getMarks(){
            return marks;
        }
        int setMarks(int m){
            marks = m;
        }
        void print(){
            cout<<"Roll NO."<<rollno;
            cout<<"Name"<<name;
            cout<<"Marks"<<marks;
            cout<<"Grade"<<marks;
        }
        //set function for set grade
        void setgrade(){
            if(marks>90) grade = 'A';
            else if(marks>80) grade = 'B';
            else if(marks>70) grade = 'C';
            else if(marks>60) grade = 'D';
            else grade = 'E';
        }
};

int main(){
    student a;
    cout<<a.getRollno();
    ci ci;
}