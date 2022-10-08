// Count total set bits in all numbers from 1 to N
#include<bits/stdc++.h>
using namespace std;

void CSbits(){
    int c,n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<endl;
    c = 0;
    int i = 1;
    while(i<=n){
        int j = i;
        cout<<"setbits of "<<j;
        while(j!=0){
	    	if(j&1==1){
	    		c+=1;		
	    	}
	    	j= j>>1;
        }
        cout<<" is "<<c<<endl;
        c = 0;
        i++;
	}    
    return;
}
int main(){
    while(1){
        CSbits();
    }
}