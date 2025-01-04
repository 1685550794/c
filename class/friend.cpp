//#include <stdio.h>
#include <string>
using namespace std;

#if 0
//不能在类的外部访问类的私有成员
class father {
public:
	father(int age) : m_age(age) {}
private:
	int m_age;
};

int main() {
	father* f = new father(50);
	printf("father age is %d\n", f->m_age);  //报错
	return 0;
}
#endif
//-----------------------------------------------------
#if 0
//class1的成员函数不能访问class2的私有成员
class father {
public:
	father(int age) : m_age(age) {}
private:
	int m_age;
};

class son {
public:
	void visit(father *f) {printf("father age is %d\n", f->m_age);}  //报错

};

int main() {
	father* f = new father(50);
	son* s = new son();
	s->visit(f);
	return 0;
}
#endif
//-----------------------------------------------------
#if 1
//友元函数：class1的成员函数在class2中加上friend和作用域，那么class1的成员函数可以访问class2的私有成员
class father;
class son {
public:
	void visit(father *f);
};

class father {
	friend void son::visit(father *f);  //son::visit声明为father的友元函数，那么son::visit可以访问father的私有成员
public:
	father(int age) : m_age(age) {}
private:
	int m_age;
};

void son::visit(father *f) {printf("father age is %d\n", f->m_age);}

int main() {
	father* f = new father(50);
	son* s = new son();
	s->visit(f);
	return 0;
}
#endif







