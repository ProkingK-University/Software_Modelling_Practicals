#ifndef TELEPORTTRAPRESEARCH_H
#define TELEPORTTRAPRESEARCH_H

#include "ResearchLaboratory.h"

class TeleportTrapResearch : public ResearchLaboratory
{
private:
    int xCoord;
    int yCoord;
public:
    TeleportTrapResearch(int xCoord, int yCoord);
    ~TeleportTrapResearch();
    void research();
    void getStatus();
};

#endif