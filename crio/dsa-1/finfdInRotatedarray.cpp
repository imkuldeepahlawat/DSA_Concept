#include <bits/stdc++.h>
using namespace std;

//   find pivot
int findpiv(vector<int> &num)
{
    int s = 0;
    int e = num.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (num[mid] > num[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s - 1;
}
//   binar search
int findNum(vector<int> &nums, int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else if (target > nums[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    // Your implementation goes here
    int ans = -1;
    // bruteforce solution
    // for(int i = 0;i<nums.size();i++){
    //     if(nums[i] == target){
    //         return i;
    //     }
    // }
    /*********binary search********/
    int n = nums.size();
    int piv = findpiv(nums);
    cout << nums[piv] << " this is pivot" << endl;
    if (nums[n - 1] < nums[0])
    {
        if (target < nums[0])
        {
            return findNum(nums, piv, n - 1, target);
        }
        else
        {
            cout << "ans1";
            return findNum(nums, 0, piv, target);
        }
    }
    else
    {
        cout << "ans2";
        return findNum(nums, 0, n - 1, target);
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 5, 6, 9, 10, 2, 3};

    int ans = search(nums, 8);
    cout << ans << " this is ans";
}

/*
Crio Methodology

Milestone 1: Understand the problem clearly
1. Ask questions & clarify the problem statement clearly.
2. *Type down* an example or two to confirm your understanding of the input/output & extend it to test cases

Milestone 2: Finalize approach & execution plan
1. Understand what type of problem you are solving.
     a. Obvious logic, tests ability to convert logic to code
     b. Figuring out logic
     c. Knowledge of specific domain or concepts
     d. Knowledge of specific algorithm
     e. Mapping real world into abstract concepts/data structures
2. Brainstorm multiple ways to solve the problem and pick one
3. Get to a point where you can explain your approach to a 10 year old
4. Take a stab at the high-level logic & *type it down*.
5. Try to offload processing to functions & keeping your main code small.

Milestone 3: Code by expanding your pseudocode
1. Have frequent runs of your code, dont wait for the end
2. Make sure you name the variables, functions clearly.
3. Avoid constants in your code unless necessary; go for generic functions, you can use examples for your thinking though.
4. Use libraries as much as possible

Milestone 4: Prove to the interviewer that your code works with unit tests
1. Make sure you check boundary conditions
2. Time & storage complexity
3. Suggest optimizations if applicable
*/