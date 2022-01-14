#include <stdio.h>

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


/**
 * 函数的递归【C语言实现斐波那契数列】
 * 递归 比较耗性能
 * 规则 f(n) = f(n-1) + f(n - 2)
 * 初值 f(0) = 0,f(1) = 1
 * @return
 */
 // 没有负数 就用 无符号定义
 unsigned int Fibonacci(unsigned int n){
   if(n == 1 || n ==0){
     // 返回自己
     return n; // f(0) = 0, f(1) = 1
   } else {
     return Fibonacci(n - 1) + Fibonacci(n - 2); // f(n) = f(n - 1) + f(n - 2)
   }
 }

 // C语言实现斐波那契数列
 /**
  * 递归主要是解决复杂的罗，简单的就用 for 循环迭代器
  * @param n
  * @return
  */
 unsigned int Fibonaccis(unsigned int n){
   if(n == 1 || n ==0){
     // 返回自己
     return n; // f(0) = 0, f(1) = 1
   }
   unsigned int last = 0;
   unsigned int current = 1;

   for (int i = 0; i <= n - 2 ; ++i) {
     // 记住这个数
     unsigned int temp = current;
     current += last;
     last = temp;
     
   }
   return current;
 }

 // 解决 递归较耗性能，可以使用如下 迭代器来解决
 unsigned int FactorialByIteration(unsigned int n){
   unsigned int result = 1;
   unsigned int i = n;
   for(unsigned int i = n; i > 0; --i){
     result *= i;
   }
 }

int main(){
  // 4-5 函数的递归【C语言实现斐波那契数列】

  printf("=======函数的递归=======\n");
  printf("3! : %d\n", Factorial(3));
  printf("5! : %d\n", Factorial(5));
  printf("10! : %d\n", Factorial(10));
  /*
  =======函数的递归=======
  3! : 6
  5! : 120
  10! : 3628800
   */

  printf("=======C语言实现斐波那契数列=======\n");
  printf("Fibonacci(3) : %d\n", Fibonacci(3));
  printf("Fibonacci(5) : %d\n", Fibonacci(5));
  printf("Fibonacci(10) : %d\n", Fibonacci(10));
  /*
  =======C语言实现斐波那契数列=======
  Fibonacci(3) : 2
  Fibonacci(5) : 5
  Fibonacci(10) : 55
   */

  printf("=======解决 递归较耗性能，可以使用如下 迭代器来解决=======\n");
  printf("FactorialByIteration(3) : %d\n", FactorialByIteration(3));
  printf("FactorialByIteration(5) : %d\n", FactorialByIteration(5));
  printf("FactorialByIteration(10) : %d\n", FactorialByIteration(10));
  /*
  =======C语言实现斐波那契数列=======
  Fibonacci(3) : 2
  Fibonacci(5) : 5
  Fibonacci(10) : 55
   */


  printf("=======C语言实现斐波那契数列=======\n");
  printf("Fibonaccis(3) : %d\n", Fibonaccis(3));
  printf("Fibonaccis(5) : %d\n", Fibonaccis(5));
  printf("Fibonaccis(10) : %d\n", Fibonaccis(10));
  /*
=======C语言实现斐波那契数列=======
Fibonaccis(3) : 2
Fibonaccis(5) : 5
Fibonaccis(10) : 55
   */
  return 0;
}