#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<set>
const int n=4;
using namespace std;
int main(int argc, char const *argv[]){	

	int arr[][4]={{1,0,3,4},{5,6,7,8},{9,1,0,2},{8,4,9,5}};
	void make_zero(int arr[][n],int n);
	make_zero(arr,n);
	return 0;
}

void make_zero(int arr[][n],int n){
	int row[n]={0};
	int col[n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j] == 0){
				row[i]=1;
				col[j]=1;
			}
		}
	}
 for (int i = 0; i < n; ++i)
 {
 	if(row[i] == 1){
 		cout<<"Row: "<<i<<endl;
 	}
 	if(col[i] == 1){
 		cout<<"col: "<<i<<endl;
 	}
 }

for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(row[i] == 1 || col[j] == 1){
				arr[i][j]=0;
			}
		}
	}

for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}
