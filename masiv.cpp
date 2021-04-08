#include <iostream>
 using namespace std;
int main()

{
    int max;
    int total_zero = 0;
 
    cout<<"Enter total number of elements ";
    cin>>max;
 
    int array[max];
 
    for (int i = 1; i < array[max]; i++) {
       cout<<"Enter value for number "<<i<<" ";
        cin>>array[i];
 
        if (array[i] == 0) {
            total_zero++;
           cout<<array[i]<<"\n";
        }
    }
    cout<<"There is a total number of "<< total_zero <<" zeroes.";
return 0;
}
