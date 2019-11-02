//class implimentation
#include <iostream>
#include "bubbleSort.h"
using namespace std;
void bubbleSort::fetchData()
{
    cout<<"Enter the elements into the array :\n";
    for (i=0; i<10; i++)
    {
        cout<<"Enter element at cell "<<i+1 <<" : ";
        cin>>arraySort[i];
    }
}

void bubbleSort::dispalyArray()
{
    //display both arrays in unsorted manner and sorted in both styles
    for (i=0; i < 10; i++)
    {
        cout<<arraySort[i]<<" ";
    }
}

void bubbleSort::sortAscending()
{
    for (pass=1;  pass<=9; pass++)
    {
        for (i=0; i<9; i++)
        {
            if (arraySort[i]>arraySort[i+1])
            {
                //swapping method into ascending order
                x = arraySort[i];
                arraySort[i] = arraySort[i+1] ;
                arraySort[i+1]=x;
            }
        }
    }
}


void bubbleSort::sortDescending()
{
    for (pass=1;  pass<=9; pass++)
    {
        for (i=0; i<9; i++)
        {
            if (arraySort[i]<arraySort[i+1])
            {
                //swapping method to descending order
                x = arraySort[i];
                arraySort[i] = arraySort[i+1] ;
                arraySort[i+1]=x;
            }
        }
    }
}

void bubbleSort::reverseArraySort()
{
    for (i=9; i>-1; i--)
    {
        cout<<arraySort[i]<<" ";
    }
}



















