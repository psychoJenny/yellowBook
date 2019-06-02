#include <iostream>
#include <cmath>
using namespace std;

float mean(float arg[], size_t size);
float variance(float arg[], size_t size);
float standdev(float arg[], size_t size);


float mean(float arg[], size_t size)	//	Find mean of data in array
/*	1.0	
	psychoJenny
	5-18-19
	Pre:	Data in array and size of array are input parameters
	Post:	Return mean of data
	Uses:	none
*/
{
	int intsize = size;			//	change data type
	float floatsize = size;		//	"
	float sum = 0;				//	default sum value

	for (int i = 0; i < intsize; i++)	//	sum loop
		sum = sum + arg[i];
	float mean = (sum / floatsize);		//	calculate mean

	return mean;
}

float variance(float arg[], size_t size)	//	Find variance of data in array
/*	1.0	
	psychoJenny
	5-21-19
	Pre:	Data in array and size of array are input parameters
	Post:	Return variance of data
	Uses:	mean()
*/
{
	int intsize = size;			//	change data type
	float floatsize = size;		//	"
	float square[intsize];		//	array to hold squared data

	for (int i = 0; i < intsize; i++)	//	square loop
		square[i] = arg[i] * arg[i];

	float meanofsquares = mean(square, size);		//	calculate variance
	float meanV = mean(arg, size);
	float squareofmean = meanV * meanV;
	float variance = meanofsquares - squareofmean;	//	"

	return variance;
}

float standdev(float arg[], size_t size)	//	Find variance of data in array
/*	1.0	
	psychoJenny
	5-21-19
	Pre:	Data in array and size of array are input parameters
	Post:	Return standard deviation of data
	Uses:	variance(), mean()
*/
{
	float varianceS = variance(arg, size);	//	find standdev
	float standdev = sqrt(varianceS);			//	"

	return standdev;
}



