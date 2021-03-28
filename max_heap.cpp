//
// Created by 27164 on 2021/3/28.
//

#include "max_heap.h"

int MaxHeap::getLeftChildIndex(int index) {
    return index*2;
}

int MaxHeap::getRightChildIndex(int index) {
    return index*2+1;
}

void MaxHeap::swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

MaxHeap::MaxHeap(const int* data, int length) {
    this->length = length;
    for(int i = 0; i < length; i++){
        this->heap[i+1] = data[i];
    }
    for(int i = length/2; i >= 0; i--){
        downProcess(i);
    }
}

void MaxHeap::downProcess(int index) {
    int left_index = getLeftChildIndex(index);
    int right_index = getRightChildIndex(index);
    if(right_index <= length){
        //有左右子节点
        if(heap[left_index] < heap[right_index]){
            if(heap[index] < heap[right_index]){
                //交换当前点和最大的子节点
                swap(&(heap[index]), &(heap[right_index]));
            }else{
                return;
            }
        }else{
            if(heap[index] < heap[left_index]){
                //交换当前点和最大的子节点
                swap(&(heap[index]), &(heap[left_index]));
            }else{
                return;
            }
        }
    }else if(left_index <= length){
        //只有左子节点
        if(heap[index] < heap[left_index]){
            //交换当前点和最大的子节点
            swap(&(heap[index]), &(heap[left_index]));
        }else{
            return;
        }
    }else{
        //没有子节点
        return;
    }
}

int MaxHeap::getMax() const {
    return heap[1];
}

void MaxHeap::popMax() {
    heap[1] = heap[length];
    length--;
    downProcess(1);
}

int MaxHeap::getAndPopMax() {
    int result = getMax();
    popMax();
    return result;
}