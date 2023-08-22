#include "Individual.h"

Individual::Individual(int uniqueID, double costCenter, double costToCompany)
{
    this->uniqueID = uniqueID;
    this->costCenter = costCenter;
    this->costToCompany = costToCompany;
}

double Individual::getTotalExpenditure()
{
    return costToCompany;
}

double Individual::getExpenditureByCostCenter()
{
    return costCenter;
}

void Individual::add(Organisation* organisation)
{
    
}