#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h> // 获取一个随机数
#include <time.h>   // 时间，标准库

int main() {
  // 3-10 案例：猜数字的游戏
  /**
   * 1、random number 需要一个随机数的数字
   *    它的取值范围是到 [0, 0x7fff] 也就是 0 到 0x7fff
   *
   *    计算机里没有真正的随机数，只是一个伪随机序列，当你调用这个
   *    随机函数 rand() 呢，第次返回的值是一模一模一样的，除非你
   *    它种一个不同的种子，有可能这个种子就是一个偏移，或者是一个随
   *    机序列的一个参数，这个种子还要保证不一样，如果你每次给他传一
   *    1 或者 2 这种，结果还是一样的。你每次获取这个 rand() 顶多
   *    就是，可能是另外的一个数，不是 1 而已，每次运行都不一样的种子
   *    所以我们就要调用这个 srand() 函数就可以了
   */
    srand(time(NULL));
    int magic_number = rand(); // 这是一个真正的随机数

   /**
    * 2、loop 需要一个循环
    */

  //#define MAGIC_NUMBER 10 // 有了 rand() 的随机数，就不要这里的宏了
  while(1){
    int user_input;

    /**
     * puts 可以直接输出一个字符串，而且它会追加一个换行符，如
     * 果我们只简单的输出，不需要格式化，就可以使用 puts
     *
     * 但是 puts 不能格式字符串
     */

    puts("Please input a number: ");

    scanf("%d", &user_input); // &user_input 取它的地址

    if(user_input > magic_number) {
      puts("Your number is bigger!");
    }else if(user_input < magic_number){
      puts("Your number is smaller!");
    }else{
      puts("Yes! You got it!");
      break;
    }
  }




  return 0;
}
