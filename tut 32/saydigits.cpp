#include <bits/stdc++.h>
using namespace std;

void sayd(int n,string arr[])
{
    if(n==0){
        return;
    }
    // finding digit
    int digit = n%10;
    // updating n
    n = n/10;
    // recurssive approach
    sayd(n,arr);
    cout<<arr[digit]<<", ";

}

int main()
{
    int n = 421564;
    string arr[11] = {"Zero","One","Two",
        "Three","Four","Five",
        "Six","Seven","Eight","Nine"};
    // cin>>n;
    cout<<endl;
    sayd(n,arr);
    cout<<endl;
}