#include <stdio.h>
#include <factorial.h>
#include <stdarg.h>
#include <stddef.h>
#include <io_utils.h>
#include <stdlib.h>
#include <time.h>

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


// 交换数组的元素
void SwapElements(int array[], int first, int second) {
  // 开廦一个临时存储空间,存储一下
  int temp = array[first];

  // 把最后一步做数据交换
  array[first] = array[second];
  // 这样就把数据位置，就完成了
  array[second] = temp;

}
// 打乱数组的顺序 方法
void ShuffleArray(int array[], int length){

  // 实现乱序，这时就需要一个随机数，是需要一个库为 stdlib.h, 还要种一个种子进去，还要导入一个 time.h 的库进来
  srand(time(NULL)); // 先种一个种子，以免拿到的每一次结果都是一样的, 要把这个 time 传进去 srand() 的方法，返回的值，就是一个整数
  // 这样就可以拿到一个随机数
  for(int i = 0; i < length; ++i){
    int random_number = rand() % length;
    SwapElements(array, i, random_number);

    // 4:37 分
  }
}


#define PLAYER_COUNT 50 // 数组长度的宏

int main(){
  // 6-6 案例：打乱数组的顺序【各种场景应用】

  int players[PLAYER_COUNT]; // 初始化数组值和长度
  for(int i = 0; i < 49; ++i){
    players[i] = i;
  }

  PRINT_ARRAY(players, PLAYER_COUNT);

  ShuffleArray(players, PLAYER_COUNT);

  return 0;
}