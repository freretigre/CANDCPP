#include <stdio.h>
#include <factorial.h>
#include <stdarg.h>

#define PRINTLNFS(format, ...) printf("("__FILE__":%d) %s : "format"\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)
#define PRINTS_INT(value) PRINTLNFS(#value": %d", value)

#define PRINTS_DOUBLE(value) PRINTLNFS(#value": %f", value)
#define PRINTS_CHAR(value) PRINTLNFS(#value": %c", value)

#define ARRAY_SIZE 10 // 定义一个宏为数组的固定的长度
int main(){
  // 6-1 数组基础【C语言设计哲学】
  // auto 自动数组
  auto int array[ARRAY_SIZE]; // 定义一个 int 类型的数组，初始化长度

  for(int i = 0; i < ARRAY_SIZE; ++i){
    array[i] = i;
    PRINTS_INT(array[i]);
  }

  /*
  main.c:16) main : array[i]: 0
  main.c:16) main : array[i]: 1
  main.c:16) main : array[i]: 2
  main.c:16) main : array[i]: 3
  main.c:16) main : array[i]: 4
  main.c:16) main : array[i]: 5
  main.c:16) main : array[i]: 6
  main.c:16) main : array[i]: 7
  main.c:16) main : array[i]: 8
  main.c:16) main : array[i]: 9
   */

  printf("===============================\n");

  // 定义一个数组
  int array_2[ARRAY_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7,8 ,9};
  for(int i = 0; i < ARRAY_SIZE; ++i){
    PRINTS_INT(array_2[i]);
  }
  /*
  main.c:24) main : array_2[i]: 0
  main.c:24) main : array_2[i]: 1
  main.c:24) main : array_2[i]: 2
  main.c:24) main : array_2[i]: 3
  main.c:24) main : array_2[i]: 4
  main.c:24) main : array_2[i]: 5
  main.c:24) main : array_2[i]: 6
  main.c:24) main : array_2[i]: 7
  main.c:24) main : array_2[i]: 8
  main.c:24) main : array_2[i]: 9
   */

  printf("===============================\n");
  // 定义个 double
  /**
   * 如果我们定义了一个数组长度为5，
   * 但是我们里面的数据，并没有 5个，只有 2 个，
   * 这时我们在循环打印的时，它会默认后面3个补一个0
   */
  double array_double[5] = {0.1, 2.3};
  for (int i = 0; i < 5; ++i){
    PRINTS_DOUBLE(array_double[i]);
  }
  /*
  main.c:62) main : array_double[i]: 0.100000
  main.c:62) main : array_double[i]: 2.300000
  main.c:62) main : array_double[i]: 0.000000
  main.c:62) main : array_double[i]: 0.000000
  main.c:62) main : array_double[i]: 0.000000
   */


  printf("===============================\n");
  /**
   * 初始化，我们这里把 第 2 个进行初始化修改了成了 o
   * 那么我们在打印结果的时候，这里 第 0 个，没有增加数据
   * 就是 null
   */
  char array_char[5] = {[2] = 'o', 'l', 'l'};
  for(int i = i; i < 5; ++i){
    PRINTS_CHAR(array_char[i]);
  }
  /*
  main.c:77) main : array_char[i]:  
  main.c:77) main : array_char[i]: o
  main.c:77) main : array_char[i]: l
  main.c:77) main : array_char[i]: l
   */



  return 0;
}