#include <stdio.h>
#include <stddef.h>

int main() {
  // 3-4 变量【内存地址分析
  /**
   * <type> <name>
   *
   * 初始化默认值 int float 都是 0
   */
  // int value = 3; // 赋值了一个 3
  int value;

  // <type> <name> = <initialized value>
  int value_init = 3; // 初始值 3

  value = 4;      // 重新赋值
  value_init = 5; // 重新赋值

  printf("value: %d\n", value);

  value_init = value; // 读/写

  // 可以使用 sizeof 来查看 一个类型它占据空间的大小
  printf("size of value %d\n", sizeof(value)); // size of value 4, 大小为 4 个字节

  // 取地址 &value
  printf("address of value: %x\n", &value); // address of value: b99e4948
  printf("address of value: %#x\n", &value); // address of value: 0xb1321948

  printf("==============");


  // key works
  /**
   * 标识符 identifier 可是变量的名字，也可以是函数的名字，后面会提到常量和宏的名字
   *
   * 1、a-zA-Z0-9_
   * 2、数不能在第一个
   * 3*、Google code style, a-z_a-z, person_name 符合谷歌的 code 标准
   */

  float a_float1 = 3.14F;
  float a_float2  = 3.14F;


  return 0;
}
