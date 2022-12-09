#include<iostream>
using namespace std;
 class Student{
    //private data members
    private:
    string studentName;
    int studentRollno;
    int studentAge;
    // get method for student name to access 
    // private variable studentName
    public:
    string getStudentName(){
        return studentName;
    }

 };