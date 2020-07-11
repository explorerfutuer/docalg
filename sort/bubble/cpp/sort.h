#ifndef __SORT_BUBBLE_H__
#define __SORT_BUBBLE_H__

/** 
 * @brief 冒泡排序算法
 * @detail 双层循环，内层每次循环将最大元素放到末尾
 * @ note:
    时间复杂度: O(N^2)
    空间复杂度: O(1)    // 临时交换额外空间
    稳定排序算法性
*/
extern void sort_bubble_v1(int arrElem[], int sizeArr )  ;
// 冒泡算法测试用例
extern bool test_bubble_v1() ;
extern bool test_bubble() ;
#endif
