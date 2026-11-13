# 实验05 数据的共享与保护

用 Visual Studio 打开 Lab05.sln，选择 Debug / x64。六个练习各有一个控制台项目。类题将声明、实现和测试主函数分文件保存。5-3 是普通函数作用域示例，只有 main.cpp。

| 项目 | 题目 | 实际结果 |
| --- | --- | --- |
| Ex01_StaticData | Ctype 静态数据成员 | 三个对象各自的 a 都变为 1，共享的 s 依次为 1、2、3 |
| Ex02_StudentCount | Student 静态计数 | 各学号固定，已构造对象共享当前计数 |
| Ex03_StaticFunction | Ctype 静态成员函数 | 类名和对象均可调用 Print，只有构造函数访问各对象的 a |
| Task01_Scope | 5-3 作用域 | 函数内 y=10，main 中的全局 y 仍为 7 |
| Task02_Cat | 5-7 对象计数 | 构造和复制增加计数，赋值保持计数，离开作用域减少计数 |
| Task03_Friends | 5-13 友元 | 私有成员从 0 依次变为 1、6、16 |

课件示例修正了重复默认实参、输出语句拼写、Student3 重复定义和 Student4 未定义等问题。静态 Print 没有 this 指针，删除其中对普通成员 a 的直接访问，保留对共享成员 s 的操作。

六项均已编译，并对照预期逐行核对实际输出。完整记录见 run-results.txt。已在 Visual Studio 对 5-7 设置断点并单步观察，详见 debug-observations.md。5-16 等老师或教材补充题干。
