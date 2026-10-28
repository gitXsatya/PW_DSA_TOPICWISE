#include <iostream>
using namespace std;

class BTreeNode
{
public:
    int *keys;
    BTreeNode **child;

    int n;          // number of keys
    bool leaf;
    int t;          // minimum degree

    BTreeNode(int t, bool leaf)
    {
        this->t = t;
        this->leaf = leaf;

        keys = new int[2 * t - 1];
        child = new BTreeNode*[2 * t];

        n = 0;
    }
};

class BTree
{
public:
    BTreeNode *root;
    int t;

    BTree(int t)
    {
        this->t = t;
        root = new BTreeNode(t, true);
    }

    void traverse(BTreeNode *node)
    {
        int i;

        for(i = 0; i < node->n; i++)
        {
            if(!node->leaf)
                traverse(node->child[i]);

            cout << node->keys[i] << " ";
        }

        if(!node->leaf)
            traverse(node->child[i]);
    }
};

int main()
{
    BTree tree(2);

    cout << "B-Tree created successfully\n";

    tree.traverse(tree.root);

    return 0;
}