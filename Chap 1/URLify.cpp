#include <bits/stdc++.h>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	string URLify(string URL);
	string result = URLify("quick brown fox jumped over the lazy dog");
	cout<<result;
	return 0;
}

string URLify(string URL){
	string answer="";
	for (int i = 0; i < URL.size(); ++i)
		{
			if(URL.at(i) == 32){
				URL.replace(i,1,"%20");
			}
		}
	return URL;	
}