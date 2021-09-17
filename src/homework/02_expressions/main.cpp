//write include statements
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cin;  using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	cout<< "type number: ";
	cin>>meal_amount;

	double tip_rate;
	cout<<" enter tip rate ";
	cin>>tip_rate;

	double tip_amount;
	double tax_amount;
	double total;

	get_sales_tax_amount(meal_amount);
	get_tip_amount(tip_rate);

	return 0;
}
