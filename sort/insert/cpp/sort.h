#ifndef __SORT_BUBBLE_H__
#define __SORT_BUBBLE_H__

/**
 * @brief 插入排序算法
 * @detail 双层循环，内层循环为有序数组插入新元素
 * @note
     时间复杂度: O(N^2)
     空间复杂度: O(1)
     插入排序算法稳定
*/


extern void sort_insert_v1(int arrElem[], int sizeArr )  ;
// 冒泡算法测试用例
extern bool test_insert_v1() ;
extern bool test_insert() ;
#endif
