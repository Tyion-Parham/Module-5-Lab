#include "StatTool.h"
#include <iostream>
using namespace std;

int main()
{
	int nums[5] = { 6,1,8,5,9 };
	StatTool<int> intTool(nums);
	cout << "Max: " << intTool.max(nums) << "\n";
		//<< "Min: " << intTool.min() << "\n"
		//<< "Mean: " << intTool.mean() << "\n"
		//<< "Mode: " << intTool.mode() << "\n"
	//	<< "Median: " << intTool.median() << "\n";
}