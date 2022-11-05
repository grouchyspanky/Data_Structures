using namespace std;

#include <iostream>

int main() {

    int num[3]={1,2,3};

    /*prints how much space this array takes*/
    std::cout<<sizeof(num)<<std::endl;

    /*for loop prints all vals of array*/
    for(int i=0; i<3; i++)
        std::cout<<num[i]<<std::endl;

    /*for each loop, iterates over elements of container*/
    for(int x:num)
    {
        std::cout<<x<<std::endl;    
    }

    std::cout<<"Enter in the size of an array you'd like\n";

    int arraySize;

    std::cin>>arraySize;

    int userArray[arraySize];
    
   userArray[0]= 1;

    for(int x:userArray)
    {
        std::cout<<x<<std::endl;
    }

   













}