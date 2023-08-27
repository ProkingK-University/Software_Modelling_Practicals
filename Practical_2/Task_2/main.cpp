#include <iostream>
#include "Individual.h"
#include "OrgStructure.h"

void testingEmptyComposite();
void testingSingleLeafNode();
void testingNestingComposites();

int main()
{
    //testingEmptyComposite();
    //testingSingleLeafNode();
    testingNestingComposites();
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