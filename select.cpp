//
// Created by 27164 on 2021/3/29.
//

#include "select.h"

Select::Select( const int *data, int length) {
    this->length = length;
    for(int i=0;i<length;i++){
        this->data[i+1] = data[i];
    }
}
int Select::get_top_k_R(int start, int end, int k) {
    if(end == start){
        return data[start];
    }
    int now_i = start, now_j = end;
    while(now_i != now_j){
        while(now_i != now_j && data[now_i] >= data[now_j]){
            now_i++;
        }
        swap(now_i, now_j);
        while(now_i != now_j && data[now_i] >= data[now_j]){
            now_j--;
        }
        swap(now_i, now_j);
    }
    if(now_i == k){
        return data[k];
    }else if(now_i>k){
        return get_top_k_R(start, now_i-1, k);
    }else{
        return get_top_k_R(now_i+1, end, k);
    }
}

void Select::swap(int index_a, int index_b) {
    int c = data[index_a];
    data[index_a] = data[index_b];
    data[index_b] = c;
}

int Select::get_top_k(int k) {
    return get_top_k_R(1, length, k);
}