#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<set>
using namespace std;

int main(int argc, char const *argv[])
{
	string checkPermute(string first,string second);
	//String checkPalindrome(string s);
	void permute(string a, int l, int r);
	string a = "taco cat";
	//permute(a,0,a.size());
	//cout<<checkPalindrome("taco cat");
	return 0;
}

void permute(string a,int l, int r){
	if(l==r) cout<<a<<endl;
	else
		for (int i = l; i <= r; ++i)
		{
			/* code */
			swap(a[l],a[i]);
			permute(a,l+1,r);
			swap(a[l],a[i]);
		}
}

string checkPalindrome(string s){
	int l=0;
	int r = s.size();
	while(l<r){
		if(s[l++]!=s[r--]){
			return "false";
		}
	}
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