#include <iostream>
#include "Individual.h"
#include "OrgStructure.h"

void testNestedObjects();

int main()
{
    testNestedObjects();

    return 0;
}

void testNestedObjects()
{
    Organisation* organisation = new OrgStructure();

    Organisation* org1 = new OrgStructure();
    Organisation* org2 = new OrgStructure();

    Organisation* dude1 = new Individual(1, 10.0, 100.0);
    Organisation* dude2 = new Individual(2, 20.0, 200.0);
    Organisation* dude3 = new Individual(3, 30.0, 300.0);
    Organisation* dude4 = new Individual(4, 40.0, 400.0);
    Organisation* dude5 = new Individual(5, 50.0, 500.0);
    Organisation* dude6 = new Individual(6, 60.0, 600.0);

    org1->add(dude1);
    org1->add(dude2);
    org1->add(dude3);

    organisation->add(org1);
    organisation->add(dude4);

    org2->add(dude5);
    org2->add(dude6);

    organisation->add(org2);

    std::cout << organisation->getExpenditureByCostCenter() << std::endl;
    std::cout << organisation->getTotalExpenditure() << std::endl;
}