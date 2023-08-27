#include <iostream>
#include "Individual.h"
#include "OrgStructure.h"

void testingEmptyComposite();
void testingSingleLeafNode();
void testingNestingComposites();
void testingNestedObjects();

int main()
{
    testingEmptyComposite();
    testingSingleLeafNode();
    testingNestingComposites();
    testingNestedObjects();

    return 0;
}

void testingEmptyComposite()
{
    // Create an individual
    Individual* person = new Individual(1, 100.0, 150.0);

    // Create an organization structure
    OrgStructure* orgStructure = new OrgStructure();

    // Add the individual to the organization structure
    orgStructure->add(person);

    // Calculate and display total expenditure of the individual
    double totalExpenditure = person->getTotalExpenditure();
    std::cout << "Individual's Total Expenditure: $" << totalExpenditure << std::endl;

    // Calculate and display total expenditure of the organization structure
    double totalOrgExpenditure = orgStructure->getTotalExpenditure();
    std::cout << "Organization Structure's Total Expenditure: $" << totalOrgExpenditure << std::endl;

    // Calculate and display expenditure by cost center of the individual
    double costCenterExpenditure = person->getExpenditureByCostCenter();
    std::cout << "Individual's Expenditure by Cost Center: $" << costCenterExpenditure << std::endl;

    // Calculate and display expenditure by cost center of the organization structure
    double orgCostCenterExpenditure = orgStructure->getExpenditureByCostCenter();
    std::cout << "Organization Structure's Expenditure by Cost Center: $" << orgCostCenterExpenditure << std::endl;

    // Clean up
    delete orgStructure;
    delete person;
}

void testingSingleLeafNode()
{
    // Creating an Individual
    Individual individual(1, 1000.0, 5000.0);

    // Testing the Individual's methods
    std::cout << "Individual #" << individual.getUniqueID() << ":\n";
    std::cout << "Total Expenditure: $" << individual.getTotalExpenditure() << "\n";
    std::cout << "Expenditure by Cost Center: $" << individual.getExpenditureByCostCenter() << "\n";
}

void testingNestingComposites()
{
    // Creating individual employees
    Organisation* employee1 = new Individual(1, 101, 50000);
    Organisation* employee2 = new Individual(2, 102, 60000);

    // Creating a composite structure for departments
    Organisation* department1 = new OrgStructure();
    Organisation* department2 = new OrgStructure();

    // Adding individual employees to departments
    department1->add(employee1);
    department2->add(employee2);

    // Adding departments to an overall organization structure
    Organisation* organization = new OrgStructure();
    organization->add(department1);
    organization->add(department2);

    // Calculate and print total expenditure and expenditure by cost center
    std::cout << "Total Expenditure: " << organization->getTotalExpenditure() << std::endl;
    std::cout << "Expenditure by Cost Center: " << organization->getExpenditureByCostCenter() << std::endl;

    // Clean up memory
    delete organization; // This will recursively delete all nested objects
}

void testingNestedObjects()
{
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

    std::cout << "Total Expenditure By CostCenter: " << organisation->getExpenditureByCostCenter() << std::endl;
    std::cout << "Total Expenditure: " << organisation->getTotalExpenditure() << std::endl;
}