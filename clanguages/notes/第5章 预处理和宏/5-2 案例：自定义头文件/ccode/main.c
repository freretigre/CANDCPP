#include <stdio.h>
//#include "include/factorial.h"
#include <factorial.h>
/**
 * 头文件全部都放到 include 目录下, 方便其它人去引用
 *
 * src 这个目录用来放我们的 .c 的文件, 用来实现 头文件里的方法
 *
 * <stdio.h> 使用尖括号的方引入头文件，是区分来自哪里，一般第三方法，和系统的
 * "factorial.h" 使用区分是来自于自己，
 * 不过所有的都可以使用 "" 的方式来引入，不过这样会对系统的开销太大，性能不好。使用 <>
 * 的文莱性能更好。这就是<>它的好处
 *
 * .h 头文件用来导出函数原型
 * .c 源文件用来提供实现函数的原型，就是这么回事
 *
 * @return
 */
int main(){
  // 5-2 案例：自定义头文件
  printf("3! = %d\n", Factorial(3)); // 3! = 6
  return 0;
}