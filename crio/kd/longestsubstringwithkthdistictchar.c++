#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstringKDistinct(string s, int k)
{
	// create a unoredrd map
	unordered_map<char, int> tmap;
	// create sliding window pointer
	int l = 0, r = 0, maxlen = 0;
	int count = 0;
	while (r < s.length())
	{
		if (tmap.find(s[r]) != tmap.end())
		{
			// increasing the frequency
			tmap[s[r]]++;
			count++;
		}
		else
		{
			maxlen = max(maxlen, count);
			if (tmap.size() < k)
			{
				tmap[s[r]]++;
				count++;
			}
			else
			{
				while (k > tmap.size())
				{
					tmap[s[l]]--;
					if (tmap[s[l]] == 0)
					{
						tmap.erase(s[l]);
						l++;
					}
					// count--;
				}
			}
		}
		r++;
	}
	return maxlen;
	// traversing the string
	// counting the max lenght
	// deleting the previous element
	//
	// taking examples
	/*
	ex=>1
	5 3
	abacd
			a = 2		b = 1
			b = 1		c = 1
			c = 1		d = 1
			--> 4		--> 3
			so the answer is 4
			because in 3 distinct there is only 3 diffrent character  with 4 frequency
	ex=>2
	6 3
	Xyyzya
			X = 1		y = 3
			y = 3		z = 1
			z = 1		a = 1
			--> 5		--> 5
			so the answer is 5
			because in 3 distinct there is only 3 diffrent character  with 5 frequency

	*/
	/*bruteforce approch*/
	// create a array for frequency
	// use nested loop
	// use elemenet index same into new array as frequency
	// after that calculate the k lenght of sum
	// now calculate the max with sum + end
	// and subtracct the start from sum - start and i will go till  n-k
	// after the loop return the max lenght
	/*optimised approch*/
	// use map or set
}

int main()
{
	// int n = 6,k = 3;
	// string s = "Xyyzya";
	// int answer = lengthOfLongestSubstringKDistinct(s,k);
	// cout <<  answer;
	// return 0;
	// vector<string> arr{"3","30","1","124","54644"};
	// sort(arr.begin(), arr.end());
	// for(auto i: arr){
	// 	cout<<i<<" ";
	// }
	// for(int i =0;i<arr.size()-1;i++){
	// 	for(int j = i;j<arr.size()-1;j++){
	// 		if(arr[j]>arr[j+1]){
	// 			swap(arr[j],arr[j+1]);
	// 		}
	// 	}
	// }
	// cout<<endl;
	// for(auto i: arr){
	// 	cout<<i<<" ";
	// }
	int a = 0,b =-2;
	cout<<a-b;

}

/*
Crio Methodology

Milestone 1: Understand the problem clearly
1. Ask questions & clarify the problem statement clearly.
2. *Type down* an example or two to confirm your understanding of the input/output & extend it to test cases

Milestone 2: Finalize approach & execution plan
1. Understand what type of problem you are solving.
	 a. Obvious logic, tests ability to convert logic to code
	 b. Figuring out logic
	 c. Knowledge of specific domain or concepts
	 d. Knowledge of specific algorithm
	 e. Mapping real world into abstract concepts/data structures
2. Brainstorm multiple ways to solve the problem and pick one
3. Get to a point where you can explain your approach to a 10 year old
4. Take a stab at the high-level logic & *type it down*.
5. Try to offload processing to functions & keeping your main code small.

Milestone 3: Code by expanding your pseudocode
1. Have frequent runs of your code, don’t wait for the end
2. Make sure you name the variables, functions clearly.
3. Avoid constants in your code unless necessary; go for generic functions, you can use examples for your thinking though.
4. Use libraries as much as possible

Milestone 4: Prove to the interviewer that your code works with unit tests
1. Make sure you check boundary conditions
2. Time & storage complexity
3. Suggest optimizations if applicable
*/