#include <bits/stdc++.h>
using namespace std;
// binary tree object
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int data)
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *builTree(node *root)
{
    cout << "enter data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "enter data inserint into left" << endl;
    root->left = builTree(root->left);
    cout << "enter data inserint into right" << endl;
    root->right = builTree(root->right);

    return root;
}
void levelOrderTraversel(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // last level is completed
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->val << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


// preorder traversal
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

int main()
{
    node *root = NULL;
    // crating a tree
    root = builTree(root);
    // 8 7 5 -1 -1 4 -1 -1 6 9 -1 -1 2 -1 -1
    // level ordeer traversal of tree
    levelOrderTraversel(root);

    cout<<endl<<"this is pre order traversal"<<endl;
    preorder(root);
    cout<<endl<<"this is in order traversal"<<endl;
    inorder(root);
    cout<<endl<<"this is post order traversal"<<endl;
    postorder(root);
}