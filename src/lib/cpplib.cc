#include "cpplib.h"
#include "limits"
#include <iostream>
#include <vector>


// Question 7 Calculate the factorial number
unsigned long int CPPLib::CalFactorial(signed int N) {
    //Infinity 21474
    
    // Please fill up this function.
        if ( (N<0) || (N>170) ) {
            return -1; //Infinity
        }
        else if(N==0){
            return 1;
        }
        else if ((N>0) && (N<170)) {
            return(N*(CalFactorial(N-1)));
        }
        else {
            return (-2); //spaces null
        }

    return 0;
}