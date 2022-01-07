#include <stdio.h>

int main() {
  //  printf("Hello, World!\n");

  //   for 循环
  /**
   * 如果我们在 CMakeLists.txt 这里面把 set(CMAKE_C_STANDARD 23) 这个 23 改成 90 的话
   * 以下的 循环就不支持，必须 把 int 声明到外面去
   */
   // 90 版本的写法
    /*
      int i;
      for(i = 0; i < 5; ++i){
        printf("Hello, World!\n");
      }
    */


    // 23 版本的写法, 以下是最新的写法
    for(int i = 0; i < 5; ++i){
      printf("Hello, World!\n");
    }

  /* 打印的结果
    Hello, World!
    Hello, World!
    Hello, World!
    Hello, World!
    Hello, World!
   */
  return 0;
}
