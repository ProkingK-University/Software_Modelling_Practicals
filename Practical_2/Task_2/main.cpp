#include <iostream>
#include "Individual.h"
#include "OrgStructure.h"

void testingSingleLeafNode();
void testingNestingComposites();
void testingNestedObjects();

int main()
{
    testingSingleLeafNode();
    testingNestingComposites();
    testingNestedObjects();

    return 0;
}

void testingSingleLeafNode()
{
    std::cout << "======================= TESTING SINGLE LEAF NODE =======================" << std::endl;

    Individual* person = new Individual(1, 100.0, 150.0);
    Organisation* organisation = person;

    double totalExpenditure = organisation->getTotalExpenditure();
    std::cout << "Organisation/Individual's Total Expenditure: $" << totalExpenditure << std::endl;

    double costCenterExpenditure = organisation->getExpenditureByCostCenter();
    std::cout << "Organisation/Individual's Expenditure by Cost Center: $" << costCenterExpenditure << std::endl;

    delete person;

    std::cout << std::endl;
}

void testingNestingComposites()
{
    std::cout << "======================= TESTING NESTED COMPOSITE NODES =======================" << std::endl;
    
    Organisation* employee1 = new Individual(1, 101, 50000);
    Organisation* employee2 = new Individual(2, 102, 60000);

    Organisation* department1 = new OrgStructure();
    Organisation* department2 = new OrgStructure();

    department1->add(employee1);
    department2->add(employee2);

    Organisation* organization = new OrgStructure();
    organization->add(department1);
    organization->add(department2);

    std::cout << "Total Expenditure: $" << organization->getTotalExpenditure() << std::endl;
    std::cout << "Expenditure by Cost Center: $" << organization->getExpenditureByCostCenter() << std::endl;

    delete organization;
    delete employee1;
    delete employee2;
    delete department1;
    delete department2;

    std::cout << std::endl;
}

void testingNestedObjects()
{
    std::cout << "======================= TESTING NESTED OBJECTS =======================" << std::endl;

    Organisation* organisation = new OrgStructure();

    Organisation* org1 = new OrgStructure();
    Organisation* org2 = new OrgStructure();
    Organisation* org3 = new OrgStructure();


    Organisation* dude1 = new Individual(1, 10.0, 100.0);
    Organisation* dude2 = new Individual(2, 20.0, 200.0);
    Organisation* dude3 = new Individual(3, 30.0, 300.0);
    Organisation* dude4 = new Individual(4, 40.0, 400.0);
    Organisation* dude5 = new Individual(5, 50.0, 500.0);
    Organisation* dude6 = new Individual(6, 60.0, 600.0);

    org1->add(dude1);
    org1->add(dude2);

    organisation->add(org1);
    organisation->add(dude3);

    org2->add(dude4);
    org3->add(dude5);
    org3->add(dude6);

    org2->add(org3);

    organisation->add(org2);

    std::cout << "Total Expenditure By CostCenter: $" << organisation->getExpenditureByCostCenter() << std::endl;
    std::cout << "Total Expenditure: $" << organisation->getTotalExpenditure() << std::endl;

    delete organisation;
    delete org1;
    delete org2;
    delete org3;
    delete dude1;
    delete dude2;
    delete dude3;
    delete dude4;
    delete dude5;
    delete dude6;

    std::cout << std::endl;
}