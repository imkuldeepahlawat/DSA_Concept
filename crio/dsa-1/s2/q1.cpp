#include <bits/stdc++.h>
using namespace std;

// TODO: Implement this method
int findElementQuery(vector<int> arr, int n, int x){

// approch 1
    long int ans = -1;
    for(int i =0;i<n;i++){
        if(arr[i] == x){
            ans = i;
            return ans;
        }
    }
    return ans;
    // approch 2 binary search
    // int s = 0;
    // int e = n-1;
    // int m = s + (e-s)/2;
    // int ans = -1;
    // while(s<=e){
    //     if(arr[m] == x){  
    //         ans = m;
    //         break;
    //     }
    //     // right part
    //     if(x > arr[m]){
    //         s = m+1;
    //     }
    //     // left part
    //     else{
    //         e = m-1;
    //     }
    //     m = s+(e-s)/2;
    // }
    // return ans;
}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> vec[i];
    }
    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        int result = findElementQuery(vec, n , x);
        cout << result << "\n";
    }
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