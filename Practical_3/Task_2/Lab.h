#ifndef LAB_H
#define LAB_H

#include <queue>

#include "Trap.h"

class Lab {
private:
    std::queue<Trap> tasks;
public:
    Lab();

    void processTasks();
    void addTask(const Trap& task);

    ~Lab();
};

#endif