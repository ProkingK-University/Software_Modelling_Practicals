#ifndef SLOWDOWNTRAPRESEARCH_H
#define SLOWDOWNTRAPRESEARCH_H

#include "ResearchLaboratory.h"

class SlowDownTrapResearch : public ResearchLaboratory
{
private:
    int countDown;
public:
    SlowDownTrapResearch(int countDown);
    ~SlowDownTrapResearch();
    void research();
    void getStatus();
};

#endif