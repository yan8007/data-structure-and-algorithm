#include<iostream>
using namespace std;

int main()
{   int size;
    cout << "enter the size of square matrice  \n the size must be odd number:  " ;
    cin >> size;

    int matrix[size][size];
    cout << "enter elements of matrix" << endl;
    for(int outer=0; outer<size; outer++) {
        for(int inner=0; inner<size; inner++) {
            cin >>matrix[outer][inner];
        }
    }
    cout << " here is a"<< size<<" by"<< size<<" matrice" << endl;
    for(int outer=0; outer<size; outer++) {
        for(int inner=0; inner<size; inner++) {
            cout<<matrix[outer][inner]<<"  ";
        }
        cout<<endl;
    }

    int sum1=0,sum2=0,sum3=0,sum4=0;

    for(int i=0; i<size; i++) {
        int d1=(size/2);
        sum1+=matrix[i][d1];/* vertical sum of  elements
                         crossing the center
              */

        for(int j=0; j<size; j++) {
            if(i==j)
                sum2+=matrix[i][j];/*sum of elements on the left-top to
              right-bottom diagonal
              */
            if((i+j)==size-1)
                sum3+=matrix[i][j];/*sum of elements on the left-top to
              right-bottom diagonal
              */
        }
        int d2=(size/2);
        sum4+=matrix[d2][i];/* horizontal  sum of  elements
                         crossing the center
              */

    }
    cout<<"vertical sum of  elements crossing the center = "<<sum1<<endl;
    cout<<"sum of elements on the left-top toright-bottom diagonal="<<sum2<<endl;
    cout<<"sum of elements on the right-top to left-bottom diagonal="<<sum3<<endl;
    cout<<"horizontal  sum of  elements  crossing the center="<<sum4<<endl;

    return 0;
}