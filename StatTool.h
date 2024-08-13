#pragma once
#include <iostream>

template <class T>
class StatTool
{
private:
public:
	StatTool<T>() {};
	StatTool<T>(T n[]) : nums(n) {};
	T max(T n[]);
	T min();
	T mean();
	T mode();
	T median();
};

template <class T>
T StatTool<T>::max(T n[])
{
	T max;
	for (int i = 0; i < n.size(); i++)
	{
		if (i == 0)
			max = n[i];

		if (n[i] > max)
			max = n[i];
	}
	return max;
}

template <class T>
T StatTool<T>::min()
{
	T min;
	for (int i = 0; i < nums.size(); i++)
	{
		if (i == 0)
			min = nums[i];

		if (nums[i] < min)
			min = nums[i];
	}
	return min;
}

template <class T>
T StatTool<T>::mean()
{
	T mean;
	T total = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		total += nums[i];
	}

	mean = total / nums.size();
	return mean;
}

template <class T>
T StatTool<T>::mode()
{
	T mode = 0;

	return mode;
}

template <class T>
T StatTool<T>::median()
{
	T median;
	int midpoint;
	midpoint = nums.size() / 2;
	median = nums[midpoint];
	return median;
}