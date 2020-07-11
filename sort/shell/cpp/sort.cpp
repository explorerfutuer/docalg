#include "sort.h"
#include <cstdio>

// sort_shell_v1
void sort_shell_v1(int arrElem[], int sizeArr ) {
    int newVal ;
    int grpStep = 0 ; // 组内元素个数
    int j ;
    for(int grpStep = sizeArr/2 ; grpStep > 0 ; grpStep=grpStep/2) {  // 分组
        for(int i = 0 ; i < grpStep ; ++i) { // 组内元素遍历
            for(int k = i + grpStep ; k < sizeArr ; k=k + grpStep) { // 组间对应元素排序
                newVal = arrElem[k] ;
                j = k - grpStep ;
                while((j >= 0)&&(arrElem[j] > newVal)) {
                    arrElem[j+grpStep] = arrElem[j] ;
                    j = j - grpStep ;
                }
                arrElem[j + grpStep] = newVal ;
            }
        }
    }
}


// sort_shell_v2
void sort_shell_v2(int arrElem[], int sizeArr ) {
    int newVal ;
    int grpStep = 0 ; // 组内元素个数
    int j ;
    for(int grpStep = sizeArr/2 ; grpStep > 0 ; grpStep=grpStep/2) {  // 分组
        for(int i = grpStep ; i < sizeArr ; ++i) { // 组内元素遍历
            newVal = arrElem[i] ;
            j = i - grpStep ;
            while((j >= 0)&&(arrElem[j] > newVal)) {
                arrElem[j+grpStep] = arrElem[j] ;
                j = j - grpStep ;
            }
            arrElem[j + grpStep] = newVal ;
        }
    }
}

// 希尔排序测试用例
bool test_shell_1_v1() {
    int arrActual[] = {4,9,0,1,3,5,6,8,4} ;
    int arrExpect[] = {0,1,3,4,4,5,6,8,9} ;
    int sizeArr = sizeof(arrActual) / sizeof(arrActual[0]) ;
    sort_shell_v1(arrActual,sizeArr) ;
    printf("use case 1:") ;
    for(int i = 0 ; i < sizeArr ; ++i){
        if(arrActual[i] != arrExpect[i]){
            printf("\nmay be sort by shell_v1 error at arrActual[%d](%d) != arrExpect[%d](%d)\n" ,
                   i,arrActual[i],i,arrExpect[i]) ;
            return false ;
        }
    }
    printf("success\n") ;
    return true ;
}

// 希尔排序测试用例
bool test_shell_2_v1() {
    int arrActual[] = {0,1,3,4,4,5,6,8,9} ;
    int arrExpect[] = {0,1,3,4,4,5,6,8,9} ;
    int sizeArr = sizeof(arrActual) / sizeof(arrActual[0]) ;
    sort_shell_v1(arrActual,sizeArr) ;
    printf("use case 2:") ;
    for(int i = 0 ; i < sizeArr ; ++i){
        if(arrActual[i] != arrExpect[i]){
            printf("\nmay be sort by shell_v1 error at arrActual[%d](%d) != arrExpect[%d](%d)\n" ,
                   i,arrActual[i],i,arrExpect[i]) ;
            return false ;
        }
    }
    printf("success\n") ;
    return true ;
}

// 希尔排序测试用例
bool test_shell_1_v2() {
    int arrActual[] = {4,9,0,1,3,5,6,8,4} ;
    int arrExpect[] = {0,1,3,4,4,5,6,8,9} ;
    int sizeArr = sizeof(arrActual) / sizeof(arrActual[0]) ;
    sort_shell_v2(arrActual,sizeArr) ;
    printf("use case 1:") ;
    for(int i = 0 ; i < sizeArr ; ++i){
        if(arrActual[i] != arrExpect[i]){
            printf("\nmay be sort by shell_v2 error at arrActual[%d](%d) != arrExpect[%d](%d)\n" ,
                   i,arrActual[i],i,arrExpect[i]) ;
            return false ;
        }
    }
    printf("success\n") ;
    return true ;
}

// 希尔排序测试用例
bool test_shell_2_v2() {
    int arrActual[] = {0,1,3,4,4,5,6,8,9} ;
    int arrExpect[] = {0,1,3,4,4,5,6,8,9} ;
    int sizeArr = sizeof(arrActual) / sizeof(arrActual[0]) ;
    sort_shell_v2(arrActual,sizeArr) ;
    printf("use case 2:") ;
    for(int i = 0 ; i < sizeArr ; ++i){
        if(arrActual[i] != arrExpect[i]){
            printf("\nmay be sort by shell_v2 error at arrActual[%d](%d) != arrExpect[%d](%d)\n" ,
                   i,arrActual[i],i,arrExpect[i]) ;
            return false ;
        }
    }
    printf("success\n") ;
    return true ;
}


bool test_shell() {
    return test_shell_1_v1() &&
        test_shell_2_v1() &&
        test_shell_1_v2() &&
        test_shell_2_v2() ;
}

