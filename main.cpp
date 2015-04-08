#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	const int MaxCow = 10;
	vector<int> v(MaxCow);
	int i = 0, j = 0;
	int total = 0;
	int NumOfCow;
	ifstream InFile("file.in", ios::in);
	for (i = 0; i < MaxCow; i++)
	{
		v.at(i) = 0;
	}
	InFile >> NumOfCow;
	while(InFile >> v.at(j))
	{
		j++;
	}
	sort(v.begin(), v.begin() + NumOfCow);
	for (i = NumOfCow - 1; i > NumOfCow - 6; i--)
	{
		total += v.at(i);
	}
	cout << total << endl;
}
