#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool simleprime(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int simplecount(int n){
    // itrative way
    int count =0;
    for(int i = 2;i<n;i++){
        if(simleprime(i)){
            count++;
        }
    }
    return count;
}
// by seive of Eratosthenas algorithm
int soe(int n){
    int cnt = 0;
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = true;
    for(int i = 0;i<n;i++){
        if(prime[i]){
            cnt++;
            for(int j = 2*i ; j < n ; j = (j+1) ){
                prime[i] = 0;
            }
        }
    }
    return cnt;
}

int main(){
    int n = 10;
    int a = simplecount(n);
    int b = soe(n);
    cout<<"algo of simpe count "<<a<<endl;
    cout<<"algo of sieve of eratosthines "<<a<<endl;

}