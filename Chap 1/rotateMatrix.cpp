#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<set>
const int N = 4;
using namespace std;
int main(int argc, char const *argv[])
{
	int n = 3;
	void rotateMatrix(int arr[][N],int N);
	int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	rotateMatrix(arr,N);
	return 0;
}

void rotateMatrix(int arr[][N],int N){
	cout<<"Original Matrix:"<<endl;
	for(int i = 0 ;i < N; i++){
		for (int j = 0; j < N; ++j)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}

	cout<<" Anti clockwise Rotation:"<<endl;
	for(int i = N-1 ;i >= 0; --i){
		for (int j = 0; j < N; j++)
		{
			cout<<arr[j][i];
		}
		cout<<endl;
	}

}