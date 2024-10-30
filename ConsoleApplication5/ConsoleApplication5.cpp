#include <iostream>
#include <string>
#include<windows.h>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	ofstream fout;
	ifstream fin;
	//fout.open("file.txt");
	//fout.close();
	fin.open("file.txt");
	int p = 0;
	int n = 1;
	while (!fin.eof())
	{ char c;
		fin.get(c);
		if (c == ' ')
		{ p++; }
		if (c == '\n')
		{ n++; }
	}

	//cout << p << " " << n;

	fin.close();
	
	fin.open("file.txt");
	/*
	vector<int> v1;
	while (!fin.eof())
	{
		int s;
		fin >> s;
		v1.push_back(s);
	}
	*/
	fin.close();
	fin.open("file.txt");
	
	vector<vector<int>> v2d;
	int array[2][13];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			fin >> array[i][j];
			cout << array[i][j] << " ";
		}
		cout << endl;
	}


	fin.close();
	 
}