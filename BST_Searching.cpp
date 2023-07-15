#include<iostream>
using namespace std;

class node
{
    public:
    int value;
    node* right;
    node* left;
    node(int v)
    {
        value = v;
        left = right = NULL;
    }

};

class Searching
{
    public:
    bool Binary_search(node *root , int v)
    {
        if (root == NULL)
            return false;

        if (root->value == v)
             return true;

        else if (root->value > v)
        {
            return Binary_search(root->left , v);
        }
        else
        {
            return Binary_search(root->right , v);
        }
    }

};

int main()
{
    system("clear");
    node *root = new node(50);
    root->left = new node(25);
    root->right = new node(75);
    root->left->right = new node(30);
    root->left->left = new node(20);
    root->right->right = new node(80);
    root->right->left = new node(70);
    Searching a;
    if (a.Binary_search(root , 75))
    {
        cout << " Value is inside the tree " << endl;
    }
    else
    {
        cout << " Value is not inside the tree " << endl;
    }
    
};
