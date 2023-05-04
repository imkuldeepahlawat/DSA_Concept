#include <bits/stdc++.h>
#include<queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    heap()
    {
        arr[0] = -1;

        size = 0;
    }
    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }
        // set last to first
        arr[1] = arr[size];
        // remove last element
        size--;
        // take root node to its correct postition

        int i = 1;
        while (i < size)
        {
            int lefti = 2 * i;
            int righti = 2 * i + 1;

            if (lefti < size && arr[i] < arr[lefti])
            {
                swap(arr[i], arr[lefti]);
                i = lefti;
            }
            else if (righti < size && arr[i] < arr[righti])
            {
                swap(arr[i], arr[righti]);
                i = righti;
            }
            else
            {
                return;
            }
        }
    }
};
// hepify function
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = i*2;
    int right = i*2+1;

    if(left <= n  &&  arr[largest] <arr[left]){
        largest = left;
    }
    if(right <= n  &&  arr[largest] <arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

// heap sort
void heapsort(int arr[],int n){
    int t = n;
    while(t > 1){
        // step 1
        swap(arr[t] ,arr[1]);

        // step 2
         t--;
         heapify(arr,t,1);

    }


}
int main()
{
    // /creating a new heap
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletefromheap();
    h.print();
    // heapify propertiees
    int n = 5;
    int arr[6] = {-1,54,53,55,52,50};
    for(int i = n/2;i>0;i--){
        heapify(arr,n,i);

    }
    cout<<"heapify list"<<endl;
    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    heapsort(arr,n);
    cout<<"printing list after heapsort"<<endl;
    for(int i = 1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(9);
    pq.push(3);
    pq.push(1);
    pq.push(-90);
    cout<<pq.top()<<endl;
    


    return 0;
}