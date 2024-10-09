#include "Employee.h"
#include <exception>

std::string Developer::Name()
{
    return "Varada";
}

std::string Developer::ReportsTo()
{
    return "David";
}

void Developer::GiveRaise()
{
    throw std::bad_exception(); // Grade 3 dev can't give raise to anyone
}

std::string Manager::Name()
{
    return "David";
}

std::string Manager::ReportsTo()
{
    return "Rob Grieg";
}

void Manager::GiveRaise()
{
    std::cout << "Provide 18.01pc raise to Varada";
}

std::string CEO::Name()
{
    return "Rob Grieg"; // Random name
}

std::string CEO::ReportsTo()
{
    throw std::bad_exception(); // LSP violation, reports to no one
}

void CEO::GiveRaise()
{
    std::cout << "Provide 4pc raise to David"; 
}
