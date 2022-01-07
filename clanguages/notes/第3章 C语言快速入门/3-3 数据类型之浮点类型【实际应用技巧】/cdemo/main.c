#include <stdio.h>
#include <stddef.h>

int main() {
  // 3-3 数据类型之浮点类型【实际应用技巧】
  /**
   *
   *
   * float  是一个单精度的浮点型
   * double 是一个又精度的浮点型
   *
   * 提示：不管理是单精度和双精度它都是有一个范围的。
   */
  float  a_float = 3.14F; // 它表示只能在 6 位有效数字，它的范围在 +-10^-37 ~ 10^37
  printf("size of float: %d \n", sizeof(float)); // 查看当前编译器占了多个字节
  // size of float: 4

  double a_double = 3.14; // 可以达到 15～16
  printf("size of double: %d \n", sizeof(double));
  // size of double: 8

  // float 可以用来表示精维度
  float lat = 39.90815F;
  int lat06 = (int)(lat *1e6);      // 强制转换成整型, 们得到的 39908149
  printf("%f ", 39.908156F - lat);  // 0.000008
  printf("%d ", lat06);             // 39908149


  return 0;
}
