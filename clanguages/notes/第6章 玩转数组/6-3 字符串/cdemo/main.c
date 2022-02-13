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
int main(){
  // 6-3 字符串
  /**
   *
   * string[12] 其实这里不用定它的固定的长，c 语言自己会动自己会推断出来的。
   * 这里为了解决 直接输出数组后是一个 乱码，这里要比原数组的长度多加一位，这才能
   * 正确显示数组字符串的结果，
   *
   *
   */
//  char string[12] = "Hello World"; // 字符数组
  char string[] = "Hello World"; // 可以不用写固定的长度，它会自动推断出来的
  for(int i = 0; i < 11;  ++i){
    PRINTS_CHAR(string[i]);
  }
  /*
  main.c:16) main : string[i]: H
  main.c:16) main : string[i]: e
  main.c:16) main : string[i]: l
  main.c:16) main : string[i]: l
  main.c:16) main : string[i]: o
  main.c:16) main : string[i]:
  main.c:16) main : string[i]: W
  main.c:16) main : string[i]: o
  main.c:16) main : string[i]: r
  main.c:16) main : string[i]: l
  main.c:16) main : string[i]: d
   */

  /**
   * short %hd
   * NULL \0
   * C语言当中，字符串和字符数组还是有区别的
   * C语言当中字符串，必须以 Null 结尾
   */
  PRINTS_STRING(string); // ) main : string: Hello World

  printf("===================\n");
  /**
   * 解决显示中文
   *
   * short %hd
   *
   * 窄字符就是
   * NULL \0
   *
   * 宽字符也是
   * NULL \0
   */
    char string_zh[] = "你好，中国";

    // 宽字符
    wchar_t ws[] = L"你好，中国";
    printf("string_zh %s \n", string_zh); // string_zh 你好，中国
    printf("ws %l \n", ws); // ws


  return 0;
}