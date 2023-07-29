#include <bits/stdc++.h>
using namespace std;

vector<int> birthdayParty(vector<int> arr){
    int n = arr.size();
    vector<int> ans(n,-1);
    stack<int>st;
    for(int i = 0;i<n;i++){
        while(!st.empty() && arr[st.top()] >arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        assert (A[i] > 0);
    }
    vector<int> result = birthdayParty(A);
    for (auto i : result)
    {
        cout << i << " ";
    }
}