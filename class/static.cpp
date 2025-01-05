//#include <stdio.h>
#include <string>
using namespace std;

class father {
public:
	//static成员函数只能访问static成员变量和static成员函数
	static void func() {
		m_a = 3;
		//m_b = 4;  //报错
		func1();
		//func2();  //报错
		printf("func\n");
	}
	static void func1() {
		printf("func1\n");
	}
	void func2() {
		printf("func2\n");
	}
	static int m_a;
	int m_b = 2;
};

//static成员变量必须在类外初始化，可以直接使用类名调用static成员变量和static成员函数
int father::m_a = 1;

int main() {
	//father::m_a = 1;  //报错
	printf("father::m_a is %d\n", father::m_a);
	father::func();
	return 0;
}

