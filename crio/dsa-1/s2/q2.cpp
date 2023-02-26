#include <bits/stdc++.h>
using namespace std;

// TODO: Implement this method
bool checkMagicSquare(vector<vector<int> > mat, int n){
    int sum1 =0;
    int sum2=0;
    for(int i = 0;i<n;i++){
        sum1 += mat[i][i];
        sum2 += mat[i][n-1-i];
    }
    // if cros sum is not equal to each other then return false
    if (sum1 != sum2){
        return false;
    }
    for(int i = 0;i<n;i++){
        int rowsum = 0,colsum = 0;
        for(int j = 0;j<n;j++){
            rowsum += mat[i][j];
            colsum += mat[j][i];
        }
        if(rowsum != colsum || colsum !=sum1){
            return false;
        }
    }
    
    return true;
}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    vector<vector<int> > mat(n, vector<int>(n));
    for(int i = 0 ; i < n  ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> mat[i][j];
        }
    }
    bool result = checkMagicSquare(mat, n);
    if(result) {
        cout << "Yes";
    } else {
        cout << "No";
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