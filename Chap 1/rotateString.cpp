#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<set>
using namespace std;
int main(int argc, char const *argv[])
{
	int isSubstring(string s1,string s2);
	bool checkRotation(string s1, string s2);
	//int answer = isSubstring("waterbottle","erbottlewaterbottlewat");
	//cout<<answer;
	cout<<std::boolalpha<<checkRotation("waterbottle","erbottlewat");
	return 0;
}

int isSubstring(string s1, string s2) 
{ 
	int M = s1.length(); 
	int N = s2.length(); 

	for (int i = 0; i <= N - M; i++) { 
		int j; 
		for (j = 0; j < M; j++) 
			if (s2[i + j] != s1[j]) 
				break; 

		if (j == M) 
			return i; 
	} 

	return -1; 
}

bool checkRotation(string s1,string s2){
	string temp = s2+s2;
	int answer = isSubstring(s1,temp);
	if(answer != -1)
		return true;
	else 
		return false;
}