#include <iostream>
#include "sort.h"

int main(int argc, char* argv[]){
    if(!test_bubble() ){
        std::cout << "test bubble failed" << std::endl ;
    } else {
        std::cout << "test bubble success" << std::endl ;   
    }
    return 0 ;
}

