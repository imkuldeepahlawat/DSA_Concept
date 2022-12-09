#include<iostream>
using namespace std;

// question 12
// void changeSign(int *p){
//     *p = (*p) * -1;
// }

// question 13
// void fun(int a[]){
//     cout<<a[0]<<" ";
// }

// question 14
// void square(int *p){
//     int a = 10;
//     p = &a;
//     *p = (*p) * (*p);
// }

// question 15
// void swap1(char *x,char *y){
//     char *t = x;
//     x = y;
//     y = t;
// }

// question 16
// void q(int z){
//     z += z;
//     cout<<z<<" ";
// }

// void p(int *y){
//     int x = *y + 2;
//     q(x);
//     *y = x-1;
//     cout<<x<<" ";
// }

// question 18
// int f(int x, int *py, int **ppz){
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;
// }

// questions 20
void increment(int **p){
    (**p)++;
}


int main(){
    // question 1
    /*int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout<<endl<<first<<" "<<second;*/
    
    // question 2
    /*int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first;*/
    
    
    // question 3
    /*int first = 8;
    int *p = &first;
    cout<<(*p)++<<" ";
    cout<<first;*/


    /*// question 4
    int *p = 0;
    int first = 110;
    *p = first;
    cout<<endl<<*p<<" ";*/

    /*// qustion 5
    char b[]="xyz";
    char *c = &b[0];
    cout<<c;*/

    // qustion 6
    // char s[]="hello";
    // char *p = s;
    // cout<<s[0]<<" "<<p[0];
    
    // question 7
    // char arr[20];
    // int i;
    // for(i=0;i<10;i++){
    //     *(arr+i)=65+i;
    // }
    // *(arr+i)='\0';
    // cout<< arr;

    // question 8
    // char *ptr;
    // char Str[]="abcdefg";
    // ptr = Str;
    // ptr += 5;
    // cout<<ptr;

    // question 9
    // int numbers[5];
    // int *p;
    // p = numbers;
    // *p = 10;
    // p = &numbers[2];
    // *p = 20;
    // p--;
    // *p = 30;
    // p = numbers + 3;
    // *p = 40;
    // p = numbers;
    // *(p+4)=50;
    // for(int n =0;n<5;n++){
    //     cout<<numbers[n]<<",";
    // }

    // question 10
    // char st[] = "ABCD";
    // for(int i = 0; st[i] !='\0';i++){
    //     cout<<"'"<<st[i]<<*(st)+i<<*(i+st)<<i[st]<<",";
    // }

    // question 11
    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // cout<<*ptr2<<" ";
    // cout<<ptr2 - ptr1;

    // question 12
    // int a = 10;
    // changeSign(&a);
    // cout<<a <<endl;

    // question 13
    // int a[] = {1,2,3};
    // fun(a+1);
    // cout<<a[0];

    // question 14
    // int a = 10;
    // square(&a);
    // cout<<a<<endl;

    // question 15
    // char *x = "ninjasquiz";
    // char *y = "codingninjas";
    // char *t;
    // swap1(x,y);
    // cout<<x<<" "<<y;
    // t = x;
    // x = y;
    // y = t;
    // cout<<" "<<x<<" "<<y;

    // question 16
    // int x = 5;
    // p(&x);
    // cout<<x;

    // question 17
    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;
    // (*p)++;
    // cout<< a << " " << b << endl;

    // question 18
    // int c, *b, **a;
    // c = 4;
    // b = &c;
    // a = &b;
    // cout<<f(c,b,a);

    // question 19
    // int ***r,**q,*p, i = 8;
    // p = &i;
    // (*p)++;
    // q = &p;
    // (**q)++;
    // r = &q;
    // cout<<*p<<" "<<**q<<" "<<***r;

    // question 20
    int num = 10;
    int *ptr = &num;
    increment(&ptr);
    cout<<num<<endl;
    return 0;
}