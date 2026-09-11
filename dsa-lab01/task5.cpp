#include <iostream>
using namespace std;

void reverseArray(int array[], int left, int right){
    if(left>=right) return;
    swap(array[left], array[right]);
    reverseArray(array, left+1, right-1);
}

int main(){
    int array[6];
    cout<<"Enetr 6 numbers :: "<<endl;
    for(int i=0;i<6;i++) cin>>array[i];

    reverseArray(array, 0, 5);

    for(int i=0;i<6;i++) cout<<array[i]<<" ";
    return 0;
}
//here , we try to swap the first and last value then secodn and second last value and so on , until the complete array is swapped{boht mushkil}