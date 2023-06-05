#include <bits/stdc++.h>
using namespace std;

int searchInSorted(int arr[], int N, int K)
{

    // Your code here
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == K)
            return 1;
    }

    return -1;
}

int main()
{
    int N = 5, K = 6;
    int arr[] = {1, 2, 3, 4, 6};
    int ans = searchInSorted(arr, N, K);
    printf("%d\n", ans);
}