#include <iostream>
using namespace std;

void simplesearch(int *arr, int l, int r, int val)
{
    int i;
    for(i=l;i<r+1;i++){
        if(arr[i] == val )
        {
            cout<<"congrats your value is present in the array"<<endl;
            return;
        }
    }
    cout<<"Sad bor, your valua aint in the array"<<endl;
    return;

}
int main()
{
    int arr[7]={1,3,10,2,4,7,5};
    int size = 7;
    simplesearch(arr,0,6,13);
    simplesearch(arr,0,6,10);
    return 0;
}