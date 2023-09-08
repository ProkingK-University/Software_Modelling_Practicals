#include "BFSIterator.h"

BFSIterator::BFSIterator(Tile *root)
{
    queue.push(root);
}

Tile *BFSIterator::next()
{
    Tile *current = queue.front();

    queue.pop();

    if (current->up != nullptr)
    {
        queue.push(current->up);
    }

    if (current->down != nullptr)
    {
        queue.push(current->down);
    }

    if (current->left != nullptr)
    {
        queue.push(current->left);
    }

    if (current->right != nullptr)
    {
        queue.push(current->right);
    }

    return current;
}

bool BFSIterator::hasNext()
{
    return !queue.empty();
}