#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter size of first matrix in order rows and column: ";
    cin>>m>>n;                              // enter value for row and column with space
    cout<<"Enter array elements: ";
    
    int matrix1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cin>>matrix1[i][j];             // matrix 1 elements
    }
    
    int x,y;
    cout<<"Enter size of second matrix in order rows and column: ";
    cin>>x>>y;                              // enter value for row and column with space
    cout<<"Enter array elements: ";

    int matrix2[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)
            cin>>matrix2[i][j];             // matrix 2 elements
    }

    cout<<endl;

    cout<<"Matrix 1 is: "<<endl;

    for(int i=0;i<x;i++){                   // print matrix 1
        for(int j=0;j<y;j++)
            cout<<matrix1[i][j]<<"\t";
        cout<<endl;
    }

    cout<<"Matrix 2 is: "<<endl;

    for(int i=0;i<x;i++){                   // print matrix 2
        for(int j=0;j<y;j++)
            cout<<matrix2[i][j]<<"\t";
        cout<<endl;
    }

    cout<<endl;

    if(m!=x||n!=y){                         // condition for matrix sum
        cout<<"Sum of matrices is not possible!";
        return 0;
    }

    cout<<"Sum of the matrices is: "<<endl;

    for(int i=0;i<x;i++){                   // print matrix sum
        for(int j=0;j<y;j++)
            cout<<matrix1[i][j]+matrix2[i][j]<<"\t";
        cout<<endl;
    }
    
    return 0;
}