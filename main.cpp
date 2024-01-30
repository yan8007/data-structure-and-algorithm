#include <iostream>
using namespace std;
int main(){
    int length,key;
    cout <<"Enter the length of th array: ";
    cin >> length;
    int A[length];
    for(int x: A){
        cin>>x;
    }
    cout << "Enter the key: ";
    cin >> key;
    for( int i = 0; i < length ; i++ )
    {
        if( key == A[ i ] ) {
            cout << "key found at index" << i;
            return 0;
        }//if search is successful it ends here
    }
    cout << "key not found";// if search unsuccessful returns -1
}