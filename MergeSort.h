//
// Created by ASUS on 1/10/2019.
//

#ifndef SORTMETHODS_MERGESORT_H
#define SORTMETHODS_MERGESORT_H
#include <iostream>

class MergeSort {

public:
    template<typename Container,typename iter>
    void merge(Container &array, iter inicio, iter mitad, iter final){

        Container A((mitad-inicio)+1);
        Container B(final-mitad);

        auto inic = inicio;
        auto mit = mitad+1;

        for(auto it = A.begin(); it != A.end(); it++){
            *it = *inic;
            inic++;
        }
        for(auto it = B.begin(); it != B.end(); it++){
            *it = *mit;
            mit++;
        }

        auto i=A.begin();
        auto j=B.begin();
        auto k=inicio;

        while(i != A.end() && j != B.end()){
            if(*i < *j){
                *k = *i;
                i++;
            }
            else {
                *k = *j;
                j++;
            }
            k++;
        }

        while(i != A.end()){
            *k = *i;
            i++;
            k++;
        }
        while(j != B.end()){
            *k = *j;
            j++;
            k++;
        }
    }

    template<typename Container, typename iter>
    void mergesort(Container &array,iter inicio,iter final){
        if(inicio != final){
            iter mitad = inicio + (final-inicio)/2;
            mergesort(array,inicio,mitad);
            mergesort(array,mitad+1,final);
            merge(array,inicio,mitad,final);
        }
    }

    template<typename Container>
    void imprimir(Container &array){
        for(auto i:array){
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }
};


#endif //SORTMETHODS_MERGESORT_H
