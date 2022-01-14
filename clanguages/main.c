#include <stdio.h>
// 4-6 案例：汉诺塔
/**
 * A        B       C
 *
 *
 * Move(n, A, C, B)
 * n    移动数量
 * A    起始位置
 * C    目标位置
 * B    临时位置
 * @return
 */

// 定义 Move 方法
/**
 * 递归的本质是什么？
 *   本质就是搞清楚问题到底是什么样的过规则之后呢，它在哪儿去终止，这就是递归
 * @param n
 * @param src
 * @param dest
 * @param temp
 */
void Move(int n, char src, char dest, char temp){
  if(n ==0) return;
  else if(n ==1) printf("%c ---> %c\n", src, dest);
  else {
    Move(n - 1, src, temp, dest);
    Move(1, src, temp, dest);
    Move(n - 1, temp, dest, src);
  }
}
int main(){
  // 4-6 案例：汉诺塔
  Move('3', 'A', 'C', 'B');
  return 0;
}