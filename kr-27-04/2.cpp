//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int x, int y){
	return (x>y);
}

int main() {

	ifstream fin("input.txt");

	int n;
	fin >> n;

	int s;
	fin >> s;

	vector <int> moneti(n,0);
	for (int i=0;i<n;i++){
		fin >> moneti[i];
	}

	fin.close();

	sort(moneti.begin(), moneti.end(), comp);

	for (int i=0;i<n;i++){
			cout << moneti[i] << ' ';
		}

	cout << endl;

	int x = s;
	int counter = 0;
	while(x>0){
		for(int i=0;i<n;i++){
			if (x>=moneti[i]){
				x -= moneti[i];
				counter++;
				break;
			}
		}
	}

	cout << counter;

	return 0;
}
