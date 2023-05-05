#include<queue>
int getKthLargest(vector<int> &arr, int k)
{
	/*approch 1*/
	//	Write your code here.
	// initialise a vector
	// run a loop
		// initialise a asum
		// run a loop
			// sum += arr[j]
			// push sum into vector
	
	// sort the ans vector
	// return lenghth of ans -kth element

	/*approch 2*/
	// create a min heap
	// nest loop
		// if sizepq < k
			// push into q
		// else
			// if sum > pq.top
				// pq.pop 
				// pq.insert sum

	priority_queue<int,vector<int>,greater<int>>pq;

	int n = arr.size();

	for(int i = 0;i<n;i++){
		int sum = 0;
		for(int j = i;j<n;j++){
			sum += arr[j];
			if(pq.size() < k){
				pq.push(sum);
			}else{
				if(sum > pq.top()){
					pq.pop();
					pq.push(sum);
				}
			}
		}
	}
	return pq.top();
}