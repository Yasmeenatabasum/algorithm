#include <stdio.h>
#include<string.h>
int max(int a, int b) 
{
	if(a>b)
	return a;
	else
    return b;
 }

int lcs(char X[], char Y[], int m, int n,int table[][])
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m - 1] == Y[n - 1])
		return table[m][n] = 1 + lcs(X, Y, m - 1, n - 1,table);

	if (table[m][n] != -1) {
		return table[m][n];
	}
	return table[m][n] = max(lcs(X, Y, m, n - 1,table),lcs(X, Y, m - 1, n),table);
}

int main()
{
	char X[] = "AGGTAB";
	char Y[] = "GXTXAYB";
    int m = strlen(X);
	int n = strlen(Y);
	int table[m+1][n+1];
	printf( "Length of LCS is %d ",lcs(X, Y, m, n,table));
    return 0;
}

