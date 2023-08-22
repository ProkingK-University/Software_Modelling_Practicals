#ifndef ORGSTRUCTURE_H
#define ORGSTRUCTURE_H

#include <vector>
#include "Organisation.h"

class OrgStructure : public Organisation
{
private:
    std::vector<Organisation*> organisations;
public:
    double getTotalExpenditure();
    double getExpenditureByCostCenter();
    void add(Organisation* organisation);

    ~OrgStructure();
};

#endif