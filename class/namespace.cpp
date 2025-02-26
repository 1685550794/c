//#include <stdio.h>
#include <string>
using namespace std;

namespace namespace1 {
    void display() {printf("this is namespace1\n");}
}

namespace namespace2 {
    void display() {printf("this is namespace2\n");}
}

using namespace namespace1;
//using namespace namespace2;

//命名空间：防止命名冲突
int main() {
	display();
	namespace1::display();
	namespace2::display();
	return 0;
}


