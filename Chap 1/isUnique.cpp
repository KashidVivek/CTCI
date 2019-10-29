#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<set>
using namespace std;

int main() {
	string isUnique_(string s);
	string isUnique(string s);
	string answer = isUnique_("aaaaaaaaaaaaa"); 
	cout<<answer;
	return 0;
}

string isUnique(string s){
	set<char>result;
	for(int i=0;i<s.size();i++){
		if(!result.count(s.at(i))){
			result.insert(s.at(i));
		}
		else{
			return "false";
		}
	}
	return "true";
}

string isUnique_(string s){
	char ch;
	for(int i=0;i<s.size();i++){
		ch=s.at(i);
		for(int j=0;j<s.size();j++){
			if(ch == s.at(j) && i != j){
				return "false";
			}
		}
	}
	return "true";
}