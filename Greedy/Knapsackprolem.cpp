/*
struct Item{
    int value;
    int weight;
};
*/


// class Solution
// {
//     public:
//     static bool cmp(pair<double,Item> a,pair<double,Item> b){
//         return a.first > b.first;
//     }
//     //Function to get the maximum total value in the knapsack.
//     double fractionalKnapsack(int W, Item arr[], int n)
//     {
//         // Your code here
        
        
        
//         vector<pair<double,Item>>cache;
        
//         for(int i = 0;i<n;i++){
//             double tempUnit = 1.0*arr[i].value/arr[i].weight;
//             cache.push_back({tempUnit,arr[i]});
//         }
        
//         sort(cache.begin(),cache.end(),cmp);
//         double ans  = 0;
        
        
//         for(int i = 0;i<n;i++){
//             if(cache[i].second.weight > W){
//                 ans += W*cache[i].first;
//                 W = 0;
//             }else{
//                 ans += cache[i].second.value;
//                 W = W - cache[i].second.weight;
//             }
//         }
//         return ans;
//     }
        
// };
