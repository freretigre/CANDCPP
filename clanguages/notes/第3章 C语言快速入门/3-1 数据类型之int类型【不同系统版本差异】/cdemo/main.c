#include <stdio.h>
#include <limits.h>

int main() {

  /**
   * 数组类型
   */

  // 定义一个整形
  /**
   * i 是一块内存，然后在里面放了一个 0
   *
   * int i = 0;
   *
   * 定义了类型，通常不用写 int 这个类型的如：
   * short int short_int = 0; 省略的写法 short short_int = 0;
   */
  // 整型
  /*short int short_int = 0; // 短的范围，不能小于 16
  int i = 0; // i 不能小于 short 整型
  long int long_int = 0; // 长整型 不能小于 i
  long long int longlong_int = 0;*/

  // 定义了类型，通常不用写 int 这个类型的如
  /**
   * short      短整型
   * int        普通整型
   * long       长整型
   * long long  更长的整型
   *
   * unsigned   无符号的类型，提示：它是可以定义的, 对应整型给它
   */
  // 整型
  short short_int = 0; // 短的范围，不能小于 16
  int i = 100; // i 不能小于 short 整型
  long long_int = 0; // 长整型 不能小于 i
  long long longlong_int = 0;
  
  // 无符号类型, 就是一个数值
  unsigned int unsigned_int = 123;
  unsigned long unsigned_long = 111;

  /**
   * d = 是 decimal(10进制)
   * x = 是 hex(16进制)
   * o = 是 oct(8进制)
   *
   * // 格式化符
   * %d:        这里的 d 代表 十进制的整数，也就是 decimal(就是十进制)
   * %ld:       代表 long 的 decimal(就是十进制)
   * %lld:      代表 long long 的 decimal(就是十进制)
   * \n:        换行符 new line
   * size_t     size_t 这个类型来接收
   * %hu:       代表 unsigned short 的 decimal(就是十进制), 所有无符号整型都换成 %hu
   *
   */

  // 用来 size_t 这个类型来接收，它在 msvc 环境当中，它是一个无符号整型的一个别名，就是定义了一个类型，起了一个别的名字而已，如源码： typedef __darwin_size_t  size_t; 如原来叫张三，现在起名叫张三丰了
  size_t size_of_int =  sizeof(int); // size_t 它代表的是一个别名，定义了一个类型起了一个别的名字：如原来叫张三，现在起名叫张三丰了

  // 打印一个十六进制：是 64
  printf("int in hex: %x\n", i);  // int in hex: 64

  // 打印八进制：是 16
  printf("int in oct: %o\n", i);

  // 打印十进制的： 是 32
  printf("short int: %d\n", sizeof(short int));           // short int:     2 个字节
  printf("int: %d\n", sizeof(int));                       // int:           4 个字节
  printf("long int: %d\n", sizeof(long int));             // long int:      8 个字节
  printf("long long: %d\n", sizeof(long long int));       // long long:     8 个字节
  printf("unsigned int: %hu\n", sizeof(unsigned int));    // unsigned int:  4 个字节
  printf("unsigned long: %hu\n", sizeof(unsigned long));  // unsigned long: 8 个字节

  printf("======================\n");

  printf("max short %hd, min %hd\n", SHRT_MAX, SHRT_MIN);                 // short      类型的最大值和最小值 max short      32767,                min -32768, 一般 %hd 换成 %d 就可以了
  printf("max int %d, min %d\n", INT_MAX, INT_MIN);                       // int        类型的最大值和最小值 max int        2147483647,           min -2147483648
  printf("max long %ld, min %ld\n", LONG_MAX, LONG_MIN);                  // long       类型的最大值和最小值 max long       9223372036854775807,  min -9223372036854775808
  printf("max long long %lld, min %lld\n", LONG_LONG_MAX, LONG_LONG_MIN); // long long  类型的最大值和最小值 max long long  9223372036854775807,  min -9223372036854775808
  printf("unsigned max int %u,unsigned min %d\n", UINT_MAX, 0);           // 无符号整型最小值是 0 // unsigned max int 4294967295,unsigned min 0


  return 0;
}