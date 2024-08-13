#include "StatTool.h"

template <class T>
T StatTool<T>::max()
{
	T max;
	for (int i = 0; i < sizeof(numArray); i++)
	{
		if (i == 0)
			max = numArray[i];

		if (numArray[i] > max)
			max = numArray[i] 
	}
	return max;
}

template <class T>
T StatTool<T>::min()
{
	T min;
	for (int i = 0; i < sizeof(numArray); i++)
	{
		if (i == 0)
			min = numArray[i];

		if (numArray[i] < min)
			min = numArray[i]
	}
	return min;
}

template <class T>
T StatTool<T>::mean()
{
	T mean;
	T total = 0;
	for (int i = 0; i < sizeof(numArray); i++) 
	{
		total += numArray[i];
	}

	mean = total / sizeof(numArray);
	return mean;
}

template <class T>
T StatTool<T>::mode()
{
	T mode;

	return mode;
}

template <class T>
T StatTool<T>::median()
{
	T median;
	int midpoint;
	midpoint = sizeof(numArray) / 2;
	median = numArray[midpoint];
	return median;
}