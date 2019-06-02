#include "standdev.h"


float data[] = {89, 45, 23, 65, 6, 76, 39, 1, 63, 80, 94, 71, 1, 52, 51, 94, 14, 71, 69, 63};	//	data to be used

int main()	//	Print standard deviation of data array
/*	1.0	
	psychoJenny
	5-18-19
	Pre:	Data in array
	Post:	Print result
	Uses:	average(), variance(), standdev()	*/
{
	size_t n = sizeof(data)/sizeof(data[0]);	//	n = number of elements in array

	float resultmean = mean(data, n);		//	call average function
	cout << "Average: " << resultmean << endl;	//	print

	float resultvar = variance(data, n);	// 	call variance function
	cout << "Variance: " << resultvar << endl;	//	print
	
	float resultstanddev = standdev(data, n);	// 	call standard deviation function
	cout << "Standard Deviation: " << resultstanddev << endl;	//	print
}