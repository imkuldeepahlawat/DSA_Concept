/***
 * 
 * int knapsack(int val[],int wt,int n,int w){
 * if(n== 0 || w== 0) return 0;
 * 
 * //when pick but compare with not pick
 * if(wt[n-1] <= w){
 *  return max(val[n-1] + knapsack(val,wt,n-1,w-wt[n-1],knapsack(val,wt,n-1,w))
 * //when not pick
 * } else if(wt[n-1] > w){
 * return knapsack(val,wt,n-1,w);
 * }
 * 
*/