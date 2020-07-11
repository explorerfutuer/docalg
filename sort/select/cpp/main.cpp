#include <iostream>
#include "sort.h"

int main(int argc, char* argv[]){
    if(!test_select() ){
        std::cout << "test select failed" << std::endl ;
    } else {
        std::cout << "test select success" << std::endl ;   
    }
    return 0 ;
}

