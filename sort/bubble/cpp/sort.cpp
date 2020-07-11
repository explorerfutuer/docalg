#include "sort.h"
#include <cstdio>

// 冒泡排序算法
void sort_bubble_v1(int arrElem[], int sizeArr ) {
    int t = 0 ; // 交换变量临时空间
    for(int i = sizeArr - 1 ; i >= 0 ; --i){
        for(int j = 0 ; j < i ; ++j) {
            if(arrElem[j] > arrElem[j+1]) {
                t = arrElem[j] ;
                arrElem[j] = arrElem[j+1] ;
                arrElem[j+1] = t ;
            }
        }
    }
}

// 冒泡算法测试用例
bool test_bubble_1_v1() {
    int arrActual[] = {4,9,0,1,3,5,6,8,4} ;
    int arrExpect[] = {0,1,3,4,4,5,6,8,9} ;
    int sizeArr = sizeof(arrActual) / sizeof(arrActual[0]) ;
    sort_bubble_v1(arrActual,sizeArr) ;
    printf("use case 1:") ;
    for(int i = 0 ; i < sizeArr ; ++i){
        if(arrActual[i] != arrExpect[i]){
            printf("\nmay be sort by buble error at arrActual[%d](%d) != arrExpect[%d](%d)\n" ,
                   i,arrActual[i],i,arrExpect[i]) ;
            return false ;
        }
    }
    printf("success\n") ;
    return true ;
}
// 冒泡算法测试用例
bool test_bubble_2_v1() {
    int arrActual[] = {0,1,3,4,4,5,6,8,9} ;
    int arrExpect[] = {0,1,3,4,4,5,6,8,9} ;
    int sizeArr = sizeof(arrActual) / sizeof(arrActual[0]) ;
    sort_bubble_v1(arrActual,sizeArr) ;
    printf("use case 2:") ;
    for(int i = 0 ; i < sizeArr ; ++i){
        if(arrActual[i] != arrExpect[i]){
            printf("\nmay be sort by buble error at arrActual[%d](%d) != arrExpect[%d](%d)\n" ,
                   i,arrActual[i],i,arrExpect[i]) ;
            return false ;
        }
    }
    printf("success\n") ;
    return true ;
}

bool test_bubble() {
    return test_bubble_1_v1() && test_bubble_2_v1();
}
