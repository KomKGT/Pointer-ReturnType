#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//credit : https://www.ibm.com/docs/en/zos/2.2.0?topic=calls-pass-by-reference-c-only

void swapCPP(int &a,int &b)			// CPP ONLY !
{
	int temp = a; //a = 55 
	a = b;
	b = temp;
}
void swapC(int *c,int *d)			// C and CPP can use
{
	int temp = *c;
	*c = *d;
	*d = temp;
}
int main(int argc, char** argv) {
	
	/*CPP*/
	int A = 55,B = 6;
	cout<<"Before Swap"<<" A = "<<A<<" B = "<<B<<endl;
	swapCPP(A,B);
	cout<<"After Swap"<<" A = "<<A<<" B = "<<B<<endl;
	
	/*C*/
	int C = 100,D = 99;
	cout<<"Before Swap"<<" C = "<<C<<" D = "<<D<<endl;
	swapC(&C,&D);
	cout<<"After Swap"<<" C = "<<C<<" D = "<<D;
	return 0;
}
