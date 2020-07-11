#include "sort.h"
#include <cstdio>

// 插入排序算法  -- 并未进行非法校验
// 从后向前扫描过程中寻找新值在有序数组中的位置
void sort_insert_v1(int arrElem[], int sizeArr ) {
    int newVal ;
    int j ;
    for(int i = 1 ; i < sizeArr ; ++i) {
        newVal = arrElem[i] ;
        j = i - 1 ;
        while((j >= 0)&&(arrElem[j] > newVal)) {
            arrElem[j+1] = arrElem[j] ;
            --j;
        }
        arrElem[j+1] = newVal ;
    }
}

// 插入排序测试用例
bool test_insert_1_v1() {
    int arrActual[] = {4,9,0,1,3,5,6,8,4} ;
    int arrExpect[] = {0,1,3,4,4,5,6,8,9} ;
    int sizeArr = sizeof(arrActual) / sizeof(arrActual[0]) ;
    sort_insert_v1(arrActual,sizeArr) ;
    printf("use case 1:") ;
    for(int i = 0 ; i < sizeArr ; ++i){
        if(arrActual[i] != arrExpect[i]){
            printf("\nmay be sort by insert error at arrActual[%d](%d) != arrExpect[%d](%d)\n" ,
                   i,arrActual[i],i,arrExpect[i]) ;
            return false ;
        }
    }
    printf("success\n") ;
    return true ;
}

// 插入排序测试用例
bool test_insert_2_v1() {
    int arrActual[] = {0,1,3,4,4,5,6,8,9} ;
    int arrExpect[] = {0,1,3,4,4,5,6,8,9} ;
    int sizeArr = sizeof(arrActual) / sizeof(arrActual[0]) ;
    sort_insert_v1(arrActual,sizeArr) ;
    printf("use case 2:") ;
    for(int i = 0 ; i < sizeArr ; ++i){
        if(arrActual[i] != arrExpect[i]){
            printf("\nmay be sort by insert error at arrActual[%d](%d) != arrExpect[%d](%d)\n" ,
                   i,arrActual[i],i,arrExpect[i]) ;
            return false ;
        }
    }
    printf("success\n") ;
    return true ;
}

bool test_insert() {
    return test_insert_1_v1() && test_insert_2_v1() ;
}

