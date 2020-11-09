#include <iostream>

using namespace std;

//   Task 1: Using the new operator, allocate an integer array of user specified size (the user gives the size of the array as
//   input). Assign values to the array elements by taking user inputs and then print the values. Finally de-allocate the array
//   using the delete operator.

int main()
{
//cout << "Hello world!" << endl;
    int x,y;
    cout<<"What is the size of the array? ";
    cin >>x;
    cout<<"The size of the array is "<<x;

    int* dArr;            //  allocating memory for array.
    dArr = new int[x];

    for(int i=0;i<x;i++){   // This loop is used for taking array input
            cout<<"\nYour Input : ";
            cin >>y;
            dArr[i]=y;
    }

    for(int i=0;i<x;i++)
    {                           // this loop is for printing array
        cout<<dArr[i]<<endl;
    }

    delete[] dArr;  // delete operator is used for de-allocating memory.

    dArr = NULL;
    cout<<dArr[0]<<endl;


    return 0;
}

//Akmam Hasan
//ID-1911192642
