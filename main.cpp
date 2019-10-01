//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"
#include "Sort.h"
#include <iostream>
#include <vector>
#include <deque>
using namespace std;


int main()
{
    deque<double> array={1,5,10,15,3,4,7};
    MergeSort A;
    A.imprimir(array);
    A.mergesort(array,array.begin(),array.end()-1);
    A.imprimir(array);

}