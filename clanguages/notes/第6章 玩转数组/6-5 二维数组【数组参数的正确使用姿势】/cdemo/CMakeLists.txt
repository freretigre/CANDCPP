# 版本号
cmake_minimum_required(VERSION 3.21)

# 获取文件的名字，就是获取我这个 CMakeLists.txt 文件所以 clanguage 这个目录的名字，步是 clanguage
# ProjectId 就变成了 clanguage 了
get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
#这里当我们的文件目录名中间有空格，就替换成下划线如：clan guage 替换成 clan_guage
string(REPLACE " " "_" ProjectId ${ProjectId})
# 项目名称
project(clanguages C)
# 项目使用的是哪个版本号，这里是 23 为最新的版本
set(CMAKE_C_STANDARD 23)

# 搜索路径的配置, 如果在这里配置了，我们就可以在 main.h 里的文件里使用 #include <header.h> 尖括号的方式引入头文件了。而不需要使用  #include "../header.h"
include_directories("include")

# 获取 CMAKE_CURRENT_SOURCE_DIR 这个目录下 source dir目录下 .c 文件 全部拿到，存到 files
file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
# 以上所有的 .c 文件存到 files, 进行 files 遍历，添加一个一个.c的可执行的程序，
# 每一个文件的代码都可以在 debug 导航栏下拉框里看到了。
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file} src/factorial.c) # src/factorial.c 是把源文件给添加进来，并执行它，在这里.h 的头文件不需要再次引入进来，因为我们在 main.c 里引入了。因为它可以找到函数的实现，就可以了
    target_compile_definitions(${name} PUBLIC DEBUG) #define DEBUG // 如果我不想到代码当中，明确的定义出DEBUG来呢，我要在编译的时候，传一个个编译的参数来控制，怎以办呢，如下操作
endforeach() # 结束遍历