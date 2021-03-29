#include <iostream>
#include <fstream>
#include "max_heap.h"
#include "select.h"
#include "top_k_algorithm.h"
using namespace std;
int main() {
    ifstream input("E:\\repositories\\top_k_algorithm\\test_data\\input.txt");
    ifstream label("E:\\repositories\\top_k_algorithm\\test_data\\label.txt");
    int data_length, top_k, data_label;
    int data[1000];
    while(input>>data_length>>top_k){
        label>>data_label;
        for(int i = 0; i < data_length; i++){
            input>>data[i];
        }
        Select select(data, data_length);
        if(select.get_top_k(top_k) != data_label){
            cout<<"False";
            return 0;
        }
    }
    cout<<"True";
}
