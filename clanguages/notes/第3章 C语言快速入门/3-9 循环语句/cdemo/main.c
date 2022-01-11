#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

int main() {
  // 3-9 循环语句
  printf("=================== 1、循环 while ============= \n");
  /**
   * while 是一开始就看条件
   * while (<condition>) { // 只要 condition 成立，里的程序一直会执行
   *
   * }
   */

  // 例子，以下是定义宏
/*#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'

  int left;
  int right;

  char operator;

  char command = 'y';

  while (command != 'q') {

    printf("Please input an expression: \n");
    scanf("%d %c %d", &left, &operator, &right);

    int result;
    switch (operator) {
      case ADD:result = left + right;
        break;
      case SUB:result = left - right;
        break;
      case MULTIPLY:result = left * right;
        break;
      case DIVIDE:result = left / right;
        break;
      case REM:result = left % right;
        break;
      default:printf("Unsupported operation: %c\n", operator);
        return 1;
    }

    printf("result 的结果是：%d\n", result);

    printf("Again? Type 'q' for quit: \n ");
    // 也可以使用 puts("Again? Type 'q' for quit:"); // 相当于不加 \n 换行了

    // scanf("%c", &command); // 用 scanf 还要格式化
    getchar(); // 先获取主要是解决缓存方面的问题
    command = getchar(); //  代替 scanf("%c", &command); 的写法

    printf("%d\n", command);
  }*/


  printf("=================== 2、循环 do while ============= \n");
  /**
   * do while 是先开干活，再看条件
   * do{
   *    ...执行
   * } while (条件);
   *
   * 用 do while 来改造
   */

/*
#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'

  int left;
  int right;

  char operator;

  char command = 'y';

  do {

    printf("Please input an expression: \n");
    scanf("%d %c %d", &left, &operator, &right);

    int result;
    switch (operator) {
      case ADD:result = left + right;
        break;
      case SUB:result = left - right;
        break;
      case MULTIPLY:result = left * right;
        break;
      case DIVIDE:result = left / right;
        break;
      case REM:result = left % right;
        break;
      default:printf("Unsupported operation: %c\n", operator);
        return 1;
    }

    printf("result 的结果是：%d\n", result);

    printf("Again? Type 'q' for quit: \n ");
    // 也可以使用 puts("Again? Type 'q' for quit:"); // 相当于不加 \n 换行了

    // scanf("%c", &command); // 用 scanf 还要格式化
    getchar(); // 先获取主要是解决缓存方面的问题
    command = getchar(); //  代替 scanf("%c", &command); 的写法

    printf("%d\n", command);
  } while (command != 'q');*/

  printf("=================== 3、循环 for ============= \n ");
  /**
   *  for 循环
   *
   *  for(<initialization>; <condition> ; < state){
   *    ...statement
   *  }
   *
   *  < c99 之前，
   *   initialization 不能有变量定义
   */

  /*
  int num = 1;
  int sum = 0;
  while(num < 100) {
    sum += num;
    num++;
  }

  printf("sum of [1, 100]: %d\n", sum); // sum of [1, 100]: 4950
  */


  // 用 for 循环来改造
  /*
   * C99 之前
   */
  /*
  int num = 1;
  int sum = 0;
  for(num = 0; num < 100; ++num){
    sum += num;
  }
  printf("sum of [1, 100]: %d\n", sum); // sum of [1, 100]: 4950
  */


  // 用 for 循环来改造
  /*
   * C99 开始
   */
  int sum = 0;
  for(int num = 0; num < 100; ++num){
    sum += num;
  }
  printf("sum of [1, 100]: %d\n", sum); // sum of [1, 100]: 4950

  printf("===== 两个循环\n ====");
  int sumij = 0;
  for(int i = 0, j = 0; i <= 100 && j <= 100; ++i, ++j){
    sumij += i * (i + j);
  }
  printf("sumij: %d\n", sumij); //  ====sumij: 676700

  // continue break;
  /**
   * continue   是执行下一次循环
   * break      是跳过循环
   */
  printf("===== continue break;\n ====");
  for(int i = 0; i < 10; ++i){
    if(i == 2) continue;
    if(i == 8) break;
    printf("i: %d\n", i);
  }
  /*
    结果如下：
    i: 1
    i: 3
    i: 4
    i: 5
    i: 6
    i: 7
    */


  // goto 任意跳转, 可以跳转到任意的标签
  printf("======= 4、goto 任意跳转, 可以跳转到任意的标签======= \n");
  /**
   * goto 任意跳转, 可以跳转到任意的标签
   */
   int i = 0;
   // 定义标签 begin:，这个也是一个标识符
   begin:
  printf("%d\n", i);
  if(i++ < 5) { // goto 外面一般都有一个 if 语句，不然就死循环了
    goto begin;
  }
  /*  在项目当中，一定不要使用 goto 用 while 循环就可以了
    0
    1
    2
    3
    4
    5
   */





  return 0;
}
