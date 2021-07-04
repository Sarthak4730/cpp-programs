#include<time.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>

/*
 Maximum number of digits in output
*/
#define MAX 1000

/*
here we find the factorial of a big number and return it in a string
format
*/

string factorial(long long n)
{
	if(n > MAX) {
	   cout<< "Integer overflow" << endl;
	   return "";
	}

	long long count;
	long double sum = 0;

	//Base case
	if(n == 0)
	  return "1";

	// Calculate the sum of logarithminc values
	for( count =1; count <= n; count++){
	 sum += log(count);
	}
	// storing huge number as string

	string result = to_string(round(exp(sum)));
	return result;
  }

  void main()
  {
   // clock_t tStart = clock();
    string str;
    str = factorial(100);
    count<< "Factorial is"<<str<<endl;

    // Time taken
    //cout<< "Time taken: "<< setprecision(10)
      //	<< ((double)(clock()- tStart)/ CLOCKS_PER_SEC)
	//<< " s" << endl;
  getch();
 }