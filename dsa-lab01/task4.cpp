#include <iostream>
using namespace std;
int main(){
    int array[8];
 cout<<"Enter 8 values :: "<<endl;
    for(int i=0;i<8;i++)
    {
       cin>>array[i];
    }
    int min=array[0];
    int max=array[0];
    int maxIndex=0;
    int minIndex=0;

    for(int i=0;i<8;i++)
    {
       if(array[i]>max)
       {
           max=array[i];
           maxIndex=i;
       }
       if(array[i]<min)
       {
           min=array[i];
           minIndex=i;
       }
    }
    cout<<"Max: "<<max<<" at index "<<maxIndex<<endl;
    cout<<"Min: "<<min<<" at index "<<minIndex<<endl;
    return 0;
}

//using the approach of minindex and maxindex, I leasrnt that the duplicate can be ignored if we don’t use equalto sign
//also i came to knwo that we get garbage values if i initializeed min and max before getting values for the

 