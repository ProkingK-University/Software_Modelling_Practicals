#ifndef ELIMINATETRAPRESEARCH_H
#define ELIMINATETRAPRESEARCH_H

#include "ResearchLaboratory.h"

class EliminateTrapResearch : public ResearchLaboratory
{
private:
    int damageDealt;
public:
    EliminateTrapResearch(int damageDealt);
    ~EliminateTrapResearch();
    void research();
    void getStatus();
};

#endif