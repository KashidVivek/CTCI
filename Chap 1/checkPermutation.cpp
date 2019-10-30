#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<set>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	string checkPermute(string first,string second);
	string result = checkPermute("DOG","GOD ");
	cout<<result;
	return 0;
}

string checkPermute(string first,string second){
	int freq_first[128]={0};
	int freq_second[128]={0};

	if(first.size()!=second.size()) return "false";

	for(int i=0;i<first.size();i++){
		//cout<<first.at(i);
		freq_first[first.at(i)]++;
	}

	for(int i=0;i<second.size();i++){
		freq_second[second.at(i)]++;
	}

	for (int i = 0; i < 128; ++i)
	{
		if(freq_first[i]!=freq_second[i]){
			return "false";
		}
	}
	return "true";
}