#include<iostream> 
#include<limits.h> 
#include<vector>
#include<algorithm>
#define R 3 
#define C 3 
using namespace std;
 
int maxLength(std::vector<int> arr){
	std::vector<int> LIS;
	for (int i = 0; i < arr.size(); ++i)
	{
	 	LIS.push_back(1);
	}

	for (int i = 1; i < arr.size(); ++i)
	 {
	 	for (int j = 0; j < i; ++j)
	 	{
	 		if(arr[j] < arr[i] && LIS[i] < LIS[j] + 1){
	 			LIS[i] = LIS[j] + 1 ;
	 		}
	 	}
	 }
	return *std::max_element(LIS.begin(), LIS.end()); 
}
int main() {
	vector<int> arr = {10,22,9,33,21,50,41,60};
	cout<<maxLength(arr);
	return 0; 
} 
