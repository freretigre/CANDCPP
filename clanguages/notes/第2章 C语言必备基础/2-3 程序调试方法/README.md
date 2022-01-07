## 程序调试方法

我们可以使用 CLion 提供的调试功能对程序逐行进行分析，包括查看运行时变量的值，内存和寄存器的状态，程序运行所对应的汇编指令等等。

Windows 上 CLion 调试使用 MSVC 编译的程序使用自带的 lldb，我们可以在调试时查看反编译的汇编指令。

设置显示汇编指令的格式：

LLDB：

```
# 设置为 Intel 的指令格式
settings set target.x86-disassembly-flavor intel
# 设置为 AT&T 的指令格式
settings set target.x86-disassembly-flavor att
```

也可以在用户目录下创建 .lldbinit 文件，将以上配置写入其中，以使其默认生效。

GDB：

```
# 设置为 Intel 的指令格式
set disassembly-flavor intel
# 设置为 AT&T 的指令格式
set disassembly-flavor att
```

也可以在用户目录下创建 .gdbinit 文件，将以上配置写入其中，以使其默认生效。

# CMakeLists.txt 修改前
```shell
cmake_minimum_required(VERSION 3.21)
project(clanguage C)

set(CMAKE_C_STANDARD 23)

add_executable(clanguage main.c)

```

# CMakeLists.txt 修改后
```shell
# 版本号
cmake_minimum_required(VERSION 3.21)

# 获取文件的名字，就是获取我这个 CMakeLists.txt 文件所以 clanguage 这个目录的名字，步是 clanguage
# ProjectId 就变成了 clanguage 了
get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
#这里当我们的文件目录名中间有空格，就替换成下划线如：clan guage 替换成 clan_guage
string(REPLACE " " "_" ProjectId ${ProjectId})
# 项目名称
project(clanguage C)
# 项目使用的是哪个版本号，这里是 23 为最新的版本
set(CMAKE_C_STANDARD 23)

# 获取 CMAKE_CURRENT_SOURCE_DIR 这个目录下 source dir目录下 .c 文件 全部拿到，存到 files
file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
# 以上所有的 .c 文件存到 files, 进行 files 遍历，添加一个一个.c的可执行的程序，
# 每一个文件的代码都可以在 debug 导航栏下拉框里看到了。
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file})
endforeach() # 结束遍历


```
