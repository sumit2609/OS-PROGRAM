#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, rows, columns, sum = 0;
	
	cout << "\nPlease Enter the Matrix rows and Columns =  ";
	cin >> i >> j;
	
	int sumDgnalArr[i][j];
	
	cout << "\nPlease Enter the Matrix Items\n";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < j; columns++) {
			cin >> sumDgnalArr[rows][columns];
		}		
	}

 	for(rows = 0; rows < i; rows++)
  	{
  		sum = sum + sumDgnalArr[rows][rows];
  	}
  	
  	cout << "\nThe Sum of Diagonal Elements of a Matrix = " << sum;

 	return 0;
}
