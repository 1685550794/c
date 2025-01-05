//#include <stdio.h>
#include <string>
using namespace std;

class father {
public:
	father(int num) : m_num(num) {}
	//重载+
	int operator+(father f) {return this->m_num + f.m_num;}
	//重载a++
	father operator++(int) {father tmp = *this; this->m_num++; return tmp;}
	//重载++a
	father operator++() {this->m_num++; return *this;}
	int m_num;
};

//运算符重载：f1.operator+(f2) = f1+f2; f3.operator++(任意int) = f3++; f4.operator++() = ++f4;
int main() {
	//重载+
	father f1(50);
	father f2(60);
	//printf("sum1 is %d\n", f1.operator+(f2));
	printf("sum2 is %d\n", f1+f2);

	//重载a++
	father f3(1);
	//printf("f3++ is %d\n", (f3.operator++(2)).m_num);
	printf("f3++ is %d\n", (f3++).m_num);

	//重载++a
	father f4(1);
	//printf("++f4 is %d\n", (f4.operator++()).m_num);
	printf("++f4 is %d\n", (++f4).m_num);
	return 0;
}




