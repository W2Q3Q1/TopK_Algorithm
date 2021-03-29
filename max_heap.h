//
// Created by 27164 on 2021/3/28.
//

#ifndef TOP_K_ALGORITHM_MAX_HEAP_H
#define TOP_K_ALGORITHM_MAX_HEAP_H
#include "top_k_algorithm.h"

class MaxHeap: TopKAlgorithm{
private:
    int heap[1001]; // 方便起见第一位不使用
    int length;
    int getLeftChildIndex(int index);
    int getRightChildIndex(int index);
    void swap(int index_a, int index_b);
    void downProcess(int index);
    int getMax() const;
    void popMax();
public:
    MaxHeap(const int* data, int length);
    virtual int get_top_k(int k);
};


#endif //TOP_K_ALGORITHM_MAX_HEAP_H
