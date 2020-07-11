#include <iostream>
#include "sort.h"

int main(int argc, char* argv[]){
    if(!test_shell() ){
        std::cout << "test shell failed" << std::endl ;
    } else {
        std::cout << "test shell success" << std::endl ;   
    }
    return 0 ;
}

