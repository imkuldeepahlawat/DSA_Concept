#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void solve(int arr[], vector<int> temp, int sum, int i, int target)
{
    // 4 if refering to n
    if(sum  > target) return;
    if (i == 4)
    {
        if (sum == target)
        {
            ans.push_back(temp);
            return;
        }
        return;
    }

    temp.push_back(arr[i]);
    solve(arr,temp,sum+arr[i],i,target);
    temp.pop_back();


    solve(arr,temp,sum,i+1,target);
    return;
}

int main()
{

    int arr[4] = {2, 3, 6, 7};

    vector<int> temp;

    solve(arr, temp, 0, 0, 7);

    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}