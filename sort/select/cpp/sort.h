#ifndef __SORT_BUBBLE_H__
#define __SORT_BUBBLE_H__

/**
 * @brief 选择排序算法
 * @detail 双层循环，每次从当前轮选择最大的放到末尾
 * @note
     时间复杂度: O(N^2)
     空间复杂度: O(1)
     选择排序算法稳定
     <选择排序>整体性能 > <冒泡排序>整体性能
*/

extern void sort_select_v1(int arrElem[], int sizeArr )  ;
// 冒泡算法测试用例
extern bool test_select_v1() ;
extern bool test_select() ;
#endif
