#include <stdio.h>
#include <stddef.h>

int main() {
  // 3-6 运算符-1【易踩坑点】
  int first = 0;
  int second;
  int third;

  // 赋值
  printf("===========1、赋值运算符=============\n");
  /**
   * =
   */
  /**
   * 这里用到了赋值运算符 =
   */
  //  second = first;
  second = second = first;
  printf("second %d\n", second);

  // 变量定义的过程
  // = 赋值运算符
  int left, right;
  left = 2;
  right = 3;

  // 算数运算符
  printf("===========2、算数运算符=============\n");
  /**
   * +
   * -
   * *
   * /
   * %
   *
   */
  // + 加法运算符
  int sum;
  sum = left + right; // 5
  printf("sum 的和： %d\n", sum); // sum 的和： 5

  // - 减法运算符
  int diff = left - right;
  printf("sum 的差： %d\n", diff); // sum 的差： -1

  // * 乘法运算符
  int product = left * right;
  printf("sum 的积： %d\n", product); // sum 的积： 6

  // / 除法运算符
  int quotient = left / right;
  printf("sum 的商： %d\n", quotient); // sum 的商： 0
  // 想得到 3 分之 2，就换一个 浮点型来接收
  float quotient_float = left / right;
  printf("浮点型来接收: %f\n", quotient_float); // 浮点型来接收: 0.000000

  float quotient_float_correct = left * 1.F / right;
  printf("浮点型来接收: %f\n", quotient_float_correct); // 浮点型来接收: 0.666667

  // % 取余数运算符
  int remainder = left % right;
  printf("sum 的余： %d\n", remainder); // sum 的余： 2

  int quotient_1 = 100 / 30;
  printf("sum 的余： %d\n", quotient_1); // sum 的余： 3

  // 关系运算符
  printf("===========3、关系运算符=============\n");
  /**
   * >  大于
   * <  小于
   * >= 大于等于
   * <= 小于等于
   * == 判断左边和右边的它是不是相等
   * != 不相等，也就是不等于
   *
   * 在关系运算符中 就是 1 和 0 也就是 true 和 false
   * true 1 是真
   * false 0 是假
   *
   */

  printf("大于 3 > 2: %d\n", 3 > 2);          // 大于 3 > 2: 1
  printf("小于 3 < 2: %d\n", 3 < 2);          // 小于 3 < 2: 0
  printf("小于等于 3 <= 2: %d\n", 3 <= 2);     // 小于等于 3 <= 2: 0
  printf("大于等于 3 => 2: %d\n", 3 >= 2);     // 大于等于 3 => 2: 1
  printf("两个值相等 3 == 2: %d\n", 3 == 2);   // 两个值相等 3 == 2: 0
  printf("不相等 3 != 2: %d\n", 3 != 2);       // 不相等 3 != 2: 1

  /*if(first == 0){
    printf("是假");
  }else{
    printf("是真");
  }*/

  // 逻辑运算符
  printf("===========4、逻辑运算符=============\n");
  /**
   * && 与
   * || 或，只要前面第一个为真，后面不管你的结果是什么都是为 true（真），后面的也就不执行了
   *
   */
  printf("3 > 2 &&(与) 3 < 2: %d\n", 3 > 2 && 3 < 2); // 3 > 2 &&(与) 3 < 2: 0
  printf("3 > 2 ||(或) 3 < 2: %d\n", 3 > 2 || 3 < 2); // 3 > 2 ||(或) 3 < 2: 1

  // ++自增 和 --自减 运算符
  printf("===========++自增 和 --自减 运算符=============\n");
  /**
   * ++自增
   * --自减
   *
   *  自增和自减是对内存做了一个处理，只能对变量有效的
   */
  int i = 1;
  // i++ 后的自增
  int j = i++; // i++ 就是把自己的值改变一下，变成2，这就叫做后的自增
  printf("i 的值是： %d\n", i); // i 的值是： 2
  printf("j 的值是： %d\n", j); // j 的值是： 1

  // ++i 前的自增
  int k = ++i; // 这是代表我先给 i 做一个自增，然后再把它的值给 k 所以 K 就是 3
  printf("k 前的自增是：%d\n", k); // k 前的自增是：3





  return 0;
}
