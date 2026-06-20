# C++ 学习系统 - 完整教程

欢迎来到 C++ 学习系统！这是一个全面的、循序渐进的 C++ 学习项目，从基础语法到高级特性，配有详细的代码示例和实践练习。

## 📚 学习路线

### 第一阶段：基础语法（1-2周）
1. **环境配置与第一个程序**
   - 编译器安装与配置
   - Hello World 程序
   - 基本输入输出

2. **变量与数据类型**
   - 基本数据类型（int, double, char, bool）
   - 变量声明与初始化
   - 类型转换

3. **运算符与表达式**
   - 算术运算符
   - 比较运算符
   - 逻辑运算符
   - 位运算符

4. **控制流**
   - if/else 语句
   - switch 语句
   - 循环（for, while, do-while）

### 第二阶段：函数与模块化（2-3周）
1. **函数基础**
   - 函数定义与声明
   - 参数传递（值传递、引用传递、指针传递）
   - 返回值

2. **高级函数特性**
   - 默认参数
   - 函数重载
   - 递归

3. **指针与引用**
   - 指针基础
   - 指针运算
   - 引用
   - 动态内存分配

### 第三阶段：面向对象编程（3-4周）
1. **类与对象**
   - 类定义
   - 构造函数与析构函数
   - 成员变量与成员函数
   - 访问控制（public, private, protected）

2. **继承**
   - 继承基础
   - 虚函数与多态
   - 纯虚函数与抽象类

3. **高级OOP特性**
   - 运算符重载
   - 友元函数与友元类
   - static 成员

### 第四阶段：STL 标准库（2-3周）
1. **容器**
   - vector（动态数组）
   - list（链表）
   - map（映射）
   - set（集合）
   - queue & stack

2. **迭代器与算法**
   - 迭代器基础
   - 常用算法（find, sort, transform等）
   - 函数对象与Lambda表达式

3. **字符串处理**
   - string 类
   - 字符串操作
   - 正则表达式基础

### 第五阶段：高级特性（2-3周）
1. **模板**
   - 函数模板
   - 类模板
   - 模板特化
   - 模板元编程基础

2. **异常处理**
   - try-catch-throw
   - 异常安全性
   - 自定义异常

3. **现代C++特性（C++11及以后）**
   - auto 类型推导
   - 右值引用与移动语义
   - 智能指针（unique_ptr, shared_ptr）
   - Lambda表达式
   - 范围for循环

### 第六阶段：实战项目（2-4周）
1. **小型项目**
   - 计算器程序
   - 文件处理系统
   - 学生管理系统

2. **中型项目**
   - 贪吃蛇游戏
   - 图书管理系统
   - 任务管理应用

## 📁 项目结构

```
cpp-learning-system/
├── README.md
├── CMakeLists.txt
├── docs/
│   └── learning-guide.md
├── 01-basics/
│   ├── 01-hello-world/
│   ├── 02-variables-and-types/
│   ├── 03-operators/
│   └── 04-control-flow/
├── 02-functions/
│   ├── 01-function-basics/
│   ├── 02-advanced-functions/
│   └── 03-pointers-and-references/
├── 03-oop/
│   ├── 01-classes-and-objects/
│   ├── 02-inheritance/
│   └── 03-advanced-oop/
├── 04-stl/
│   ├── 01-containers/
│   ├── 02-iterators-and-algorithms/
│   └── 03-strings/
├── 05-advanced/
│   ├── 01-templates/
│   ├── 02-exception-handling/
│   └── 03-modern-cpp/
└── 06-projects/
    ├── 01-calculator/
    ├── 02-file-system/
    └── 03-student-management/
```

## 🚀 快速开始

### 环境要求
- GCC 7.0+ / Clang 5.0+ / MSVC 2015+
- CMake 3.10+
- Git

### 编译与运行

```bash
# 克隆仓库
git clone https://github.com/LcK1ngQs/cpp-learning-system.git
cd cpp-learning-system

# 创建构建目录
mkdir build && cd build

# 编译
cmake ..
make

# 运行示例（以hello-world为例）
./01-basics/01-hello-world/hello-world
```

## 📖 学习方式

1. **按顺序学习**：从 `01-basics` 开始，循序渐进
2. **代码实践**：每个主题都有详细的代码示例，尝试修改和扩展
3. **练习题**：每个部分都有练习题来巩固学习
4. **项目实践**：在 `06-projects` 中完成实战项目

## 💡 学习建议

- ✅ 动手写代码，不要只看
- ✅ 修改示例代码，看看会发生什么
- ✅ 在编译前预测输出结果
- ✅ 经常回顾之前学过的内容
- ✅ 尝试用学到的知识解决实际问题

## 🎯 学习目标

完成本课程后，你将能够：
- 理解 C++ 的基本语法和概念
- 编写面向对象的 C++ 程序
- 熟练使用 STL 标准库
- 理解和使用现代 C++ 特性
- 完成实际的 C++ 项目开发

## 📝 许可证

MIT License

## 🤝 贡献

欢迎提出建议和改进！

---

**开始学习吧！** 从 `01-basics/01-hello-world` 开始你的 C++ 之旅！
