#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h> // 获取一个随机数
#include <time.h>   // 时间，标准库


// 在前面定义一个别的函数
double F(double x){ // 这里的 x 只是一个形参，也就量个代号，真正的参数是在调用那里传过来的值
  return x * x + x + 1;
}

double G(double x, double y, double z){ // 这里的参数叫形参
  return x * x + y * y + z * z;
}

int main() {
  // 4-1 函数基础【tips：Google命名规范】
  /**
   * <return> <name> (<parameters>) {
   *    ...statement
   *    return <return value>;
   * }
   */

  // 这个 puts 就是一个函数
  puts("HelloWorld");

  // 调用函数传参
  double result_f = F(2.0); // 真正的参数，这叫实参
  double result_g = G(3.0, 4.0, 5.0);
  // double result_h = h(); // 这里提示 h 的函数还没有定义，所以不能在后面定义函数

  // 打印结果
  printf("result_f of f: %F\n", result_f);  // result_f of F: 7.000000
  printf("result_f of G: %F\n", result_g);  // result_f of G: 50.000000


  // TODO: 使用 google 命名要求，
  /**
   * 选择 右上角 第一个感叹号提示的，鼠标移上去，选择 ... Configure In...,
   * 然后打开，找到  C/C++ 选择，General 再选择 Inconsistent Naming 打上勾，
   * 就可以了，然后你回来看代码函数就有提示波浪线，要求第一个要求是大写的
   */

   // Add 加法的函数
   // Sum 求和
   // 。。。



  return 0;
}

// 在后面定义一个函数，
/**
 * 如果在 init main(){} 这个主函数 的后面定义的函数，
 * 在 main(){} 这个方法里面去调用，就会报错，提示你没
 * 有定义这个 h 的函数方法，所以不能在后面定义函数，只
 * 能在前面定义函数
 * @param x
 * @return
 */
/*double h(double x){
  return x;
}*/



