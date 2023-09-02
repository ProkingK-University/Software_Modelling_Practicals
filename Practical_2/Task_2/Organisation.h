#ifndef ORGANISATION_H
#define ORGANISATION_H

class Organisation
{
public:
    virtual double getTotalExpenditure() = 0;
    virtual double getExpenditureByCostCenter() = 0;
    virtual void add(Organisation* organisation) = 0;
};

#endif