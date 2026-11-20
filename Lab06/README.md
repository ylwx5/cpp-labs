# 实验06 数组、指针和字符串

实验日期为2026年11月20日，实验地点为于刚宋晓楼，指导老师为胡黔南。

使用 Visual Studio 打开 Lab06.sln，选择 Debug / x64，每题对应一个控制台项目。

| 项目 | 内容 |
| --- | --- |
| Ex01_LocalArrays | 静态与自动局部数组 |
| Ex02_ArrayParameters | 数组作为函数参数 |
| Ex03_ConstArray | const数组参数 |
| Ex04_GradeBook1D | GradeBook 1维数组成绩管理 |
| Ex05_GradeBook2D | GradeBook 2维数组成绩管理 |
| Ex06_PointerArithmetic | 指针运算 |
| Ex07_ConstPointers | 常量与指针 |
| Ex08_SelectionSort | 选择排序 |
| Ex09_FunctionPointerSort | 函数指针控制排序 |
| Ex10_BankAccounts | 个人银行账户管理 |
| Task01_UninitializedPointer | 6-17 未初始化指针 |
| Task02_MemoryLeak | 6-18 动态内存释放 |
| Task03_SimpleCircle | 6-20 SimpleCircle类 |
| Task04_CountLetters | 6-21 英文字母计数 |
| Task05_RecursiveReverse | 6-22 递归倒序字符串 |
| Task06_PointerSafety | 6-29 指针类型转换安全性 |

[实验报告](实验06报告.docx)

16个项目均已编译运行，实际输入输出见 [运行记录](run-results.txt)。选择排序、函数指针排序和银行账户已在 Visual Studio 设置断点并单步观察，见 [调试记录](debug-observations.txt) 和 [函数指针记录](debug-function-pointer.txt)。

const错误示例以invalid开头，单独编译的诊断见 [编译错误记录](compile-errors.txt)。它们不加入正常项目生成。6-17原错误代码也保留在invalid.cpp中，修正版初始化指针后再访问。

6-29原程序保存在Task06_PointerSafety/unsafe.cpp，本机一次观察结果见 [原程序运行记录](unsafe-observation.txt)。这段代码有未定义行为，输出不能作为通用结果。正常项目展示数值转换和安全的字节读取。

指针运算中，课件以假设地址说明short和long的步长。将short数组强转成long指针后运算不满足标准对同类型数组的要求，运行项目使用真正的long数组验证步长。

[银行边界检查](boundary-checks.txt)记录了闰年、日期合法性、透支、负金额、倒序日期和重复结息的验证结果。
