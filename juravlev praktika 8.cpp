#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	char *buff = new char;
	cin >> buff;
	ofstream fout("file.txt");
	fout << buff;
	fout.close();
	delete buff;
	return 0;
}