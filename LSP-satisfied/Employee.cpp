#include "Employee.h"
#include <iostream>

std::string Developer::Name()
{
    return "Varada";
}

std::string Developer::ReportsTo()
{
    return "David";
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
    std::cout << "Give Varada 20pc raise";
}

std::string CEO::Name()
{
    return "Rob Grieg";
}

void CEO::GiveRaise()
{
    std::cout << "Give David 5pc raise";
}