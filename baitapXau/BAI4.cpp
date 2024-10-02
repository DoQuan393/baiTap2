#include <bits/stdc++.h>
using namespace std;
int main()
{
	ifstream inp("BAI14.INP");
	ofstream out("BAI4.OUT");
	
	int a,b;
	inp>>a;
	inp>>b;
	int tich=a*b;
	int cv=(a+b)*2;
	out<<cv<<endl;
	out<<tich;
	
	return 0;
}
