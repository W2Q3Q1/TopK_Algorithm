//
// Created by 27164 on 2021/3/29.
//

#ifndef TOP_K_ALGORITHM_SELECT_H
#define TOP_K_ALGORITHM_SELECT_H
#include "top_k_algorithm.h"

class Select: TopKAlgorithm{
private:
    int data[1001];
    int length;
    int get_top_k_R(int start, int end, int k); //end是末尾index
    void swap(int index_a, int index_b);
public:
    Select(const int* data, int length);
    virtual int get_top_k(int k);
};


#endif //TOP_K_ALGORITHM_SELECT_H
