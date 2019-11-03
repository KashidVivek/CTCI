#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<set>
using namespace std;
int main(int argc, char const *argv[])
{
	
	void charCount(string s);
	charCount("aabcccccaaazzzzza");
	return 0;
}

void charCount(string s){
	int count=1;
	int i = 0;
	while(i < s.size()){
		if(s[i] == s[i+1]){
			count++;
			i++;
		}
		else{
			cout<<s[i]<<count;
			count=1;
			i++;
		}
	}
}