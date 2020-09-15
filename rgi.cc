#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include "rgi.h"

using namespace std;

// Add needed constants
#define LOW 1
#define HIGH 10000
//vector<int> VEC_SIZE(200);
// Add code for genRndNums
void genRndNums(vector<int> &v)
{
	for (int i = 0; i < 200; ++i) 
	{
            v[i] = LOW + (rand() % HIGH);
        }		
}
// Add code for printVec
void printVec(const vector<int> &v)
{
	int count = 0;
	for(unsigned i = 0; i < v.size(); i++)
	{
		
		cout << setw(5) << v.at(i);
		count++;
		if(count > 11)
		{
			cout << endl;
			count = 0;
		}
	}
	cout << endl;
}

int main() 
{
// Declare vector v
	vector<int> VEC_SIZE(200);
// Generate random numbers to fill vector v	
	genRndNums(VEC_SIZE);
// Using STL sort sort v
	sort(VEC_SIZE.begin(), VEC_SIZE.end());	
// Print vector of sorted random numbers
	printVec(VEC_SIZE);
	return 1;
}
