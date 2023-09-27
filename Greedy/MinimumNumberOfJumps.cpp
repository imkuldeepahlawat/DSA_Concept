#include <bits/stdc++.h>
using namespace std;

int minimumJumps(int arr[], int n)
{
    if (n == 1)
        return 0;
    if (arr[0] == 0)
        return -1;

    int maxReach = arr[0];
    int step = arr[0];
    int jump = 1;
    int i = 1;
    for (i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jump;

        maxReach = max(maxReach, i + arr[i]);
        // reduce step
        step--;
        // check if my step quota is finish or not
        if (step == 0)
        {
            // everytime i need to go maximum distance so i check when  it is 0
            jump++;
            // when find my i is has out of reach then no way to reach
            if (i >= maxReach)
            {
                return -1;
            }
            // init step again
            step = maxReach - i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << minimumJumps(arr, n);
}

/****
 *
 *
 * Step 1: Initialize variables
 *
 arr[] = {3, 4, 2, 1, 2, 1}
n = 6
maxReach = 3
step = 3
jump = 1
i = 1
Step 2: Loop iteration 1
Position: 0  1  2  3  4  5
arr[]:    {3, 4, 2, 1, 2, 1}
maxReach:  3
step:      3
jump:      1

Explanation:
- The farthest index reachable from position 0 (index 0) is 0 + 3 = 3.
- We take one step from position 0 to position 3.
Step 3: Loop iteration 2
Position: 0  1  2  3  4  5
arr[]:    {3, 4, 2, 1, 2, 1}
maxReach:     5
step:         2
jump:         1

Explanation:
- The farthest index reachable from position 1 (index 1) is 1 + 4 = 5.
- We take two steps from position 1 to position 5.
Step 4: Loop iteration 3
Position: 0  1  2  3  4  5
arr[]:    {3, 4, 2, 1, 2, 1}
maxReach:        5
step:            1
jump:            2

Explanation:
- The farthest index reachable from position 3 (index 3) is 3 + 1 = 4.
- We take one step from position 3 to position 4.
Step 5: Loop iteration 4
Position: 0  1  2  3  4  5
arr[]:    {3, 4, 2, 1, 2, 1}
maxReach:           5
step:               0
jump:               2

Explanation:
- The farthest index reachable from position 4 (index 4) is 4 + 2 = 6.
- We take two steps from position 4 to position 6.
Step 6: Loop iteration 5 (end of the loop)
Position: 0  1  2  3  4  5
arr[]:    {3, 4, 2, 1, 2, 1}
maxReach:              6
step:                  0
jump:                  3

Explanation:
- The loop ends because `i` (index) becomes equal to `n-1` (5 equals 6-1).
- We have successfully reached the end of the array in 3 jumps.
Final result: The minimum number of jumps required to reach the end of the array is 3.
*/