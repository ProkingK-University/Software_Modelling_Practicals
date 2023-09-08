#include "Lair.h"
#include "DFSIterator.h"
#include "BFSIterator.h"

Lair::Lair()
{
    root = nullptr;
}

void Lair::addTile(int xCoord, int yCoord)
{
    if (root == nullptr)
    {
        root = new Tile(xCoord, yCoord);

        return;
    }

    Tile *current = root;

    while (true)
    {
        if (xCoord < current->xCoord)
        {
            if (current->left == nullptr)
            {
                current->left = new Tile(xCoord, yCoord);
                return;
            }
            else
            {
                current = current->left;
            }
        }
        else if (xCoord > current->xCoord)
        {
            if (current->right == nullptr)
            {
                current->right = new Tile(xCoord, yCoord);
                return;
            }
            else
            {
                current = current->right;
            }
        }
        else if (yCoord < current->yCoord)
        {
            if (current->up == nullptr)
            {
                current->up = new Tile(xCoord, yCoord);
                return;
            }
            else
            {
                current = current->up;
            }
        }
        else if (yCoord > current->yCoord)
        {
            if (current->down == nullptr)
            {
                current->down = new Tile(xCoord, yCoord);
                return;
            }
            else
            {
                current = current->down;
            }
        }
        else
        {
            return;
        }
    }
}

Tile *Lair::getTile(int xCoord, int yCoord)
{
    if (root == nullptr)
    {
        return nullptr;
    }

    Tile *current = root;
    Tile *parent = nullptr;

    while (true)
    {
        if (xCoord < current->xCoord)
        {
            parent = current;
            current = current->left;
        }
        else if (xCoord > current->xCoord)
        {
            parent = current;
            current = current->right;
        }
        else if (yCoord < current->yCoord)
        {
            parent = current;
            current = current->up;
        }
        else if (yCoord > current->yCoord)
        {
            parent = current;
            current = current->down;
        }
        else
        {
            break;
        }
    }

    return current;
}

void Lair::removeTile(int xCoord, int yCoord)
{
    if (root == nullptr)
    {
        return;
    }

    Tile *current = root;
    Tile *parent = nullptr;

    while (true)
    {
        if (xCoord < current->xCoord)
        {
            parent = current;
            current = current->left;
        }
        else if (xCoord > current->xCoord)
        {
            parent = current;
            current = current->right;
        }
        else if (yCoord < current->yCoord)
        {
            parent = current;
            current = current->up;
        }
        else if (yCoord > current->yCoord)
        {
            parent = current;
            current = current->down;
        }
        else
        {
            break;
        }

        if (current == nullptr)
        {
            return;
        }
    }

    if (parent == nullptr)
    {
        delete root;
        root = nullptr;
    }
    else if (parent->left == current)
    {
        parent->left = nullptr;
        delete current;
    }
    else if (parent->right == current)
    {
        parent->right = nullptr;
        delete current;
    }
    else if (parent->up == current)
    {
        parent->up = nullptr;
        delete current;
    }
    else if (parent->down == current)
    {
        parent->down = nullptr;
        delete current;
    }
}

Iterator *Lair::createIterator(std::string type)
{
    if (type == "BFS")
    {
        return new BFSIterator(root);
    }
    else if (type == "DFS")
    {
        return new DFSIterator(root);
    }
    else
    {
        std::cout << "Invalid Type" << std::endl;
    }
}

Lair::~Lair()
{
    deleteTiles(root);
}

void Lair::deleteTiles(Tile *tile)
{
    if (tile == nullptr)
    {
        return;
    }

    deleteTiles(tile->left);
    deleteTiles(tile->right);
    deleteTiles(tile->up);
    deleteTiles(tile->down);

    delete tile;
}