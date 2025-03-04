// /*线性结构
// 一元多项式 ： 
// 属性 ： 多个指数， 和对应的系数
// 多个属性按照指数大小排成一列， 形成线性关系（逻辑关系）；
// 这个线性关系和数据在计算机里怎么实现
// 一维数组
// 二维数组
// 带有指针的结构题体， 构成链表（存储结构）
// 多项式 加减乘 填项 行为 ， 运算 ， 成员函数

// 同一逻辑结构不同的储存结构

// 运算针对不同存储结构算法不一样
// */

// /*一种逻辑结构 ： 线性
//         存储结构： 顺序表
//                 定义同名行为， 不算算法， 不同的时间复杂度
//                 链表
//             运算
//             应用：
// */
// /*
// #include <iostream>
// #include <vector>

// class Polynomial {
// public:
//     // 构造函数
//     Polynomial(const std::vector<int>& coefficients, const std::vector<int>& exponents);

//     // 多项式加法
//     Polynomial add(const Polynomial& other) const;

//     // 多项式减法
//     Polynomial subtract(const Polynomial& other) const;

//     // 多项式乘法
//     Polynomial multiply(const Polynomial& other) const;

//     // 打印多项式
//     void print() const;

// private:
//     std::vector<int> coefficients; // 系数
//     std::vector<int> exponents;    // 指数
// };

// // 构造函数实现
// Polynomial::Polynomial(const std::vector<int>& coefficients, const std::vector<int>& exponents)
//     : coefficients(coefficients), exponents(exponents) {}

// // 多项式加法实现
// Polynomial Polynomial::add(const Polynomial& other) const {
//     // 实现加法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 多项式减法实现
// Polynomial Polynomial::subtract(const Polynomial& other) const {
//     // 实现减法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 多项式乘法实现
// Polynomial Polynomial::multiply(const Polynomial& other) const {
//     // 实现乘法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 打印多项式实现
// void Polynomial::print() const {
//     // 实现打印逻辑
//     // ...
// }

// int main() {
//     // 示例用法
//     std::vector<int> coefficients = {1, 2, 3};
//     std::vector<int> exponents = {0, 1, 2};
//     Polynomial p1(coefficients, exponents);
//     Polynomial p2(coefficients, exponents);

//     Polynomial p3 = p1.add(p2);
//     p3.print();

//     return 0;
// }
// */


// class list{
// private: 
//     int length;
//     //一堆先后关系数据的顺序储存： 物理关系要反应逻辑关系， 数组
//     #include <iostream>
// #include <vector>

// class Polynomial {
// public:
//     // 构造函数
//     Polynomial(const std::vector<int>& coefficients, const std::vector<int>& exponents);

//     // 多项式加法
//     Polynomial add(const Polynomial& other) const;

//     // 多项式减法
//     Polynomial subtract(const Polynomial& other) const;

//     // 多项式乘法
//     Polynomial multiply(const Polynomial& other) const;

//     // 打印多项式
//     void print() const;

// private:
//     std::vector<int> coefficients; // 系数
//     std::vector<int> exponents;    // 指数
// };

// // 构造函数实现
// Polynomial::Polynomial(const std::vector<int>& coefficients, const std::vector<int>& exponents)
//     : coefficients(coefficients), exponents(exponents) {}

// // 多项式加法实现
// Polynomial Polynomial::add(const Polynomial& other) const {
//     // 实现加法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 多项式减法实现
// Polynomial Polynomial::subtract(const Polynomial& other) const {
//     // 实现减法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 多项式乘法实现
// Polynomial Polynomial::multiply(const Polynomial& other) const {
//     // 实现乘法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 打印多项式实现
// void Polynomial::print() const {
//     // 实现打印逻辑
//     // ...
// }

// int main() {
//     // 示例用法
//     std::vector<int> coefficients = {1, 2, 3};
//     std::vector<int> exponents = {0, 1, 2};
//     Polynomial p1(coefficients, exponents);
//     Polynomial p2(coefficients, exponents);

//     Polynomial p3 = p1.add(p2);
//     p3.print();

//     return 0;
// }#include <iostream>
// #include <vector>

// class Polynomial {
// public:
//     // 构造函数
//     Polynomial(const std::vector<int>& coefficients, const std::vector<int>& exponents);

//     // 多项式加法
//     Polynomial add(const Polynomial& other) const;

//     // 多项式减法
//     Polynomial subtract(const Polynomial& other) const;

//     // 多项式乘法
//     Polynomial multiply(const Polynomial& other) const;

//     // 打印多项式
//     void print() const;

// private:
//     std::vector<int> coefficients; // 系数
//     std::vector<int> exponents;    // 指数
// };

// // 构造函数实现
// Polynomial::Polynomial(const std::vector<int>& coefficients, const std::vector<int>& exponents)
//     : coefficients(coefficients), exponents(exponents) {}

// // 多项式加法实现
// Polynomial Polynomial::add(const Polynomial& other) const {
//     // 实现加法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 多项式减法实现
// Polynomial Polynomial::subtract(const Polynomial& other) const {
//     // 实现减法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 多项式乘法实现
// Polynomial Polynomial::multiply(const Polynomial& other) const {
//     // 实现乘法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 打印多项式实现
// void Polynomial::print() const {
//     // 实现打印逻辑
//     // ...
// }
// int main() {
//     // 示例用法
//     std::vector<int> coefficients = {1, 2, 3};
//     std::vector<int> exponents = {0, 1, 2};
//     Polynomial p1(coefficients, exponents);
//     Polynomial p2(coefficients, exponents);

//     Polynomial p3 = p1.add(p2);
//     p3.print();

//     return 0;
// }#include <iostream>
// #include <vector>

// class Polynomial {
// public:
//     // 构造函数
//     Polynomial(const std::vector<int>& coefficients, const std::vector<int>& exponents);

//     // 多项式加法
//     Polynomial add(const Polynomial& other) const;

//     // 多项式减法
//     Polynomial subtract(const Polynomial& other) const;

//     // 多项式乘法
//     Polynomial multiply(const Polynomial& other) const;

//     // 打印多项式
//     void print() const;

// private:
//     std::vector<int> coefficients; // 系数
//     std::vector<int> exponents;    // 指数
// };

// // 构造函数实现
// Polynomial::Polynomial(const std::vector<int>& coefficients, const std::vector<int>& exponents)
//     : coefficients(coefficients), exponents(exponents) {}

// // 多项式加法实现
// Polynomial Polynomial::add(const Polynomial& other) const {
//     // 实现加法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 多项式减法实现
// Polynomial Polynomial::subtract(const Polynomial& other) const {
//     // 实现减法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 多项式乘法实现
// Polynomial Polynomial::multiply(const Polynomial& other) const {
//     // 实现乘法逻辑
//     // ...
//     return Polynomial({}, {});
// }

// // 打印多项式实现
// void Polynomial::print() const {
//     // 实现打印逻辑
//     // ...
// }

// int main() {
//     // 示例用法
//     std::vector<int> coefficients = {1, 2, 3};
//     std::vector<int> exponents = {0, 1, 2};
//     Polynomial p1(coefficients, exponents);
//     Polynomial p2(coefficients, exponents);

//     Polynomial p3 = p1.add(p2);
//     p3.print();
//     return 0;
// }

for(int k = n; k >= i; k--){
    data[k + 1] = data[k];
}
