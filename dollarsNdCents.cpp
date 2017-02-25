/*dollarsNdCents.cpp
Feb 25, 2017
My__Boo
*/
#include <iostream>
using namespace std;
int main()
{

	int dollars,cents;
	double price;
	// This will be converted to $(ASCI equivalent) --implicit conversion
	char dollarSign = 36;

	cout<<"Enter the price: "<<endl;
	cin>>price;
	/*This dollars variable is equal to price value but since dollars is
	 *integer and it is on the left whatever the value after the decimal
	 *point will be ignore -- Implicit conversion
	*/
	dollars = price;
	// calculate the cents it should be the remaining value that been ignore
	cents  = price * 100 - dollars * 100;

	cout<<"The total dollars is :"<<dollarSign<<dollars<<" and has : "<<cents<<" cents ."<<endl;

return 0;
}
