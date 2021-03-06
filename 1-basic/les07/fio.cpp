#include <fstream>
#include <iostream>
using namespace std;
// ofstream 该数据类型表示输出文件流，用于创建文件并向文件写入信息。
// ifstream 该数据类型表示输入文件流，用于从文件读取信息。
// fstream	该数据类型通常表示文件流，且同时具有 ofstream 和 ifstream 两种功能，这意味着它可以创建文件，向文件写入信息，从文件读取信息。

// 模式标志	描述
// ios::app	追加模式。所有写入都追加到文件末尾。
// ios::ate	文件打开后定位到文件末尾。
// ios::in	    打开文件用于读取。
// ios::out	打开文件用于写入。
// ios::trunc	如果该文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为 0。
// 您可以把以上两种或两种以上的模式结合使用。例如，如果您想要以写入模式打开文件，并希望截断文件，以防文件已存在，那么您可以使用下面的语法：
// ofstream outfile;
// outfile.open("file.dat", ios::out | ios::trunc );
// 类似地，您如果想要打开一个文件用于读写，可以使用下面的语法：
// ifstream  afile;
// afile.open("file.dat", ios::out | ios::in );

int main ()
{
    
   char data[100];
 
   // 以写模式打开文件
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);// getline()函数从外部读取一行，只能操作c语言的字符数组
   // string str;
   // getline(cin,str);
   // 这种方法可以实现输入到字符串内

   // 向文件写入用户输入的数据
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();//ignore() 函数会忽略掉之前读语句留下的多余字符
   
   // 再次向文件写入用户输入的数据
   outfile << data << endl;
 
   // 关闭打开的文件
   outfile.close();
 


   // 以读模式打开文件
   ifstream infile; 
   infile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 
 
   // 在屏幕上显示数据
   cout << data << endl;
   
   // 再次从文件读取数据，并显示它
   infile >> data; 
   cout << data << endl; 
 
   // 关闭打开的文件
   infile.close();
 
   return 0;
}