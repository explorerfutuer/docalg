#include <iostream>
#include "sort.h"

int main(int argc, char* argv[]){
    if(!test_insert() ){
        std::cout << "test insert failed" << std::endl ;
    } else {
        std::cout << "test insert success" << std::endl ;   
    }
    return 0 ;
}

