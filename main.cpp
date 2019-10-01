//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"
#include "Sort.h"
#include <iostream>
#include <vector>
#include <deque>
using namespace std;


int main()
{
    deque<int> array={1,5,10,15,3,4,7};
    vector<int> array2={9,8,7,6,2,1,4};
    vector<int> array3={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    deque<int> array4={19,17,15,12,14,8,4,7,2,1};
    MergeSort A;
    ShellSort B;
    QuickSort C;
    HeapSort D;

    A.imprimir(array);
    A.mergesort(array,array.begin(),array.end()-1);
    A.imprimir(array);

    cout<<"\n";

    B.imprimir(array2);
    B.shellsort(array2);
    B.imprimir(array2);

    cout<<"\n";

    C.imprimir(array3);
    C.quicksort(array3,array3.begin(),array3.end()-1);
    C.imprimir(array3);

    cout<<"\n";

    D.imprimir(array4);
    D.heapsort(array4);
    D.imprimir(array4);

}