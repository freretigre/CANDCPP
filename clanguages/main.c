#include <stdio.h>
#include <factorial.h>

// 定义一个宏函数
/**
 * #define MAX(a, b) a > b ? a : b
 *
 * MAX(a, b) 有两个参数，a 和 b
 * a 大于 b 怎么招，就是 a 否则就是 b
 *
 * 差异，就是没有大括号
 */
//#define MAX(a, b) a > b ? a : b
#define MAX(a, b) (a) > (b) ? (a) : (b) // 加上括号才是正确定的。

/**
 * 宏 其实只允许定义单行，但是有些时候太多了，这们可以使用 \ 换行
 *
 * 定义的时候换行，编译后不会会换行的。
 *
 * 宏没有类型的概念。
 */
#define IS_HEX_CHARACTER(ch) \
((ch) >= '0' && (ch) <= '9') || \
((ch) >= 'A' && (ch) <= 'F') || \
((ch) >= 'a' && (ch) <= 'f')








// 定义了一个函数 max
int Max(int a, int b){
  return a > b ? a : b;
}
int main(){
  // 5-3 宏函数
  /**
   * 除了简单的可以替换宏常量以外呢，我们也可以定义函数，其实他仍然在预处理中对源文件
   * 实现替换，
   * 不同之处，它可以接收参数，看过来更像函数，为了便于区分，后我们所有，有参数的宏，
   * 称之宏函数。
   *
   * 宏函数 没有副作用表达式才行，什么是副作用，像这种就是 MAX(max++, 5);
   *
   * 重点：
   *    什么是副作用就是，除了返回表达式的一个值之外，
   *    还会对其它变量呀或者状态呀影响，那就叫副作用。
   */

  // 使用宏函数
  int max = MAX(1, 3);
  int max2 = MAX(1, MAX(3, 4));
//  int max3 = Max(1, 3);
  int max3 = Max(1, Max(3, 4));
  int max4 = MAX(max++, 5);

  printf("max: %d\n", max);   // max: 4
  printf("max2: %d\n", max2); // max2: 4
  printf("max3: %d\n", max3); // max3: 4
  printf("max4: %d\n", max4); // max4: 5

  // 使用多行宏函数
  printf("is A a hex character ?: %d\n", IS_HEX_CHARACTER('A')); // is A a hex character ?: 1
  return 0;
}