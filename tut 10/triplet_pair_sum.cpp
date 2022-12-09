#include <bits/stdc++.h>
using namespace std;

// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
bool find3Numbers(int A[], int arr_size, int sum)
{
	// Fix the first element as A[i]
	for (int i = 0; i < arr_size - 2; i++)
	{

		// Fix the second element as A[j]
		for (int j = i + 1; j < arr_size - 1; j++)
		{

			// Now look for the third number
			for (int k = j + 1; k < arr_size; k++)
			{
				if (A[i] + A[j] + A[k] == sum)
				{
					cout << "Triplet is " << A[i] <<
						", " << A[j] << ", " << A[k];
					return true;
				}
			}
		}
	}

	// If we reach here, then no triplet was found
	return false;
}

/* Driver code */
int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int sum = 11;
	int arr_size = sizeof(A) / sizeof(A[0]);
	find3Numbers(A, arr_size, sum);
	return 0;
}

// This is code is contributed by rathbhupendra



/*

#include <bits/stdc++.h> 
#include<vector>
#include <algorithm>
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int key) {
    sort( arr.begin(), arr.end() );
    vector< vector<int> > ans;
    vector<int> temp;
    int i = 0,j= i+1, k= j+1;
    for (;i<n-1;i++){
        if(arr[i]+arr[j]+arr[j]==key){
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            temp.push_back(arr[k]);
            ans.push_back(temp);
            break;
        }
        else if(i<n-1 && arr[i]<key){
            for(;j<n-1;j++){
                if(arr[i]+arr[j]+arr[j]==key){
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                    break;
                }
                else if(k<n-1 && arr[k]<key){
                    for(;k<n-1;k++){
                        if(arr[i]+arr[j]+arr[j]==key){
                            temp.push_back(arr[i]);
                            temp.push_back(arr[j]);
                            temp.push_back(arr[k]);
                            ans.push_back(temp);
                            break;
                        }
                    }
                }
            }
        }
    }
    sort( ans.begin(), ans.end() );
    ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
    return ans;
}

*/