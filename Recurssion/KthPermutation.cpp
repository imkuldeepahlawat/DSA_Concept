/**********
 *
 * class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int> num;

        for(int i = 1;i<n;i++){
            fact = fact * i;
            num.push_back(i);
        }
        num.push_back(n);

        string ans = "";
        k = k-1;

        while(true){
            ans = ans + to_string(num[k/fact]);
            num.erase(num.begin()+k/fact);
            if(num.size() == 0){
                break;
            }

            k = k%fact;
            fact = fact/num.size();
        }
        return ans;
    }
};
*/

// Dry run for getPermutation function
// n = 4, k = 4

// Initialize fact as 1 and create an empty list num.
int fact = 1;
vector<int> num;

// Iterate i from 1 to n-1 (3 in this case) using a for loop:
for(int i = 1; i < n; i++){
    // In each iteration, update fact as fact * i and append i to the num list.
    // First iteration: fact = 1 * 1 = 1, num = [1]
    // Second iteration: fact = 1 * 2 = 2, num = [1, 2]
    // Third iteration: fact = 2 * 3 = 6, num = [1, 2, 3]
    fact = fact * i;
    num.push_back(i);
}

// Append n (4 in this case) to the num list, resulting in num = [1, 2, 3, 4].
num.push_back(n);

// Initialize an empty string ans.
string ans = "";

// Subtract 1 from k, so k becomes k - 1 (4 - 1 = 3).
k = k - 1;

// Enter a while loop that continues until the condition is true:
while(true){
    // Append the element at index k/fact from the num list to ans.
    // In this case, k/fact is 3/6, which equals 0. Therefore, num[0] corresponds to 1, and ans becomes "1".
    ans = ans + to_string(num[k/fact]);

    // Remove the element at index k/fact from the num list.
    // After removing num[0], num = [2, 3, 4].
    num.erase(num.begin()+k/fact);

    // Check if the size of num is 0. Since it is not, continue with the following steps.

    // Update k as k % fact.
    // Here, k % fact is 3 % 6, which is 3. Therefore, k remains 3.
    k = k % fact;

    // Update fact as fact divided by the size of num.
    // In this case, the size of num is 3, so fact becomes 6 / 3, which equals 2.
    fact = fact / num.size();

    // Repeat the while loop since the condition is still true.

    // Append the element at index k/fact from the num list to ans.
    // Now, k/fact is 3/2, which is 1.5. We round down to 1, so num[1] corresponds to 3. Thus, ans becomes "13".
    // Remove the element at index k/fact from the num list.
    // After removing num[1], num = [2, 4].
    // Check if the size of num is 0. Since it is not, continue with the following steps.
    // Update k as k % fact.
    // Here, k % fact is 3 % 2, which is 1. Therefore, k remains 1.
    // Update fact as fact divided by the size of num.
    // In this case, the size of num is 2, so fact becomes 2 / 2, which equals 1.
    // Repeat the while loop.
    // Append the element at index k/fact from the num list to ans.
    // Now, k/fact is 1/1, which is 1. Therefore, num[1] corresponds to 4. Thus, ans becomes "134".
    // Remove the element at index k/fact from the num list.
    // After removing num[1], num = [2].
    // Check if the size of num is 0. Since it is not, continue with the following steps.
    // Update k as k % fact.
    // Here, k % fact is 1 % 1, which is 0. Therefore, k becomes 0.
    // Update fact as fact divided by the size of num.
    // In this case, the size of num is 1, so fact becomes 1 / 1, which equals 1.
    // Repeat the while loop.
    // Append the element at index k/fact from the num list to ans.
    // Now, k/fact is 0/1, which is 0. Therefore, num[0] corresponds to 2. Thus, ans becomes "1342".
    // Remove the element at index k/fact from the num list.
    // After removing num[0], num becomes an empty list [].
    // Check if the size of num is 0. Since it is 0, exit the while loop.

// Return the value of ans, which is "1342".
return ans;


/**
 * 1. Initialize fact as 1 and create an empty list num.
2. Iterate i from 1 to n-1 (3 in this case) using a for loop:
   - In each iteration, update fact as fact * i and append i to the num list.
     - First iteration: fact = 1 * 1 = 1, num = [1]
     - Second iteration: fact = 1 * 2 = 2, num = [1, 2]
     - Third iteration: fact = 2 * 3 = 6, num = [1, 2, 3]
3. Append n (4 in this case) to the num list, resulting in num = [1, 2, 3, 4].
4. Initialize an empty string ans.
5. Subtract 1 from k, so k becomes k - 1 (4 - 1 = 3).
6. Enter a while loop that continues until the condition is true:
   - Append the element at index k/fact from the num list to ans.
     - In this case, k/fact is 3/6, which equals 0. Therefore, num[0] corresponds to 1, and ans becomes "1".
   - Remove the element at index k/fact from the num list.
     - After removing num[0], num = [2, 3, 4].
   - Check if the size of num is 0. Since it is not, continue with the following steps.
   - Update k as k % fact.
     - Here, k % fact is 3 % 6, which is 3. Therefore, k remains 3.
   - Update fact as fact divided by the size of num.
     - In this case, the size of num is 3, so fact becomes 6 / 3, which equals 2.
   - Repeat the while loop since the condition is still true.
   - Append the element at index k/fact from the num list to ans.
     - Now, k/fact is 3/2, which is 1.5. We round down to 1, so num[1] corresponds to 3. Thus, ans becomes "13".
   - Remove the element at index k/fact from the num list.
     - After removing num[1], num = [2, 4].
   - Check if the size of num is 0. Since it is not, continue with the following steps.
   - Update k as k % fact.
     - Here, k % fact is 3 % 2, which is 1. Therefore, k remains 1.
   - Update fact as fact divided by the size of num.
     - In this case, the size of num is 2, so fact becomes 2 / 2, which equals 1.
   - Repeat the while loop.
   - Append the element at index k/fact from the num list to ans.
     - Now, k/fact is 1/1, which is 1. Therefore, num[1] corresponds to 4. Thus, ans becomes "134".
   - Remove the element at index k/fact from the num list.
     - After removing num[1], num = [2].
   - Check if the size of num is 0. Since it is not, continue with the following steps.
   - Update k as k % fact.
     - Here, k % fact is 1 % 1, which is 0. Therefore, k becomes 0.
   - Update fact as fact divided by the size of num.
     - In this case, the size of num is 1, so fact becomes 1 / 1, which equals 1.
   - Repeat the while loop.
   - Append the element at index k/fact from the num list to ans.
     - Now, k/fact is 0/1, which is 0. Therefore, num[0] corresponds to 2. Thus, ans becomes "1342".
   - Remove the element at index k/fact from the num list.
     - After removing num[0], num becomes an empty list [].
   - Check if the size of num is 0. Since it is 0, exit the while loop.
7. Return the value of ans, which is "1342".

 *
 *
*/