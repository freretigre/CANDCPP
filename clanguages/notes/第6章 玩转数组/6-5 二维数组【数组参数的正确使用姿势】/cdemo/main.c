#include <stdio.h>
#include <factorial.h>
#include <stdarg.h>
#include <stddef.h>

#define PRINTLNFS(format, ...) printf("("__FILE__":%d) %s : "format"\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)
#define PRINTS_INT(value) PRINTLNFS(#value": %d", value)

#define PRINTS_STRING(value) PRINTLNFS(#value": %s", value)
#define PRINTS_DOUBLE(value) PRINTLNFS(#value": %f", value)
#define PRINTS_CHAR(value) PRINTLNFS(#value": %c", value)

#define ARRAY_SIZE 5 // 定义一个宏为数组的固定的长度


/**
 * 函数的数组类型参数【C语言极致效率之源】
 * 一般的参数都很容易轻松的搞定，如果我要传一个数组呢？
 * 这些都是些非常，常见的需求，
 * 比如对数组的元素求和
 *
 * @return
 */

// 定义一个宏
#define LENGTH 10
// 数组函数的原型
int SumIntArray(int array[], int length) {
  int sum = 0;
  for(int i = 0; i < length; i++){
    sum += array[i];
  }
  return sum;
}

int main(){
  // 6-4 函数的数组类型参数【C语言极致效率之源】

  // 使用数组函数
  int array[] = {1, 4, 7, 0, 10, 33, 654, 392, 23, 43};
  PRINTS_INT(SumIntArray(array, 10));
 // main : SumIntArray(array, 10): 1167

  // 传一个更小的数数组
  int smaller_array[5] = {1,2,3,4,5};
  PRINTS_INT(SumIntArray(smaller_array, 5));
  // main : SumIntArray(smaller_array, 5): 15

  int bigger_array[15] = {3,6,4,7,0,10,33,654,6,4,7,10,33,654, 5};
  PRINTS_INT(SumIntArray(bigger_array, 15));
  // main : SumIntArray(bigger_array, 15): 1436

  return 0;
}