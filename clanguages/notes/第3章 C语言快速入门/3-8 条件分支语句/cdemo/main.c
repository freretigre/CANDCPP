#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

int main() {
  // 3-8 条件分支语句

  // Bool 类型
  printf("============== Bool 类型 ===========");
  /**
   * Bool 类型
   * true: 1, false: 0
   * _Bool, bool, // 在 C900 里是看不到的，只有新版里才有
   *
   * _Bool 就是一个宏，它本质就是 1
   */

  _Bool is_enabled = true; // true 就是 1
  is_enabled = 10;
  printf("is_enabled 的结果是：%d\n", is_enabled);

  /*
    is_enabled 给它赋值了 10，打印结果它还是1，它就这么个作用
    其实它通过编译的手段，强制让这 is_enabled 的值只能是 1 或者是 0，
    我们用的过程呢：
    就只能 is_enabled = false;
    源码宏 true 就是1, false 就是 0
    #define bool _Bool
    #define true 1
    #define false 0
   */

  is_enabled = false;

  /**
   * C 语言它学得它这个 _Bool 这个名字，类型下划_有点丑，或者用
   * 起来不方便，所以它又定义了一个 宏 bool，所以我们平时写代码的
   * 时候也可以这么写
   * bool flag = true;
   *
   */
  // 以上的 _Bool 的写也可以写成如下
  bool is_visible = false;


  // if 语句
  printf("============== if 语句  ===========");
  /**
   * // 一个条件判断
   * if(<condition>){ // 如果 condition 这个值为 true 就执行下面的
   *    ...statement
   * } else { // 否则就执行 else 这下面的
   *    ...statement
   * }
   *
   * // 多个条件判断
   * if(<condition1>){ // 如果 condition 这个值为 true 就执行下面的
   *    ...statement
   * } else if(<condition2>){ // 否则就执行 else 这下面的
   *    ...
   * }else { // 否则就执行 else 这下面的
   *    ...statement
   * }
   */

  // 猜数字的游戏
  /*
 #define MAGIC_NUMBER 10 // 定义一个“宏”的数字
  int user_input;
  printf("Please input a number: \n");
  scanf("%d", &user_input); // &user_input
  if (user_input > MAGIC_NUMBER) {
    printf("Your number is bigger!");
  } else if (user_input < MAGIC_NUMBER) {
    printf("Your number is smaller!");
  } else {
    printf("Yes ！You got it!");
  }
  */

  // 不推荐以下的写法，容易报错 use bracket!
  /*
   if (is_enabled) {
    if (is_visible) printf("is_visible");
    else printf("is_invisible");
   }
   */


  // ?: 三元运算符
  printf("============== ?: 三元运算符  ===========\n");
  /**
   * ?: -> <expr> ? <expr1> : <expr2>
   * 为 true  返回 expr == true, expr1
   * 为 false 返回 expr == false, expr2
   */
  int is_open = is_enabled && is_visible ? 1 : 0;
  printf("is_open %d\n", is_open); // is_open 0


  // switch 语句
  printf("============== switch 语句 ===========\n");
  /**
   * switch 主要是用来是对于整数的判断
   * switch (<cond>) {
   *    case 0: {
   *        ....
   *    }
   *    break;
   *    case 1: {
   *        ....
   *    }
   *
   *    default: {
   *
   *    }
   *
   * }
   *
   */

// 例子，以下是定义宏
#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'

    int left;
    int right;

    char operator;
  printf("Please input an expression: \n");
  scanf("%d %c %d", &left, &operator, &right);

  int result;
  switch(operator){
    case ADD:
      result = left + right;
      break;
    case SUB:
      result = left - right;
      break;
    case MULTIPLY:
      result = left * right;
      break;
    case DIVIDE:
      result = left / right;
      break;
    case REM:
      result = left % right;
      break;
    default:
      printf("Unsupported operation: %c\n", operator);
      return 1;
  }

  printf("result 的结果是：%d\n", result);




  return 0;
}
