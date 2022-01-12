#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h> // 获取一个随机数
#include <time.h>   // 时间，标准库

// 文件作用域, 这里想当于就是一个全局
int global_var = 1;

// 第二种初定义的方法
/**
 * static 表太变量它有文件作用域
 */
void LocalStaticVar(void){ // void 什么都不接收

  //  static 定义的 int 没有赋值，默认值就是 0
  /**
   * static 静态变量
   *    1、作用域全局，内存不会因函数退出而销毁
   *    2、 int 初值默认为 0
   */
  static int static_var; // 什么  static 定义的，并不会随之 LocalStaticVar 的退出而销毁，它会一直存在的

  //  int non_static_var; // 什么值都不给，int 前面默认就有 auto
  /**
   * 自动变量
   *    1、函数、块作用域，随着函数和块退出而销毁
   *    2、没有默认初值，要给它赋值一个初值
   */
  auto int non_static_var = 0; // 什么值都不给，int 前面默认就有 auto

  printf("static var: %d\n", static_var++);
  printf("non static var: %d\n", non_static_var++);
}


// 函数原型作用域
double Add(double, a, double b);

// 寄存器变量
void CleanMemory() {
  int eraser = -1;

}

// 数组
//double Sort(int size, int array[size]);
//double Sort(int size, int array[global_var]);

// 寄存器变量
void PassByMemory(int parameter){
  printf("parameter: %d\n", parameter);
}

/**
 * 它生完毕之后，就会生成一个汇编指令
 * @param parameter
 *
 * 配置方法
 *  打开设置、找到 Build, Execution, 。。。
 */
void PassByRegister(register int parameter){ // 寄存器变量 register
  printf("register %d\n", parameter);
}


int main() {
  // 4-3 变量的类型和作用域【Compiler Explorer查看汇编指令】
  /**
   * 如果我们定义了一个函数，并且在当中还定义了两个变量，
   * 那么它什么时候会被销毁呢？这两个问题要考虑两方面的
   * 因素：
   *    1、这个变量是什么样的变量
   *    2、变量声明的位置。
   */

  // 变量的数据类型
  // 自动变量
  /**
   * auto 自己动变量，它的内存会自动分配。一旦退出这个做用域，它个的内存
   * 就会被销毁
   *
   * 所以这个 auto value 只有在 main 里才会被使用
   */
  auto int value = 0; // 这种叫自动变量, 可以不用在前面加 auto，因为默认就有了


  // {} 块做用域
  {
    auto int a = 0;
  }
  //  printf("%d\n", a);

  /**
   * if()else{} 这个大括号就是块做用域
   */
   /*if(value > 0) {
     int is_value_equals_0 = 0, b = is_value_equals_0;

   } else {
     global_var
   }*/


   // 调用 LocalStaticVar 方法
  LocalStaticVar();
  LocalStaticVar();
  LocalStaticVar();

  /**
   * 总结：
   *    变量类型：
   *        自动变量 auto
   *        静态变量 static
   *        寄存器变量 register
   *
   *    作用域：
   *        函数原型作用域
   *        函数作用域
   *        文件作用域
   *        块作用域
   *
   */


  return 0;
}







