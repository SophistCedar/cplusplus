## C++ 信号处理
信号是由操作系统传给进程的中断，会提早终止一个程序。在 UNIX、LINUX、Mac OS X 或 Windows 系统上，可以通过按 Ctrl+C 产生中断。  
有些信号不能被程序捕获，但是下表所列信号可以在程序中捕获，并可以基于信号采取适当的动作。这些信号是定义在 C++ 头文件 <csignal> 中。  
信号	描述  
SIGABRT	程序的异常终止，如调用 abort。  
SIGFPE	错误的算术运算，比如除以零或导致溢出的操作。  
SIGILL	检测非法指令。  
SIGINT	接收到交互注意信号。  
SIGSEGV	非法访问内存。  
SIGTERM	发送到程序的终止请求。  
### signal() 函数  
C++ 信号处理库提供了 signal 函数，用来捕获突发事件。以下是 signal() 函数的语法：  
void (*signal (int sig, void (*func)(int)))(int);   
这个函数接收两个参数：第一个参数是一个整数，代表了信号的编号；第二个参数是一个指向信号处理函数的指针。  
让我们编写一个简单的 C++ 程序，使用 signal() 函数捕获 SIGINT 信号。不管您想在程序中捕获什么信号，您都必须使用 signal 函数来注册信号，并将其与信号处理程序相关联。

### raise() 函数
您可以使用函数 raise() 生成信号，该函数带有一个整数信号编号作为参数，语法如下：  
int raise (signal sig);  
在这里，sig 是要发送的信号的编号，这些信号包括：SIGINT、SIGABRT、SIGFPE、SIGILL、SIGSEGV、SIGTERM、SIGHUP。