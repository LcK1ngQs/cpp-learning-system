/**
 * 第二课：变量与数据类型
 * 
 * 学习目标：
 * 1. 理解基本数据类型
 * 2. 学会声明和初始化变量
 * 3. 理解变量的作用域和生命周期
 * 4. 学习类型转换
 */

#include <iostream>
#include <iomanip>  // 用于格式化输出

using namespace std;

int main() {
    cout << "========== 变量与数据类型 ==========" << endl;
    
    // ============ 1. 基本数据类型 ============
    cout << "\n--- 基本数据类型 ---" << endl;
    
    // 整数类型
    int age = 25;                    // 整数（通常4字节）
    short score = 100;               // 短整数（通常2字节）
    long population = 1400000000;    // 长整数（通常8字节）
    
    cout << "age (int): " << age << endl;
    cout << "score (short): " << score << endl;
    cout << "population (long): " << population << endl;
    
    // 浮点数类型
    float height = 1.75f;            // 单精度浮点数
    double weight = 65.5;            // 双精度浮点数（推荐）
    
    cout << "\nheight (float): " << fixed << setprecision(2) << height << endl;
    cout << "weight (double): " << weight << endl;
    
    // 字符类型
    char initial = 'A';              // 单个字符
    
    cout << "\ninitial (char): " << initial << endl;
    
    // 布尔类型
    bool isStudent = true;           // 真或假
    bool isGraduated = false;
    
    cout << "isStudent (bool): " << (isStudent ? "true" : "false") << endl;
    cout << "isGraduated (bool): " << (isGraduated ? "true" : "false") << endl;
    
    // ============ 2. 数据类型大小 ============
    cout << "\n--- 数据类型大小（字节） ---" << endl;
    
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << "sizeof(short): " << sizeof(short) << endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(long): " << sizeof(long) << endl;
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(bool): " << sizeof(bool) << endl;
    
    // ============ 3. 变量初始化方式 ============
    cout << "\n--- 变量初始化方式 ---" << endl;
    
    int a = 10;                      // 赋值初始化
    int b(20);                       // 函数式初始化（C++）
    int c{30};                       // 统一初始化（C++11）
    
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    
    // ============ 4. 类型转换 ============
    cout << "\n--- 类型转换 ---" << endl;
    
    // 隐式转换（自动转换）
    int num = 42;
    double decimal = num;            // int 自动转换为 double
    cout << "int to double: " << decimal << endl;
    
    // 显式转换（强制转换）
    double pi = 3.14159;
    int roundPi = (int)pi;           // C风格转换
    int roundPi2 = static_cast<int>(pi);  // C++风格转换（推荐）
    
    cout << "double to int (C风格): " << roundPi << endl;
    cout << "double to int (C++风格): " << roundPi2 << endl;
    
    // ============ 5. 变量作用域 ============
    cout << "\n--- 变量作用域 ---" << endl;
    
    int globalLike = 100;            // 主函数作用域
    
    {
        int localVar = 200;          // 块作用域
        cout << "Inside block - localVar: " << localVar << endl;
        cout << "Inside block - globalLike: " << globalLike << endl;
    }
    
    // localVar 在这里不可访问（作用域已结束）
    cout << "Outside block - globalLike: " << globalLike << endl;
    // cout << localVar;  // 错误！localVar 超出作用域
    
    // ============ 6. 常量 ============
    cout << "\n--- 常量 ---" << endl;
    
    const double PI = 3.14159;       // 常量声明后不能修改
    const int MAX_ATTEMPTS = 3;
    
    cout << "PI: " << PI << endl;
    cout << "MAX_ATTEMPTS: " << MAX_ATTEMPTS << endl;
    
    // PI = 3.14;  // 错误！常量不能被修改
    
    // ============ 7. 变量修饰符 ============
    cout << "\n--- 变量修饰符 ---" << endl;
    
    unsigned int unsignedNum = 4294967295U;  // 无符号整数（只能存正数）
    signed int signedNum = -2147483648;      // 有符号整数（可以存负数）
    
    cout << "unsigned int max: " << unsignedNum << endl;
    cout << "signed int min: " << signedNum << endl;
    
    // ============ 8. 自动类型推导（C++11） ============
    cout << "\n--- 自动类型推导（C++11） ---" << endl;
    
    auto x = 42;                     // auto 自动推导为 int
    auto y = 3.14;                   // auto 自动推导为 double
    auto z = 'A';                    // auto 自动推导为 char
    
    cout << "auto x: " << x << " (type: int)" << endl;
    cout << "auto y: " << y << " (type: double)" << endl;
    cout << "auto z: " << z << " (type: char)" << endl;
    
    return 0;
}

/**
 * 重点总结：
 * 
 * 基本数据类型：
 *   - char（1字节）：字符
 *   - short（2字节）：短整数
 *   - int（4字节）：整数
 *   - long（8字节）：长整数
 *   - float（4字节）：单精度浮点数
 *   - double（8字节）：双精度浮点数
 *   - bool（1字节）：布尔值
 * 
 * 变量的三个要素：
 *   1. 类型：决定如何解释内存中的数据
 *   2. 名称：用来引用这个变量
 *   3. 值：存储在内存中的数据
 * 
 * 作用域规则：
 *   - 全局作用域：在函数外声明
 *   - 局部作用域：在函数内或块内声明
 *   - 变量在超出作用域后被销毁
 * 
 * 类型转换：
 *   - 隐式转换：由编译器自动进行
 *   - 显式转换：程序员手动进行（使用 static_cast 等）
 * 
 * 最佳实践：
 *   - 使用有意义的变量名
 *   - 在声明时初始化变量
 *   - 使用 const 保护不应该改变的值
 *   - 优先使用 double 而不是 float
 *   - 使用 C++ 风格的类型转换
 */
