#include "analysis.h"
#include <iostream>

std::string IAnalysis::type() const
{
    return _type;
}

double Static::multiplier() const
{
    return 1.8;
}

double Ritz::multiplier() const
{
    return 1.25;
}

double TimeHistory::multiplier() const
{
    return 1.15;
}

IAnalysis* Static::clone() const
{
    std::cout << "cloning\n\n";
    return new Static();
}

IAnalysis* Ritz::clone() const
{    
    std::cout << "cloning\n\n";
    return new Ritz();
}

IAnalysis* TimeHistory::clone() const
{    
    std::cout << "cloning\n\n";
    return new TimeHistory();
}
