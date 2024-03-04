
// LTCB TINH SO THOC TREN BAN CO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int soo, sothoc, tongthoc = 0;
	cout << "nhap so 0:";
	cin >> soo;
	for (int i = 1; i < soo; i++) {
		tongthoc += pow(2, i); 
	}
	cout << "tong so thoc co tren cac o la:" << tongthoc << endl;
	return 0;
}
