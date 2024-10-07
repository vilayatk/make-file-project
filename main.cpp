#include "analysis.h"
#include <iostream>

int Multiplier(IAnalysis* analysis) // cannot be called without clone
{
    return analysis->multiplier();
}

int main()
{
    const IAnalysis* const analysis = new Static;
    std::cout << Multiplier(analysis->clone()) << std::endl << std::endl;
    
    //IAnalysis* new_anal = analysis; Error!

    IAnalysis* new_anal = analysis->clone();
    return 0;
}