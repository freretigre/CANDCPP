//
// Created by singjeun on 2022/1/22.
//

#ifndef CLANGUAGES_INCLUDE_FACTORIAL_H_ // 如果没有这个宏，就使用 #define 定义定个宏
#define CLANGUAGES_INCLUDE_FACTORIAL_H_ // 定义一个默认的宏

// 间层的两个函数源型入到这里来
unsigned int Factorial(unsigned int n);

unsigned int FactorialByIteration(unsigned int n);

#endif // CLANGUAGES_INCLUDE_FACTORIAL_H_ // 如果 #ifndef 这里的宏，被定义过了，中间的所有的都不会被引入，就是一个条件编译
