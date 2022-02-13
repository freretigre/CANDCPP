#include <stdio.h>
#include <factorial.h>
#include <stdarg.h>

#define PRINTLNFS(format, ...) printf("("__FILE__":%d) %s : "format"\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)
#define PRINTS_INT(value) PRINTLNFS(#value": %d", value)

#define PRINTS_DOUBLE(value) PRINTLNFS(#value": %f", value)
#define PRINTS_CHAR(value) PRINTLNFS(#value": %c", value)

#define ARRAY_SIZE 5 // 定义一个宏为数组的固定的长度
int main(){
  // 6-2 数组的边界

  // 定义一个数组
  /**
   * 前面没有加 auto 就会自动给 auto 自动类型变量
   */
  int array[ARRAY_SIZE];
  int array_with_expression[3 + 2];
  PRINTS_INT(array[0]);
  PRINTS_INT(array[5]); // 数组超出了边界

  int value = 2; // 这个是可以变的

  // C99, VLA, gcc 这些C版都支持，MSVC ERROR 不支持
  int array_size_of_value[value];

  const int  kSize = 5;
  int array_size_of_values[kSize]; // C99, VLA, gcc 这些C版都支持，MSVC ERROR 不支持



  return 0;
}