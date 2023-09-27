/**********
 * @return {@code true}
 * same cod eas knapsak
 * 
 * bool solve(arr[],int n ,int sum){
 * if(sum == 0) return true;
 * if(n == 0) return false;
 * 
 * //chose or not to choose
 * 
 * if(arr[n-1] <= sum){
 *  return (solve(arr,n-1,sum-arr[n-1]) || solve(arr,n-1,sum))
 * }
 * else if(arr[n-1] > sum){
 * return (solve(arr,n-1,sum)
 * }
 * }
*/