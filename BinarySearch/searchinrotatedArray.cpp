#include <bits/stdc++.h>
using namespace std;

class FindPersonWithHeightH {
  public:
    int findPivot(vector<int>&arr, int s,int e){
        

        while(s<e){
            int mid = s+(e-s)/2;
            if(arr[mid] > arr[e]){
                s = mid+1;
            }else{
                e = mid;
            }
            
        }
        return s;
    }
    int binarySearch(vector<int>& arr,int s,int e, int target){
        
        while(s<=e){
            int mid = s+(e-s)/2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] < target) s = mid+1;
            else e = mid-1;
        }

        return -1;
    }
    int findPersonWithHeightH(vector<int>& arr, int H) {
        // Your implementation goes here
        int ans = -1;
        int n = arr.size();        
        int pivot = findPivot(arr,0,n-1);
        if(pivot == 0) return binarySearch(arr,0,n-1,H);
        else if(H >= arr[0]) return binarySearch(arr,0,pivot-1,H);
        else return binarySearch(arr,pivot,n-1,H);
        
    	return ans;
    }
};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> seq;
    ReadMatrix<int>().OneDMatrix(n, seq);
    assert (1 <= n && n <= 1e5);
    for (int i = 0; i < n; i++)
    {
        assert (0 < seq[i] && seq[i] < INT_MAX);
    }
    int queries;
    cin >> queries;
    assert (1 <= queries && queries <= 1e5);
    for (int i = 0; i < queries; i++) {
        int H;
        cin >> H;
        assert (0 < H && H < INT_MAX);
        int result = FindPersonWithHeightH().findPersonWithHeightH(seq, H);
        cout << result << "\n";
    }

    return 0;
}