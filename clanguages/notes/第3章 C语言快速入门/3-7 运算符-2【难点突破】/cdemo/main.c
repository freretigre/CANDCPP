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


  // TODO: 3-7 运算符-2【难点突破】
  // ++自增 和 --自减 运算符
  printf("===========++自增 和 --自减 运算符=============\n");
  /**
   * bit operators & | ^ ~
   *
   * &  相同为 1 不同不为 0
   * |  有 1 为 1 全 0 为 0
   * ^  不同为 1 相同为 0
   * ～ 1 得 0 0 得 1
   *
   * 主要涉及一些开关
   * 例子：如一个开关的例子
   * 我有多个选项
   */
    #define FLAG_VISIBLE 0x1      // 2^0 定义一个宏 1 是 2 的 0 次方, 0001
    #define FLAG_TRANSPARENT 0x2  // 2^1 定义一个宏 2 是 2 的 1 次方, 0010
    #define FLAG_RESIZABLE 0x2    // 2^2 定义一个宏 2 是 2 的 2 次方, 0100
    int window_flags = FLAG_RESIZABLE | FLAG_TRANSPARENT; // 0110

    int resizable = window_flags & FLAG_RESIZABLE; // 0100
    int visible = window_flags & FLAG_VISIBLE;     // 0000
    printf("resizable: %d\n", resizable); // resizable: 2
    printf("visible: %d\n", visible); // resizable: 0



    // << 右移运算  >> 右移运算
    printf("===========+<< 右移运算  >> 右移运算============\n");
    /*
     *  << 右移运算
     *  >> 右移运算
     */
    #define FLAG_VISIBLE1 1 << 0      // 2^0 定义一个宏 1 是 2 的 0 次方, 0001
    #define FLAG_TRANSPARENT2 1 << 1  // 2^1 定义一个宏 2 是 2 的 1 次方, 0010
    #define FLAG_RESIZABLE3 1 << 2    // 2^2 定义一个宏 2 是 2 的 2 次方, 0100

   // 在写一个算法的时候，对运算的性能要求比较高的时候，在什么样的情况
    /**
     *  << 左移就是乘 2
     *  >> 右移就是除 2
     */
     int x = 1000;
     // 求 x 的 两 倍，如何求
     int x1 = x * 2;                // 用乘以 2 这是第一种求两倍
     printf("结果是 x: %d\n", x1);   // 结果是 x: 2000
     // y << 1; // 用左移 1 位，结果都是一样，位是用 << 移位的效率要高得多
     int y = 1000;
     int y1 = y << 1;               // 如果乘以 2 就向左 << 移 1 位，
     printf("结果是 y1: %d\n", y1);  // 结果是 y1: 2000

     int y2 = y >> 2;               // 如果除以 2 就向右 >> 移 1 位，
     printf("结果是 y2: %d\n", y2);  // 结果是 y2: 500

     // += -= *= /= 运算符
     printf("===========  += -= *= /= %= 更多的赋值运算符 ============\n");
     /**
      * 更多的赋值运算符
      * +=
      * -=
      * *=
      * /=
      * %=
      *
      *
      */
      int xx = 1000;
      //  xx *= 2; // 相当于 xx = xx * 2;
      //  xx /= 2; // 相当于 xx = xx / 2;
      //  xx += 2; // 相当于 xx = xx + 2;
      //  xx -= 2; // 相当于 xx = xx - 2;
      //  xx %= 2; // 相当于 xx = xx % 2;

      // TODO: 重点提示：{以上的操作都可以用 >> 位移的方式，向右移一位的}
      xx <<= 1; // 相当于 xx = xx * 2; 因为向左移一位就是乘以 2, 结果是： 2000
      xx >>= 1;   // 相当于 xx = xx / 2; 因为向右移一位就是除以 2， 结果是： 500
      printf("xx: %d\n", xx);


      // , 逗号运算符 不推荐
      printf("===========   , 逗号运算符  不推荐 ============\n")
      // xx = xx * 2, xx = xx + 3; // 这不推荐写法

  return 0;
}
