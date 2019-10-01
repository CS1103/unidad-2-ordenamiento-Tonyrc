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
    vector<int> array2={9,8,7,6,2,1,4};
    MergeSort A;
    ShellSort B;

    A.imprimir(array);
    A.mergesort(array,array.begin(),array.end()-1);
    A.imprimir(array);

    cout<<"\n";

    B.imprimir(array2);
    B.shellsort(array2);
    B.imprimir(array2);

}