#include <iostream>
using namespace std;
// C++ 异常处理
// 异常是程序在执行期间产生的问题。C++ 异常是指在程序运行时发生的特殊情况，比如尝试除以零的操作。
// 异常提供了一种转移程序控制权的方式。C++ 异常处理涉及到三个关键字：try、catch、throw。
// throw: 当问题出现时，程序会抛出一个异常。这是通过使用 throw 关键字来完成的。
// catch: 在您想要处理问题的地方，通过异常处理程序捕获异常。catch 关键字用于捕获异常。
// try: try 块中的代码标识将被激活的特定异常。它后面通常跟着一个或多个 catch 块。
// 如果有一个块抛出一个异常，捕获异常的方法会使用 try 和 catch 关键字。
// try 块中放置可能抛出异常的代码，try 块中的代码被称为保护代码。
// 由于我们抛出了一个类型为 const char* 的异常，因此，当捕获该异常时，我们必须在 catch 块中使用 const char*。
double division(int a, int b)
{
   if( b == 0 )
   {
      throw "Division by zero condition!";//当问题出现时，程序会抛出一个异常，通过使用 throw 关键字来完成。
   }
   return (a/b);
}

int main ()
{
   int x = 50;
   int y = 0;
   double z = 0;
   //try 块中放置可能抛出异常的代码，try 块中的代码被称为保护代码。
   try {
     z = division(x, y);
     cout << z << endl;
   }catch (const char* msg) {//division里可能抛出一个类型为 const char* 的异常
     cerr << msg << endl;
   }

   return 0;
}