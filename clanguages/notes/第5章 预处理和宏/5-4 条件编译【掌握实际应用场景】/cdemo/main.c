#include <stdio.h>
#include <factorial.h>

// 1-条件编译 start

#ifdef __cplusplus // 为了在 C++ 还是 C 当中使用，进行判断，需要到这里进行宏的判断定义
extern "C" {
#endif
// ....
  int Add(int left, int right);
#ifdef __cplusplus

};
#endif
// 1-条件编译 end

/**
 * 1、#ifdef     如果定义了
 * 2、#ifndef    如果没有定义
 * 3、if         如果 ...
 *
 * #endif
 *
 *  #if defined(MACRO) ==>等价于  #ifdef MACRO
 *
 * @return
 */

// 第一种：需要到 CMakeLists.txt 中配置
// #define DEBUG // 如果我不想到代码当中，明确的定义出来呢，我要在编译的时候，传一个个编译的参数来控制，怎以办呢，如下操作


// 第二种：
/**
 * 我们在定一个代码，可能是给 C 代码使用，也有可能是给 C++ 中调用呢，怎么们去判断
 * 我到底是运行在 C++ 还是 C 当中呢？
 * @param message
 */
void dump(char *message){
#ifdef DEBUG  // 如果定义了 DEBUG 这个宏，就执行以下的语句，进行打印
  puts(message);
#endif

}
int main(){
  // 5-3 宏函数

  // 调用方法
  dump("main start");
  printf("Hello world!");  // Hello world!
  dump("main end");

  // 要看当前 C 语言的版本
  // printf("__STDC_VERSION__： %ld\n", __STDC_VERSION__); // __STDC_VERSION__： 201710


  // 用宏判断
#if __STDC_VERSION__ >= 201112
  puts("C11!!");
#elif __STDC_VERSION__ >= 199901
  puts("C99!!");
#else
  puts("Maybe C99!!");
#endif
  return 0;
}