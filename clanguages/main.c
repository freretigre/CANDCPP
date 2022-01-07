#include <stdio.h>
#include <stddef.h>

/**
 * 宏的定义方法
 *
 * #define 和 #include 是一个东西，在C语言当中有一个预处理的过程，
 * 会什么招呢？会用 这个 0xFF0000 这个数或者它的表达式也行，去替换，
 * 你去定义的 COLOR_RED 这个标识符
 *
 * 注意：定义宏的时候，后面不能有 ; 分号，这是标准，不然会报错的
 *
 */

#define COLOR_RED 0xFF0000    // 定义一个红色 COLOR_RED 的宏，值定义为 0xFF0000
#define COLOR_GREEN 0x00FF00  // 定义一个绿色 COLOR_GREEN 的宏
#define COLOR_BLUE 0x000FF0   // 定义一个蓝色 COLOR_BLUE 的宏

int main() {
  // 3-5 常量【常量修改秘笈】
  /**
   * 常量就是不变的量
   *
   */

  // 定义一个常量
  /**
   * const 就是定义常量
   */
  const int kRed = 0xFF0000;
  const int kGreen = 0x00FF00;
  const int kBlue = 0x00FF;

  printf("kRed: %d\n", kRed); // kRed: 16711680

  // const 只能是只可读变量, 只是没有写权限而已
  // kRed = 12; // 编译器告诉它不能修改了

  // 定义一个指针
//  int *p_k_red = &kRed; // 取一个kRed地址
  /**
   * 强制的修改
   */
//  *p_k_red = 0;
  printf("kRed: %d\n", kRed); // kRed: 16711680

  /**
   * 真正的 const 常量，就是没有办法修改了，一定没办法修改了
   *
   * c 语言中有一个非常厉害的东西叫做 “宏”
   *
   */



   // 使用“宏”
   /**
    * macro 就是宏的意思
    *  micro 就是巨硬
    *
    * 宏是不可以赋值，
    * 我们要知道 宏 在编译的时候，会做一个替换工作，
    * 替换之后就没有了，看到的只有这个值
    *
    * #include 也是宏
    */
    // 打印一个这个宏
    printf("COLOR_RED: %d\n", COLOR_RED);   //  打印 红色的 宏
    printf("COLOR_RED: %d\n", COLOR_GREEN); //  打印 绿色的 宏
    printf("COLOR_RED: %d\n", COLOR_BLUE);  //  打印 蓝色的 宏
    /*
    COLOR_RED: 16711680
    COLOR_RED: 65280
    COLOR_RED: 4080
     */

    // 取消宏
    /**
     * 可以在任何地方去取消指定的宏
     * 取消宏，没有了，也就是说从来没有听说过有这个宏
     */
    //  #undef COLOR_RED
    //  #undef COLOR_GREEN
    //  #undef COLOR_BLUE

    // 下面提示就没有了
    //  printf("COLOR_RED: %d\n", COLOR_RED);   //  打印 红色的 宏
    //  printf("COLOR_RED: %d\n", COLOR_GREEN); //  打印 绿色的 宏
    //  printf("COLOR_RED: %d\n", COLOR_BLUE);  //  打印 蓝色的 宏

    /**
     *
     * 常量(只读变量)：const
     *      // 定义常量
     *      const int kRed = 0xFF0000;
     *
     *
     * 宏: #define
     *      // 定义宏
     *      #define 名字 值
     *      如：#define COLOR_RED 0xFF0000
     *
     *      // 取消宏
     *      #undef 名字
     *      如：#undef COLOR_RED
     *
     * 提示：除了宏和只读变量之外还有一个叫字面量就是 literal，
     *
     * 重点：宏也不过是字面量的（常量）的一个马甲，在预处理之后呢替换成常量
     * 真正的常量就是字面量：
     *
     * 字面量：literal  面 literal 就是字面量
     *
     *
     */

    // 定面量
    /**
     * 以下的才叫真正的常量，常量不变的量，一如即往的不变的，立场很坚定，从来不会改变自己的做法，
     * 是不会变的
     */
    /*
    // 以下的就是字面值，代码当中不出现下面的字面值
    3;

    // 无符号常量
    3u;

    // 长整型常量
    3l;

    // 浮点型
    3.F; // float
    3.9; // double

    // 字符
    'c';

    // 字符串
    "cs";

    // 宽字符
    L'中';

    // 宽字符串
    L"中国";
     */


    /**
     * 编程的时候不要使用 硬编码
     * 什么叫硬编码就是：hard code
     *    就是把一些有意义的一些值呢，代码当中 用数，和字面量来表示，比如：
     *    我定义一个背景色：
     *    int background_color = 0x00FF00; // 这种就是硬编码，不要在代码当出现字面值
     */
     // int background_color = 0x00FF00;  // 这是硬编码，不正确的
     int background_color = COLOR_RED;    // 正确的定义，定义一个宏


  return 0;
}
