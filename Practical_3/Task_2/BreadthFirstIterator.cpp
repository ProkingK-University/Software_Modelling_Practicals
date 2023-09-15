#include "BreadthFirstIterator.h"

BreadthFirstIterator::BreadthFirstIterator(Tile *root)
{
    queue.push(root);
}

Tile *BreadthFirstIterator::next()
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

bool BreadthFirstIterator::hasNext()
{
    return !queue.empty();
}