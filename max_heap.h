//
// Created by 27164 on 2021/3/28.
//

#ifndef TOP_K_ALGORITHM_MAX_HEAP_H
#define TOP_K_ALGORITHM_MAX_HEAP_H


class MaxHeap {
private:
    int heap[1001]; // 方便起见第一位不使用
    int length;
    int getLeftChildIndex(int index);
    int getRightChildIndex(int index);
    void swap(int* a, int* b);
public:
    MaxHeap(const int* data, int length);
    void downProcess(int index);
    int getMax() const;
    void popMax();
    int getAndPopMax();
};


#endif //TOP_K_ALGORITHM_MAX_HEAP_H
