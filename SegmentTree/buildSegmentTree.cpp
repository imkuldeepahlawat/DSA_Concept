#include <bits/stdc++.h>
using namespace std;
/**
 * C - can create a segmented tree froma an array
 * R - retrive is avaliable for single node or maximum element from a range or minimum, sum or most optimal element from a range
 * U - update  is available for single node and a range of nodes
 * D - not avaliable
 */
/**
 * @param{tree array,normal array,index of array,start of array,end of array}
 * @return nothing
 */
void buildTree(int *tree, int *a, int index, int s, int e)
{
    // Base Case
    if (s > e)
        return;
    // Base Case - Leaf Node
    if (s == e)
    {
        tree[index] = a[s];
        return;
    }

    // Recursive Case
    int mid = s + (e - s) / 2;
    // LeftSubtree
    buildTree(tree, a, 2 * index, s, mid);
    // RightSubtree
    buildTree(tree, a, 2 * index + 1, mid + 1, e);
    int left = tree[2 * index];
    int right = tree[2 * index + 1];

    tree[index] = min(left, right);
}
// Return a min element from the tree lying in range qs and qe
int query(int *tree, int index, int s, int e, int qs, int qe)
{
    // 3 cases
    // 1. no overlap
    if (qs > e || qe < s)
    {
        return INT_MAX;
    }
    // 2. complete overlap
    if (s >= qs && e <= qe)
    {
        return tree[index];
    }
    // 3. partial overlap
    int mid = s + (e - s) / 2;
    int leftAns = query(tree, 2 * index, s, mid, qs, qe);
    int rightAns = query(tree, 2 * index + 1, mid + 1, e, qs, qe);
    return min(leftAns, rightAns);
}
// update node in segmented tree
void updateNode(int *tree, int index, int s, int e, int i, int val)
{
    // no overlap
    if (i < s || i > e)
        return;
    // complete overlap
    if (s == e)
        tree[index] = val;
    // partial overlap
    int mid = s + (e - s) / 2;
    updateNode(tree, 2 * index, s, mid, i, val);
    updateNode(tree, 2 * index + 1, mid + 1, e, i, val);
    tree[index] = min(tree[2 * index], tree[2 * index + 1]);
    return;
}
// -RANGE UPDATES
// you will be given a range as rs->rangeStart ,re->rangeEnd
// and you increment every element in the range by value v;
void updateRange(int *tree, int index, int s, int e, int rs, int re, int inc)
{
    // no overlap
    if (re < s || rs > e)
    {
        return;
    }
    // complete overlap
    if (s == e)
    {
        tree[index] += inc;
        return;
    }
    // partial overlap
    int mid = s + (e - s) / 2;
    updateRange(tree, 2 * index, s, mid, rs, re, inc);
    updateRange(tree, 2 * index + 1, mid + 1, e, rs, re, inc);
    tree[index] = min(tree[2 * index], tree[2 * index + 1]);
    return;
}
int main()
{
    int a[] = {1, 3, 2, -2, 4, 5};
    int n = sizeof(a) / sizeof(int);
    // build the tree array
    int *tree = new int[4 * n + 1];
    cout << "Segment Tree" << endl;
    int s = 0;
    int e = n - 1;
    buildTree(tree, a, 1, s, e);

    int no_of_q;
    cin >> no_of_q;

    while (no_of_q--)
    {
        int qs, qe;
        cin >> qs >> qe;
        cout << "min value between Range is ";
        cout << query(tree, 1, s, e, qs, qe) << endl;
    }
}