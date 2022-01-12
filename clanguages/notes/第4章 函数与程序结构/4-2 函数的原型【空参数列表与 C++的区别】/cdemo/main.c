#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h> // 获取一个随机数
#include <time.h>   // 时间，标准库



// C99之前，不用写 int
/*main() {
  // 4-2 函数的原型【空参数列表与 C++的区别】

  return 0;
}*/


// C99 之后要求写 int
/**
 * 在 C 语言中如果想 main() 里面一个参数都没有，就给里面加上一个 void
 * @return
 */

/*void EmptyParamList(void) { // 一个参数都不传，就在里面加一个 void, 主要是为了安全
  puts("Hello");
}*/

// 声明一个函数名
void EmptyParamList(void); // 一个参数都没有，就要传一个 void 进去

/**
 * 函数的原型：
 * 1、函数名
 * 2、函数返回值类型，如果没有写，默认为 int
 * 3、函数参数列表，参数类型，和参数的顺序，参数形参名不重要
 * @return
 */
// int Add(int left, int right); // 在这里声明函数的时候 ，int 后面的 参数名，都可以不写
int Add(int, int); // 在这里声明函数的时候 ，int 后面的 参数名，都可以不写


int main() {
  // 4-2 函数的原型【空参数列表与 C++的区别】

  // 调用 一个 EmptyParamList 方法
  EmptyParamList();
  //  EmptyParamList(1);
  //  EmptyParamList(1,0, "Hello");

  int result = Add(1, 2); // result of add : 3

  printf("result of add : %d\n", result);

  return 0;
}

void EmptyParamList(void){
  puts("Hello");
}
int Add(int x, int y){
  return x + y;
}







