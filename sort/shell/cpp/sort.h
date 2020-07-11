#ifndef __SORT_BUBBLE_H__
#define __SORT_BUBBLE_H__

/**
 * @brief 希尔排序算法
 * @detail 多层循环嵌套，首先分组(组元素数目n->1->0)，每次分完组进行组间对应元素排序，元素移动进行间隔移动。
           基本为插入排序；进步在于减少元素移动个数。
 * @note
     时间复杂度: O(N^2)
     空间复杂度: O(1)
     插入排序算法不稳定
*/

/**
 * @brief sort_shell_v1
 * @detail 分完组之后，首先将各个组内的第1->n个元素进行排序。增加组数，减少组内元素。到最终有序
 * @note
   例如: 分组为4，组内元素为2
     1. z1[0]，z2[0]，z3[0]，z4[0]有序
     2. z1[1]，z2[1]，z3[1]，z4[1]有序
     增加分组，减少组内元素接着排序
 */
extern void sort_shell_v1(int arrElem[], int sizeArr )  ;
/**
 * @brief sort_shell_v2
 * @detail 分完组之后，对前面的组内的全部元素进行排序。
 * @note
   例如: 分组为4，组内元素为2
     1. z1和z2分组有序 
     2. z1、z2和z3分组有序
     3. 全部分组有序
     增加分组，减少组内元素接着排序
 */
extern void sort_shell_v2(int arrElem[], int sizeArr )  ;
// 冒泡算法测试用例
extern bool test_shell_v1() ;
extern bool test_shell() ;
#endif
