#include <iostream>

using namespace std;

//  Task 2: Using the new operator, allocate a two dimensional character array. Again the number of rows and columns
//  are going to be provided by the user as input. All of the rows are the same size. Take character strings as input from
//  the user and then print the strings. Finally de-allocate the array using the delete operator.

int main()
{
    int x,y; char z;
    cout<<"What is the row of the array? ";
    cin >>x;
    cout<<"\nWhat is the column of the array? ";
    cin>>y;

    char** dArr = new char*[x]; // this loop allocate 2d array in memory
    for(int i=0; i<x; i++){
        dArr[i] = new char[y]; // now it works as dArr[x][y]
    }

    for(int i=0;i<x;i++){      // This loop is used for taking array input
        for(int j=0; j<y; j++){
            cout<<"\nYour Input : ";
            cin >>z;
            dArr[i][j]=z;
        }
    }

    for(int i=0;i<x;i++){
            for(int j=0; j<y; j++)
        {                           // this loop is for printing 2d array
        cout<<dArr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<x; i++){  // this loop is for de-allocate memory using delete operator.
        delete[] dArr[i];
        delete[] dArr;
    }

    dArr = NULL;
    cout<<dArr[0][0]<<endl;

    return 0;
}

// Akmam Hasan
// ID- 1911192642


