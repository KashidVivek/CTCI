#include<iostream> 
#include<limits.h> 
#include<vector>	
#include<algorithm>
using namespace std;
 
int editDistance(string X,string Y){
	int m = X.length()-1;
	int smallest(int x, int y, int z);
	int n = Y.length()-1;
	int ED[X.length()][Y.length()];
	for (int i = 0; i <= X.length()-1; ++i)
	{
		for (int j = 0; j <= Y.length()-1; ++j)
		{
			if(i==0) ED[i][j]=j;
			else if(j==0) ED[i][j]=i;
			else if(X[i-1] == Y[j-1]){
				ED[i][j] = ED[i-1][j-1];
			}else{
				ED[i][j] = 1 + smallest(ED[i-1][j],ED[i-1][j-1],ED[i][j-1]);
			}
		}
	}
	return ED[m][n];
}

int smallest(int x, int y, int z) {
  int smallest = 99999;
  if (x < smallest)
    smallest=x;
  if (y < smallest)
    smallest=y;
  if(z < smallest)
    smallest=z;

  return smallest;
}

int main() {
	int smallest(int x, int y, int z);
	cout<<editDistance("MARCH","CART");
	return 0; 
} 
