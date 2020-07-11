#include "sort.h"
#include <cstdio>

// 选择排序算法 
void sort_select_v1(int arrElem[], int sizeArr ) {
    int index ; // index记录最大值索引
    int t ; // t 交换变量临时空间
    for(int i = sizeArr - 1 ; i > 0 ; --i){
        index = 0 ;
        for(int j = 1 ; j <= i ; ++j) {
            if(arrElem[j] >= arrElem[index]){
                index = j ;
            }
        }
        t = arrElem[index] ;
        arrElem[index] = arrElem[i] ;
        arrElem[i] = t ;
    }
}

// 选择排序测试用例
bool test_select_1_v1() {
    int arrActual[] = {4,9,0,1,3,5,6,8,4} ;
    int arrExpect[] = {0,1,3,4,4,5,6,8,9} ;
    int sizeArr = sizeof(arrActual) / sizeof(arrActual[0]) ;
    sort_select_v1(arrActual,sizeArr) ;
    printf("use case 1:") ;
    for(int i = 0 ; i < sizeArr ; ++i){
        if(arrActual[i] != arrExpect[i]){
            printf("\nmay be sort by select error at arrActual[%d](%d) != arrExpect[%d](%d)\n" ,
                   i,arrActual[i],i,arrExpect[i]) ;
            return false ;
        }
    }
    printf("success\n") ;
    return true ;
}

// 选择排序测试用例
bool test_select_2_v1() {
    int arrActual[] = {0,1,3,4,4,5,6,8,9} ;
    int arrExpect[] = {0,1,3,4,4,5,6,8,9} ;
    int sizeArr = sizeof(arrActual) / sizeof(arrActual[0]) ;
    sort_select_v1(arrActual,sizeArr) ;
    printf("use case 2:") ;
    for(int i = 0 ; i < sizeArr ; ++i){
        if(arrActual[i] != arrExpect[i]){
            printf("\nmay be sort by select error at arrActual[%d](%d) != arrExpect[%d](%d)\n" ,
                   i,arrActual[i],i,arrExpect[i]) ;
            return false ;
        }
    }
    printf("success\n") ;
    return true ;
}

bool test_select() {
    return test_select_1_v1() && test_select_2_v1() ;
}

