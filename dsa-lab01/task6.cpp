#include <iostream>
using namespace std;
int main(){
    int array[10];
    cout<<"Enter ten numbers in the array :: "<<endl;
    for(int i=0;i<10;i++) 
    {cin>>array[i];
    }
    int soFar=0; // number of unique values placed so far
    for(int i=0;i<10;i++){
        bool found=false;
        for(int j=0;j<soFar;j++){
            if(array[j]==array[i]){
                found=true;
                break;
            }
        }
        if(!found){
            swap(array[soFar], array[i]);
            soFar++;
        }
    }
    for(int i=0;i<soFar;i++) cout<<array[i]<<" ";
    cout<<"\nCount: "<<soFar;
    return 0;
}