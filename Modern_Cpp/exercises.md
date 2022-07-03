# Modern C++ 选讲 练习

## 1.常量表达式

判断以下各项是否为常量表达式：（hint: static_assert）

```C++
int a = 1;
// 在各行注释中填写答案
const int b = 1; // 是（示例）
const int c = a + 1; // 
const int d = b + 1; // 
const int e = a + b; // 
constexpr int f = 1 + 1; // 
```

## 2.基于范围的for循环

使用基于范围的for循环，将u、v中的每个元素减去各自向量的平均值（归一化），并求u、v各自的方差。

（不使用std::vector本身的接口方法）

```C++
#include <vector>
int main(){
    std::vector<double> u {2.0, 3.0, 4.0, 5.0, 6.0};
    std::vector<double> v {-46.13, -69.1, -92.25, -115.25, -138.13};
    // your code below
    
    // your code above
    return 0;
}
```

## 3.Lambda表达式

写出以下程序中每一个Lambda表达式执行完成的结果：

（部分内容未在课上讲到，如遇困难可自行参考[SAST Weekly | C++ 函数式编程——从入门到入坟](https://mp.weixin.qq.com/s/sI5Vcv9jpckLuM_h2Fd9AA)）

```C++
int main()
{
    int x = 1, y = 1, z = 1;
    
    [&, x](){ y = -x - z; }();
    // x = , y = , z = .
    
    [=, &z](){ z = x + y; }();
    // x = , y = , z = .
    
    [&z, w = y, &r = x](){ r = w / z; }();
    // x = , y = , z = .
    
    [&, x, y, p = z](){ z = x + y - p; }();
    // x = , y = , z = .
    return 0;
}
```

## 4.右值引用

判断以下各项是否为右值：

```C++
int a = 1;
// 在各行注释中填写答案
1 // 是（示例）
"1" //
-1 //
a // 
std::move(a) // 
std::forward<int>(a) //
static_cast<int&>(a) //
```

