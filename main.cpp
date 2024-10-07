#include "analysis.h"
#include <iostream>


int someFunction(int& var)
{
	return var;
}


int Multiplier(IAnalysis* analysis) // cannot be called without clone
{
    return analysis->multiplier();
}

int main()
{
    const IAnalysis* const analysis = new Static;
    std::cout << Multiplier(analysis->clone()) << std::endl << std::endl;
    
    //IAnalysis* new_anal = analysis; Error!

    IAnalysis* new_anal = analysis->clone(); // ok!

    const int local = 30;
    // somefunction(local); !Error Not alloed! Since local is const.
    
    int non_const_local = local; // ok! Create copy of const, but this cannot be done
				 // if the variable is a pointer to an interface,
				 // Where we do not know the sub-class/implementation type
    someFunction(non_const_local); // ok!
    return 0;
}
