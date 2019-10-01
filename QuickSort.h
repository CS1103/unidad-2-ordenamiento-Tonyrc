//
// Created by ASUS on 1/10/2019.
//

#ifndef SORTMETHODS_QUICKSORT_H
#define SORTMETHODS_QUICKSORT_H


class QuickSort {

public:
    template<typename iter>
    iter partition(iter izq,iter der)
    {
        auto i=izq-1;

        auto it=izq;

        while(it<der)
        {
            if(*it<=*der)
            {
                i++;
                swap(*i,*it);
            }
            it++;
        }

        swap(*(i+1),*der);
        i=i+1;
        return i;
    }

    template<typename Container, typename iter>
    void quicksort(Container& array,iter izq, iter der)
    {
        if(izq < der)
        {
            iter p=partition(izq,der);
            quicksort(array,izq,p-1);
            quicksort(array,p+1,der);
        }
    }

    template<typename Container>
    void imprimir(Container &array){
        for(auto i:array){
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }

    template <typename T>
    void swap(T  &e1,T  &e2){
        auto temp = e1;
        e1 = e2;
        e2 = temp;
    }

};


#endif //SORTMETHODS_QUICKSORT_H
