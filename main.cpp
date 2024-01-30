#include "iostream"

using namespace std;
int main(){
    int array_size;//size of the array
    cout<<"enter the sizeof array:\t";
    cin>>array_size;
    int array[array_size];//array
    int sum = 0;//sum of the number of the arrays
    //receiving number from the users
    for(int i = 0; i < array_size; i++){
        cout<<"enter the " << i + 1 << " number:";
        cin >> array[i];
    }
    //adding the number until 0 is reached and
    //showing the result

    for(int i = 0,j = 1; i < array_size; i++){//adding j for number of summation in every zero the incounter
        sum += array[i];//adding the element
        if (array[i] == 0) { //checking if array list reach at zero
            cout <<"the "<< j << " sum = " << sum;//showing the result
            sum = 0;//returning zero to its original form
        }
    }
    cout << "\nthe last sum = " << sum;//showing the resul at the end


}