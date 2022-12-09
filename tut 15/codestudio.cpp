// Painter's Partition Problem 

bool ispossible(vector<int> arr, int n, int k, int mid){
    int ptr = 1;
    int bsum = 0;
    for(int i;i<n;i++){
        if(bsum+arr[i]<=mid){
            bsum = bsum + arr[i];
        }
        else{
            ptr++;
            if(ptr>k || bsum>mid){
                return false;
            }
            bsum = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int N = sizeof(boards)/sizeof(boards[0]);
    int s = 0;
    int sum = 0;
    for(int i = 0;i<N;i++){
        sum = sum + boards[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<e){
        if(ispossible(boards,N,k,mid)==1){
            ans = mid;
            s = mid + 1;
        }
        else if(ispossible(boards,N,k,mid)==0){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
// Corection

bool ispossible(vector<int> &arr, int n, int k, int mid){
    int ptr = 1;
    int bsum = 0;
    for(int i=0;i<n;i++){
        if(bsum+arr[i]<=mid){
            bsum = bsum + arr[i];
        }
        else{
            ptr++;
            if(ptr>k || arr[i]>mid){
                return false;
            }
            bsum = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int N = boards.size();
    int s = 0;
    int sum = 0;
    for(int i = 0;i<N;i++){
        sum = sum + boards[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(ispossible(boards,N,k,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}