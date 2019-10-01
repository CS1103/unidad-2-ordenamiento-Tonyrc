//
// Created by ASUS on 1/10/2019.
//

#ifndef SORTMETHODS_HEAPSORT_H
#define SORTMETHODS_HEAPSORT_H


class HeapSort {

public:
    template<typename Container>
    void heap(Container &array, int size, int i)
    {
        auto it = array.begin();
        int largest = i;
        int izq = 2*i + 1;
        int der = 2*i + 2;

        if (izq < size && *(it+izq) > *(it+largest))
            largest = izq;

        if (der < size && *(it+der) > *(it+largest))
            largest = der;

        if (largest != i)
        {
            swap(*(it+i),*(it+largest));

            heap(array, size, largest);
        }
    }

    template<typename Container>
    void heapsort(Container &array)
    {
        auto it=array.begin();
        int size = array.size();
        for (int i = (size/2) - 1; i >= 0; i--)
            heap(array, size, i);

        for (int i=size-1; i>=0; i--)
        {
            swap(*(it),*(it+i));

            heap(array, i, 0);
        }
    }

    template <typename T>
    void swap(T  &e1,T  &e2){
        auto temp = e1;
        e1 = e2;
        e2 = temp;
    }

    template<typename Container>
    void imprimir(Container &array){
        for(auto i:array){
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }

};


#endif //SORTMETHODS_HEAPSORT_H
