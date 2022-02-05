//
// Created by singjeun on 2022/1/22.
//

// 自己创建的只能路径的方式修改，如果工程创建的，就可以用 <> 尖括号引入的。
#include "../include//factorial.h"

// 实现 Factorial 和 FactorialByIteration 的原型
// 无符号的定义方法
/**
 * 递归方法，就是自己调用自己
 * @param n
 * @return
 */
unsigned int Factorial(unsigned int n){
  if(n == 0){
    return 1;
  }else{
    return n * Factorial(n - 1); // f(n) = nf(n - 1);
  }
}

// 解决 递归较耗性能，可以使用如下 迭代器来解决
unsigned int FactorialByIteration(unsigned int n){
  unsigned int result = 1;
  unsigned int i = n;
  for(unsigned int i = n; i > 0; --i){
    result *= i;
  }
}