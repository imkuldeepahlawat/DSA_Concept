#include<bits/stdc++.h>
using namespace std;

int tempsol(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int srt=mid*mid;
        if(srt==n)
            return mid;
        if(srt<n){
            ans = mid;
            s=mid+1;
        }
        else{
            e =mid+1;
        }
        mid=s+(e-s)/2;        
    }
    return ans;
}

double morePrecision(int n,int numdigit,int tsolution){
    double factor = 1;
    double ans = tsolution;
    for(int i=0;i<numdigit;i++){
        factor = factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n=27;
    cout<<endl<<"Your Number is -> "<<n<<endl;
    // cout<<endl<<"Your intezar Solution is -> "<<tempsol(n)<<endl;
    int temp= tempsol(n);
    cout<<endl<<"Your full Solution is -> "<<morePrecision(n,3,temp)<<endl;
    cout<<endl;
}