/**
 * @Author: lwj
 * @Date: 2022-05-21 20:17:06
 * @LastEditTime: 2022-05-21 20:17:07
 * @LastEditors: lwj
 * @Description:merge算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用排序算法/merge.cpp
 **/
// **功能描述：**
// * 两个容器元素合并，并存储到另一容器中
// **函数原型：**
// - `merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `

// 容器元素合并，并存储到另一容器中
// 注意: 两个容器必须是**有序的**
// beg1   容器1开始迭代器
// end1   容器1结束迭代器
// beg2   容器2开始迭代器
// end2   容器2结束迭代器
// dest    目标容器开始迭代器