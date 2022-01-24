#include <stdio.h>

// puts 的原型
//int	 puts(const char *);

// printf 的原型太复杂了，这里只查看以下一小段
//int	 printf(const char * __restrict, ...) __printflike(1, 2);

int main(){
  // 5-1 文件包含【领略编译器宏之以小搏大】
  /**
   * <stdio.h> 就是为了 puts 的函数原型给引进来。
   *
   * 调一个函数，就是得先把它的原型给找到，要嘛就是把它引进来
   *
   * 引入头文件，就是为了使用外部的一些类型。
   *
   * 提示：如果在每一个类里都引用一个头文件，到最后输出编译后的时候，不会产生多个头文件的，
   * 不用担心的， 会自己动优化的。
   */
  puts("Hello, World");

  printf("Hello,World!!!");
  return 0;
}