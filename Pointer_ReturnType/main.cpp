#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class saraly{
	public:
		double & getsaraly();
		double * sell();
};
double &saraly::getsaraly()
{
	double sara = 40.5;
	double &s = sara;
	
	return s;
}
double *saraly::sell()
{
	double price = 15;
	double *ptr = &price;
	return ptr;
}
int main(int argc, char** argv) {
	class saraly *p1 = new saraly;
	cout << p1->getsaraly()<<endl;
	cout << * p1->sell();
	return 0;
}
