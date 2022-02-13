#include <stdio.h>
#include <factorial.h>
#include <stdarg.h>
#include <stddef.h>
#include <io_utils.h>

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


/**
 * 在 val C99; gcc; msvc x 用以下的方式是不会报错的，其它就会报错，
 * @param rows     一维数组的长度
 * @param columns  二维数组的长度
 * @param array    数组[][传递二维数组的长度]，前成的 [] 不需要传，默认就是一维数组的
 *
 * 说明 数组的长长做为参数传传递，一定要放在 前面，不要放到后，
 * void SumIntArrays( int array[][columns], int rows, int columns){ } // 这是错误的
 * void SumIntArrays( int rows, int columns, int array[][columns]){ } // 这是正确的
 */
void SumIntArrays( int rows, int columns, int array[][columns], int result[]){
  // int result[rows]; 不要在这里面定义，一定要从外面传过来，
  for(int i = 0; i < rows; ++i){
    for(int j = 0; i < columns; ++j){
      result[i] += array[i][j];
    }
  }
}

int main(){
  // 6-5 二维数组【数组参数的正确使用姿势】


  // 定义一个数组
  /**
   * 如北京5天限号，每天限2个
   * 5 是 5 天限号
   * 2 是每天限 2 个号
   * 数组定义如下
   */
//  int vehicle_limits[5][2];
  int vehicle_limitsa[5][2] = { // 初始化数组，里面是 二维数组
      {0, 5},
      {1, 6},
      {2, 7},
      {3, 8},
      {4, 9},
  };

  // 我们也要吧修改成一维数组，并修改成二维数组，如下
  int vehicle_limits[5][2] = {0, 5,1, [1][1]=6,2, 7,3, 8,4, 9};

  // int [2] 获取长度为 2 的 一维数组, 长度是确定的
  // vehicle_limits[0];
  for(int i = 0; i < 5; ++i){  // 5 是 5 天限号
    for(int j = 0; i < 2; ++j){  // 是每天限 2 个号
      vehicle_limits[i][j] = i + j; // 先得取了一维数组，再取到二维数据
    }
  }


  /**
   * 比如一个班有 5 个人，有 4 个科目
   */
   int scores[5][4] = {
       {135, 135, 138, 277},
       {105, 134, 108, 265},
       {113, 107, 145, 232},
       {123, 99, 140, 227},
       {98, 118, 127, 242}
   };

   // 求总分
   int result[5] = {0};
  SumIntArrays(5, 4, scores, result);
  PRINT_INT_ARRAY(result, 5);

  return 0;
}