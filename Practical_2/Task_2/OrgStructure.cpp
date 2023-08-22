#include "OrgStructure.h"

double OrgStructure::getTotalExpenditure()
{
    double total = 0;

    for (int i = 0; i < organisations.size(); i++)
    {
        total += organisations[i]->getTotalExpenditure();
    }

    return total;
}

double OrgStructure::getExpenditureByCostCenter()
{
    double total = 0;

    for (int i = 0; i < organisations.size(); i++)
    {
        total += organisations[i]->getExpenditureByCostCenter();
    }

    return total;
}

void OrgStructure::add(Organisation* organisation)
{
    organisations.push_back(organisation);
}

OrgStructure::~OrgStructure()
{
    organisations.clear();
}