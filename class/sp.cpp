//#include <stdio.h>
#include <string>
#include <memory>
using namespace std;

class demo {
public:
	demo(int a) : m_a(a) {}
	void print() {printf("a = %d\n", m_a);}
private:
	int m_a;
};

int main() {
	//auto_ptr：转移所有权，被拷贝对象把资源管理权转移给拷贝对象，导致被拷贝对象悬空
	std::auto_ptr<demo> sp1(new demo(1));
	std::auto_ptr<demo> sp2 = sp1;  //sp2指向new demo(1), sp1不再指向new demo(1)
	//sp1->print();  //报错
	sp2->print();

	//unique_ptr：禁止拷贝构造
	std::unique_ptr<demo> sp3(new demo(3));
	//std::unique_ptr<demo> sp4 = sp3;  //报错，unique_ptr禁止拷贝构造
	sp3->print();

	//shared_ptr：引用计数，当拷贝构造时引用计数+1，当释放sp5或者sp6时，引用计数-1，当引用计数为0时释放资源
	std::shared_ptr<demo> sp5(new demo(5));
	printf("use count %d\n", sp5.use_count());
	std::shared_ptr<demo> sp6 = sp5;
	printf("use count %d\n", sp5.use_count());
	printf("use count %d\n", sp6.use_count());
	sp5->print();
	sp6->print();
	return 0;
}


