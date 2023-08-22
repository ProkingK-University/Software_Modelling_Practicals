#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include "Organisation.h"

class Individual : public Organisation
{
private:
    int uniqueID;
    double costCenter;
    double costToCompany;
public:
    Individual(int uniqueID, double costCenter, double costToCompany);

    double getTotalExpenditure();
    double getExpenditureByCostCenter();
    void add(Organisation* organisation);
};

#endif