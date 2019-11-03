#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<set>
using namespace std;

int main(int argc, char const *argv[])
{
	bool checkEdits(string one,string two);
	bool answer = checkEdits("pale","ple");
	cout<<std::boolalpha<<answer;
	return 0;
}

bool checkEdits(string one, string two){
	bool checkReplace(string one,string two);
	bool checkOther(string one, string two);
	if(one.size() == two.size()) return checkReplace(one,two);
	if((one.size() + 1 )== two.size()) return checkOther(one,two);
	if((one.size() - 1 )== two.size()) return checkOther(two,one);
	else return false;
}

bool checkReplace(string one, string two){
	bool diff = false;
	for(int i=0;i<one.size();i++){
		if(one.at(i) != two.at(i)){
			if(diff) return false;
			diff = true;
		}
	}
	return true;
}

bool checkOther(string one , string two){
	int index1=0,index2=0;
	while(index2 < two.size() && index1 < one.size()){
		if(one.at(index1) != two.at(index2)){
			if(index1!=index2) return false;
			index2++;
		}
		else{
			index1++;
			index2++;
		}
	}
	return true;
}