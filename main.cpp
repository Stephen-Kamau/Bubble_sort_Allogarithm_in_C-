#include <iostream>

using namespace std;
#include "bubbleSort.h"

int main()
{
    cout << "Bubble Sort program :\n" << endl;
    bubbleSort obj;

    obj.fetchData();
    cout<<"\nUnsorted data : ";
    obj.dispalyArray();
    obj.sortAscending();
    cout<<"\nSorted data in ascending order : ";
    obj.dispalyArray();
    obj.sortDescending();
    cout<<"\nSorted data in ascending order : ";
    obj.dispalyArray();
    cout<<"\nDisplay by reversing an array : ";
    obj.reverseArraySort();
    return 0;
}
