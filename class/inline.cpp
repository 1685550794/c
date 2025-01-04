//#include <stdio.h>
#include <string>
using namespace std;

//内联函数：函数定义的前面加上inline，在函数调用的地方展开函数体，减少函数栈帧的开销
inline int add(int a, int b) {return a+b;}

int main() {
	int s = add(1, 2)*3;  //编译会展开成int s = (1+2)*3
	printf("sum is %d\n", s);
	return 0;
}



