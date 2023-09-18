#include "LairPlayground.h"

LairPlayground::LairPlayground()
{
    root = nullptr;
}

void LairPlayground::addTile(int xCoord, int yCoord)
{
    if (root == nullptr)
    {
        root = new Tile(xCoord, yCoord);
        return;
    }

    Tile *current = root;

    while (true)
    {
        if (xCoord <= current->xCoord)
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
        else if (yCoord <= current->yCoord)
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

Tile *LairPlayground::getTile(int xCoord, int yCoord)
{
    if (root == nullptr)
    {
        return nullptr;
    }

    Tile *current = root;
    Tile *parent = nullptr;

    while (true)
    {
        if (xCoord <= current->xCoord)
        {
            parent = current;
            current = current->left;
        }
        else if (xCoord > current->xCoord)
        {
            parent = current;
            current = current->right;
        }
        else if (yCoord <= current->yCoord)
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

void LairPlayground::removeTile(int xCoord, int yCoord)
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

LairIterator *LairPlayground::createIterator(std::string type)
{
    if (type == "BFS")
    {
        return new BreadthFirstIterator(root);
    }
    else if (type == "DFS")
    {
        return new DepthFirstIterator(root);
    }
    else
    {
        std::cout << "Invalid Type" << std::endl;
    }
    return nullptr;
    //TODO: NEED TO FIX
}

LairPlayground::~LairPlayground()
{
    deleteAllTiles(root);
}

void LairPlayground::deleteAllTiles(Tile *tile)
{
    if (tile == nullptr)
    {
        return;
    }

    deleteAllTiles(tile->left);
    deleteAllTiles(tile->right);
    deleteAllTiles(tile->up);
    deleteAllTiles(tile->down);

    delete tile;
}

void LairPlayground::randomlyGenerateLair()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++) {
            addTile(i, j);
        }
    }
}

void LairPlayground::displayLair()
{
    if (root == nullptr)
    {
        std::cout << "Lair is empty." << std::endl;
        return;
    }

    // Define the range of coordinates for the lair
    int minX = 0;
    int maxX = 2; // Adjust as needed
    int minY = 0;
    int maxY = 2; // Adjust as needed

    for (int y = minY; y <= maxY; y++)
    {
        for (int x = minX; x <= maxX; x++)
        {
            Tile *tile = getTile(x, y);

            if (tile != nullptr)
            {
                std::cout << "X"; // Tile is present
            }
            else
            {
                std::cout << " "; // Empty space
            }

            // Add a space to separate tiles
            std::cout << " ";
        }

        // Move to the next row
        std::cout << std::endl;
    }
}
