#include "DFSIterator.h"

DFSIterator::DFSIterator(Tile *root)
{
    stack.push(root);
}

Tile *DFSIterator::next()
{
    Tile *current = stack.top();

    stack.pop();

    if (current->up != nullptr)
    {
        stack.push(current->up);
    }

    if (current->down != nullptr)
    {
        stack.push(current->down);
    }

    if (current->left != nullptr)
    {
        stack.push(current->left);
    }

    if (current->right != nullptr)
    {
        stack.push(current->right);
    }

    return current;
}

bool DFSIterator::hasNext()
{
    return !stack.empty();
}