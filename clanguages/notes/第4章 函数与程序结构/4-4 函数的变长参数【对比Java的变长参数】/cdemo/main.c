#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h> // 获取一个随机数
#include <time.h>   // 时间，标准库
#include <stdarg.h> // 变长参数的库

// 定义一个自己的变长参数
void HandleVarargs(int arg_count, ...){
  /**
   * 如果迭代，我们需要用 va_start 告诉，从哪里开始 args
   *    args 就是从哪里开始，我们从 arg_count 开始
   *
   *    ... 这三个点要存到什么地方，首先要找到 arg_count 这个参数，然后把
   *    arg_count 的位置让出去，然后变成 ... 的参数的位置了。
   */
  /**
   *
   * 是先找到 arg_count,  然后再把它的位置让出去，最后就是...
   */
  // TODO: 1、定义 va_list 用于获取我们变长参数
  va_list args; // va_list 这就是变长参数，变长参数就是很多个嘛，列表 所以叫 va_list
  //  int i; // 想办法去迭代它这个变长参数

  /**
   * va_start  是告诉，从哪里开始 args
   * args 就是从哪里开始，我们从 arg_count 开始
   * 所以就要把上面的 arg_count 传进来。
   */

  // TODO: 2、开始遍历
  va_start(args, arg_count);
  // 遍历
  for(int i = 0; i < arg_count; ++i){
    // TODO: 取出对应的参数，va_arg 就是对应的va_list, 加上参数的 type 类型
    int arg = va_arg(args, int); // 拿到这个参数, 后面还要清空
    printf("%d\n", i, arg);
  }

  // TODO: 结束遍历（清空）
  va_end(args);
}

int main() {
  // 4-4 函数的变长参数【对比Java的变长参数】
  /**
   * 变长参数
   *
   */

  // 调用变长参建的方法
  HandleVarargs(4, 1, 2, 4, 5);
  /*
    0
    1
    2
    3
   */

  vswprint();


  return 0;
}

// java 的变长参数
/**
 Java 变长参数
 */
/*package com.bennyhuo.test;

public class Varargs {
  public static void main(String ...args){
    for(int i = 0; i < args.length; i++>){
      System.out.println(args[i]);
    }
  }
}*/







