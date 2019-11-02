
//class definition

class bubbleSort
{
private:
    int arraySort[10],i ,pass,x;
    //x is used to assist in swapping
    //pass is used to iterate the number of times in order to make
    //the array sorted as required i.e until a worse case scenario is attained


public:
    void fetchData();
    void sortAscending();
    void sortDescending();
    void dispalyArray();
    void reverseArraySort();//reverses the array from the previous function
};
