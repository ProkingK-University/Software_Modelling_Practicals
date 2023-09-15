#include "DepthFirstIterator.h"

DepthFirstIterator::DepthFirstIterator(Tile *root)
{
    stack.push(root);
}

Tile *DepthFirstIterator::next()
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

bool DepthFirstIterator::hasNext()
{
    return !stack.empty();
}