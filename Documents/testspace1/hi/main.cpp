#include <iostream>
#include <string>
#include <vector>
#include "testmonster.h"
#include "atk.h"
using namespace std;
int main()
{
	vector <string> v;
	string h = "See this wasnt that hard";
	v.push_back("ok");
	v.push_back("Ok");
	v.push_back("OK");
	v.push_back("*queue earrape*");
	v.push_back("*queue earrape*");
	v.push_back("*queue earrape*");
	v.push_back("*queue earrape*");
	v.push_back("*queue earrape*");
	v.push_back("*queue earrape*");
	v.push_back("*queue earrape*");
	for(int i = 0;i<10;i++)
	{
		cout<<"nice"<<endl;
		cout<<v[i]<<endl;
		
	}
	cout<<h;
	monst *mymonst = new monst();
	delete mymonst;
	return 0;
}
