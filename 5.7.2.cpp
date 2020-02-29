#include<iostream>
struct month{
	char const *name;
	int length;
};
int const n_month=12;
month const Month[n_month]={{"january",31},{"february",28},{"march",31},{"april",30},{"may",31},{"june",30},{"july",31},{"august",31},{"september",30},{"october",31},{"november",30},{"december",31}};
int main()
{
	for(int i=0;i!=n_month;i++)
	{
		std::cout<<Month[i].name<<"\t";
		std::cout<<Month[i].length<<"\n";
	}
	return 0;
}
