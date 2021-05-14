#include <iostream>
#include "binarytree.h"

using namespace std;

int main()
{
    //      -
    // a          *
    //         b     c
    auto pa = new BiTNode<char>{'a',nullptr,nullptr};
    auto pb = new BiTNode<char>{'b',nullptr,nullptr};
    auto pc = new BiTNode<char>{'c',nullptr,nullptr};
    auto pm = new BiTNode<char>{'*',pb, pc};
    auto ps = new BiTNode<char>{'-',pa, pm};

    auto T = ps;
    auto print = [](char c) { cout << c; };

    Preorder(T,print);
    cout << endl;

    Inorder(T, print);
    cout << endl;

    Postorder(T, print);
    cout << endl;
    
    return 0;
}