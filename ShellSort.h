//
// Created by ASUS on 1/10/2019.
//

#ifndef SORTMETHODS_SHELLSORT_H
#define SORTMETHODS_SHELLSORT_H


class ShellSort {

public:
    template <typename Container>
    void shellsort(Container &array) {
        int size=array.end()-array.begin();
        for(int i = size/2; i > 0; i/=2){
            for (int j = i; j < size; j++) {
                for (int k = j-i; k >= 0; k -= i) {
                    if(*(array.begin()+k+i) >= *(array.begin()+k))
                           break;
                    else{
                        swap(*(array.begin()+k),*(array.begin()+k+i));
                    }
                }
            }
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


#endif //SORTMETHODS_SHELLSORT_H
