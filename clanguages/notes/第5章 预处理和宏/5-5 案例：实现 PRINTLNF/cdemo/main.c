#include <stdio.h>
#include <factorial.h>
#include <stdarg.h>  // ... 要想变成参数一就要引用一个这个 库 ...

/**
 * 每一次打印都要使用一个换行符，有没有其它的方法呢，如下所示
 *
 * puts 不能格式化变量，是不行的
 * @return
 */

// 1、使用函数的方式： 定义一个函数，来解决换行符
void Printlnf(const char* format, ...){
  va_list args; // 定义一个 args
  va_start(args, format); // 读取参数，表示我从 format 之后
  vprintf(format, args); // 把变成参数... 传到 printf 里面
  printf("\n");
  va_end(args);  // 变成参数，读取完了
}

// 2、使用宏的方式： 定义一个函数，来解决换行符
/**
 * "Hello ""world" ==>等价于 "Hello world"
 * 如上的写法如：format"\n"
 *
 * #define PRINTLNF(format, ...) 定义一个宏函数
 * printf(format) 再调用 printf() 这个方法，然后把 format 传进去
 */
//#define PRINTLNF(format, ...) printf(format"\n", __VA_ARGS__) // 用 __VA_ARGS__ 来获取...变长参数
#define PRINTLNF(format, ...) printf(format"\n", ##__VA_ARGS__) // 加两个 ## GCC 就可以去掉逗号


// 3、我想实现 调用一个宏函数，PRINT_INT(value) 就打印 value:2
/**
 * PRINTLNF(#value": %d", value)
 *
 * #value 参数名会打印出来
 * %d 是格式化
 * value 是参数
 * 如： PRINT_INT(3 + 4); // 3+4: 7
 */
#define PRINT_INT(value) PRINTLNF(#value": %d", value) // 传入 #value 就会把这个 value 字符串打印出来，

// 4、要在打印的时间，把 所在的文件，所在的函数，行号都打印出来，使用强大的宏
/**
 * __FILE__ 所在的文件
 * __LINE__ 所在的代码行号
 * __FUNCTION__ 所在的函数，在编译的时候才有
 * 我们要打印
 * (../main.c:10) main:
 * ../main.c 路径
 * c:10 行号
 * main： 函数
 */
#define PRINTLNFS(format, ...) printf("("__FILE__":%d) %s : "format"\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)
#define PRINTS_INT(value) PRINTLNFS(#value": %d", value)

int main(){
  // 5-5 案例：实现 PRINTLNF
  int value = 2;

  Printlnf("1--使用函数的方式-Hello world! %d ", value); // 1--使用函数的方式-Hello world! 2
  PRINTLNF("2--使用宏的方式-Hello world! %d ", value); // 2--使用宏的方式-Hello world! 2

  PRINTLNF("2--使用宏的方式-Hello world! "); // 2--使用宏的方式-Hello world!

  // 我想实现 调用一个宏函数，PRINT_INT(value) 就打印 value:2
  PRINT_INT(value); // value: 2

  int x = 3;
  PRINT_INT(x); // x: 3

  PRINT_INT(3 + 4); // 3+4: 7


  // 4、要在打印的时间，把 所在的文件，所在的函数，行号都打印出来，使用强大的宏
  PRINTS_INT(x); // (/Users/singjeun/FileRelated/Codes/candcppkit/clanguages/main.c:77) main : x: 3


  return 0;
}