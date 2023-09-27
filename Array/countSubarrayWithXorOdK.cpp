/****
 * brute force solution
 * int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int cnt = 0;
    
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int xors = 0;
            
            for(int k = i ;k<=j;k++){
                xors = xors^A[k];
            }
            
            if(xors == B){
                cnt++;
            }
            
        }
    }
    return cnt;
}
*/


/************
 * better solution
 * 
 * 
 * int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int cnt = 0;
    
    for(int i = 0;i<n;i++){
        int xors = 0;
        for(int j = i;j<n;j++){
            xors = xors^A[j];
            if(xors == B){
                cnt++;
                
            }
        }
    }
    return cnt;
}

*/

/***************
 * optimal solution
 * 
 * int n = A.size();
    
    int xors = 0;
    
    unordered_map<int,int>tmap;
    
    
    tmap[xors]++;
    
    int cnt = 0;
    
    for(int i = 0;i<n;i++){
        xors = xors^A[i];
        
        int x = xors^B;
        
        cnt += tmap[x];
        
        tmap[xors]++;
    }
    return cnt;
}
*/