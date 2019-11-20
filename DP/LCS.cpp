#include<iostream> 
#include<limits.h> 
#include<vector>
#include<algorithm>
#define R 3 
#define C 3 
using namespace std;
 
int maxLength(string X,string Y){
	int m = X.length()-1;
	int n = Y.length()-1;
	int LCS[X.length()][Y.length()];
	for (int i = 0; i <= X.length()-1; ++i)
	{
		for (int j = 0; j <= Y.length()-1; ++j)
		{
			if( i==0 || j==0)
				LCS[i][j] = 0;
			else if(X[i-1] = Y[j-1])
				LCS[i][j] = LCS[i-1][j-1] + 1;
			else
				max(LCS[i-1][j],LCS[i][j-1]);
		}
	}
	return LCS[m][n];
	 
}
int main() {
	cout<<maxLength("AGGTAB","GXTXAYB");
	return 0; 
} 
