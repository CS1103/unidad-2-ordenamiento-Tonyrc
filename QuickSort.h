//
// Created by ASUS on 1/10/2019.
//

#ifndef SORTMETHODS_QUICKSORT_H
#define SORTMETHODS_QUICKSORT_H


class QuickSort {



    template<typename Container>
    void imprimir(Container &array){
        for(auto i:array){
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }

};


#endif //SORTMETHODS_QUICKSORT_H
