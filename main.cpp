#include <iostream>
#include <fstream>
#include "max_heap.h"
using namespace std;
int main() {
    ifstream input("E:\\北师大\\研一\\下\\本科算法\\实验课\\2021-03-29\\input.txt");
    ifstream label("E:\\北师大\\研一\\下\\本科算法\\实验课\\2021-03-29\\label.txt");
    int data_length, top_k, data_label;
    int data[1000];
    while(input>>data_length>>top_k){
        label>>data_label;
        for(int i = 0; i < data_length; i++){
            input>>data[i];
        }
        MaxHeap max_heap(data, data_length);
        for(int i = 0; i < top_k-1; i++){
            max_heap.popMax();
        }
        if(max_heap.getMax() != data_label){
            cout<<"False";
            return 0;
        }
    }
    cout<<"True";
}
