#include <iostream>

using namespace std;

int main(){

    int numbers[]={2,4,6,8,10};

    numbers[2]=7;

    int sz=(sizeof(numbers)/sizeof(numbers[0]));

    for(int i=0;i<sz;i++)

    {

        cout<<numbers[i]<<" ";

    }return 0;

}

//I revised the basic indexing of arrays here