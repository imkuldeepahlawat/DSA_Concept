#include<bits/stdc++.h>
using namespace std;
// Implement Your Solution Here
string jumpGame(vector<int> nums)
{
      int n = nums.size();
      int ans = n-1;
      for(int i = n-2;i>=0;i--){
            if(i+nums[i] >= ans){
                  ans = i;
            }
      }
      if(ans == 0) return "true";
      else return "false";
      
}
int main()
{
	int n;
	cin>>n;
	vector<int> ar(n);
	for(int i=0;i<n;i++)
		cin>>ar[i];
	cout<<jumpGame(ar);
}