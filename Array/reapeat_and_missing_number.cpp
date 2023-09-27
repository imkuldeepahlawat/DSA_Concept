/**
 * vector<int> Solution::repeatedNumber(const vector<int> &A) { 
    long long n = A.size();
    long long Sn = (n*(n+1))/2;
    long long S2n = (n*(n+1)*(2*n+1))/6;
    
    long long s = 0, s2 = 0;
    
    for(int i = 0;i<A.size();i++){
        s += A[i];
        s2 += (long long)A[i]*(long long)A[i];
    }
    
    long long val1  = s-Sn;
    long long val2 = s2-S2n;
    
    val2 = val2/val1;
    
    long long x = (val1+val2)/2;
    long long y = x-val1;
    
    return {(int)x,(int)y};
    
    
}

*/