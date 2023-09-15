#ifndef RESEARCHLABORATORY_H
#define RESEARCHLABORATORY_H

#include "Trap.h"

class ResearchLaboratory {

public:
    ResearchLaboratory() {}
    virtual ~ResearchLaboratory() {}
    virtual void research() = 0;
    virtual void getStatus() = 0;
    virtual void queryGameComponent() = 0;
    virtual void updateGameComponent() = 0;
};

#endif