#include <stdio.h>

/**
 * this program calculate summary from 0 to 9 增加注释说明，方便以后读写，
 * 使用一个好的一个变量命名
 * 对于复杂的逻辑要增加注释
 *
 * c 语言当中的 main 函数，可以有两个参数,
 *
 * int main(int argc, char **argv){
 *
 * }
 * @param argc parameter count
 * @param argv parameters
 * @return 0
 *
 *
 *
 * 命名规侧：
 *   我们使用什么样的规则来取名字呢？我们可以选择 Google 的命名方式
 *   打开 Settings -> Editor -> CodeStyle -> C/C++ 打开右上角 选择 Set from...， 选择 google
 *
 *   改名字是： shift + F6
 */

void helloWorld() {

}

int main() {
  int sum = 0; // 求和
  int i = 0;

  // while 循环
  while (i < 10) {
    sum = sum + i;
    i++;
  }

  printf("%d\n", sum);
  return 0;
}
