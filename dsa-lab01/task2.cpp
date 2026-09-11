#include <iostream>
using namespace std;
int main(){
   int numbers[5];
   int total=0;
       int sz=(sizeof(numbers)/sizeof(numbers[0]));
cout<<"Enter the 5 numbers : "<<endl;
   for (int i=0;i<sz;i++){
       cin>>numbers[i];
       }
   for (int i=0;i<sz;i++){

       total+=numbers[i];
}
          cout<<"Total  ---  "<<total;
    return 0;
}
//the code help me revise how the array values can be summed uup