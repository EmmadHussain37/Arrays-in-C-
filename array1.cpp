//simple array basicc

// #include<iostream>
// #include<ostream>
// using namespace std;

// int main(){

// int i;
// int array[6]={2,3,4,5,6,2};

// for (i=0;i<6;i++){
    
//     cout<<"array elements"<<array[i]<<endl;
// }
// return 0;
// }


//2d array:(Static array)


// #include<iostream>
// #include<ostream>
// using namespace std;
// int main(){

//     int i;
//     int j;
//     int arr[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

//     cout<<"2d array :"<<endl;

//     for(i=0;i<4;i++){
//         for (j=0;j<2;j++){
//             cout<<arr[i][j]<<"  ";
//         }
//         cout<<endl;
//     }

// return 0;
// }


//2d array (Dynamic array)

#include<iostream>
#include<ostream>
using namespace std;
int main(){

    int row,col,i,j,array[10][10];

    cout<<"enter row and col size"<<endl;
    cin>>row>>col;

    cout<<"array dimensions"<<row*col<<"\n";

    cout<<"Input array elements"<<endl;

    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
        cin>>array[i][j];
        }
    }

    cout<<"your array is :"<<endl;

    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
        cout<<array[i][j];
        }
        cout<<endl;
    }

    cout<<"array elemnts with index"<<endl;

    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
        cout<<"Array ["<<i<<"]"<<"["<<j<<"]"<<array[i][j]<<"     ";
        }
        cout<<endl;
    }
    



return 0;
}
