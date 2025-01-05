//#include <stdio.h>
#include <string>
using namespace std;

class father {
public:
	//father() {}
	//father(int a) : m_a(a) {}
	//void func(const int &a) {a = 2;}   //报错
	void change() const {
		//m_a = 10;						 //报错
	}
	int m_a = 12;
};

int main() {
	father f;
	//father f(15);
	printf("m_a is %d\n", f.m_a);
	//常变量：变量的值不能被修改
	const int value = 1;  //写法同：int const value = 1;
	//value = 2;  //报错

	//常指针：指针的地址不能被修改
	char* const p = "abc";  //改为const char* p = "abc";不报错
	//p = "efg";  //报错

	//常引用：const修饰形参，表示在函数内部不能改变其值
	int quote = 1;
	//f.func(quote);

	//常函数：类的成员函数为const类型表示这个函数为常函数，在常函数内部不能修改类的任何一个成员变量
	f.change();

	return 0;
}


