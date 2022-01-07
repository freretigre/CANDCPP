#include <stdio.h>
#include <stddef.h>

int main() {
  printf("Hello, World!\n");


  /**
   * 字符集 ASCII 有 127 个
   *
   *
   */

  char a = 'a';       // 97
  char char_1 = '1';  // 49
  char char_0 = '0';  // 48

  char i = 0; // \0, NULL
//  char zhong = '中';



  char char_1_eascape_oct = '\61'; // 斜\后面加一个8进制的数，就是一个字符
  char char_1_eascape_hex = '\x31'; // 斜\后面加一个16进制的数，就是一个字符
  char newline = '\n';

  printf("char a: %d\n", a);      // char a: 97
  printf("char 1: %d\n", char_1); // char 1: 49
  printf("char 'i': %d\n", i);    // char 'i': 0

  // 查看是什么字符，进行格式化
  /**
   * 字面量
   *
   * %c  是格式化
   * \n  是 newline(换行)
   * \b  是 backspace(空格)
   * \r  是 return(返回)
   * \t  是 table(水平制表符)
   * \'  是 ' 字符字面量
   * \“  是 ' 字符串的字面量
   */
  printf("char 1: %c\n", char_1);              // char 1: 1
  printf("char 1: %c\n", char_1_eascape_oct);  // char 1: 1
  printf("char 1: %c\n", char_1_eascape_hex);  // char 1: 1


  /**
   * 中文对应的是 Unicode 码 CJK(中日韩)
   * 是C95引进来的
   *
   * C 语言中的宽字符
   *
   * wchar_t 它实际上是一个无特号的短整型：源码 typedef __WCHAR_TYPE__ wchar_t;
   */
   wchar_t zhong = L'中';
   wchar_t zhong_hex = L'\u4E2D';

   // 字符串
   char *string = "中";
  printf("中： %d\n", zhong); // 中： 20013
  printf("中： %d\n", zhong_hex); // u4E2D： 20013



  return 0;
}
