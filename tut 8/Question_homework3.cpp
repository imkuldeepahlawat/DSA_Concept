// number note counting
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Note Guessing Machine Programme"<<endl;
    while (1)
    {
        int rs2000, rs1000, rs500, rs100, rs50, rs20, rs10, rs5, rs1;
        int amount;
        cout<<"Please enter The value here"<<endl;
        cin>>amount;
        switch (1){
            case 1:{
                rs2000 = amount/2000;
                amount = amount%2000;
                cout<<"2000 rs Note "<<rs2000<<endl;
            }
            case 2:{
                rs1000 = amount/1000;
                amount = amount%1000;
                cout<<"1000 rs Note "<<rs1000<<endl;
            }
            case 9:{
                rs500 = amount/500;
                amount = amount%500;
                cout<<"500 rs Note "<<rs500<<endl;
            }
            case 3:{
                rs100 = amount/100;
                amount = amount%100;
                cout<<"100 rs Note "<<rs100<<endl;
            }
            case 4:{
                rs50 = amount/50;
                amount = amount%50;
                cout<<"50 rs Note "<<rs50<<endl;
            }
            case 5:{
                rs20 = amount/20;
                amount = amount%20;
                cout<<"20 rs Note "<<rs20<<endl;
            }
            case 6:{
                rs10 = amount/10;
                amount = amount%10;
                cout<<"10 rs Note "<<rs10<<endl;
            }
            case 7:{
                rs5 = amount/5;
                amount = amount%5;
                cout<<"5 rs Note "<<rs5<<endl;
            }
            case 8:{
                rs1 = amount/1;
                amount = amount%1;
                cout<<"1 rs Note "<<rs1<<endl;
                cout<<"lets Guess Again"<<endl;
                break;
            }
            default:cout<<"Please Enter the Correct amount";
        }
    }
    
    
}