#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//http://www.functionx.com/cpp/examples/returnpointer.htm
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
	class saraly *p1 = new saraly;  //กรณีใช้ new สร้าง object เวลาเรียก function ต้องใช้ ->
	cout << p1->getsaraly()<<endl;  //output = 40.5
	cout << * p1->sell();		//output = 15.0
	return 0;
}
