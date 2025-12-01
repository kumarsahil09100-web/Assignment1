#include <iostream>
using namespace std;
int main() {
//     // Write C++ code here
// // int num;
// // cout << " number:";
// // cin >>num;
// // if (num >0) {
// //     cout << "Number" <<  num <<"is positive."<<endl;
// // }
// // else {
// //     cout <<"number" << num << "is negative." << endl ;
// // }
// int age;
// int age=25;
// cout << age << endl;
// char grade='a';
// cout << grade << endl;
// float pi=3.14;
// cout<<pi<<endl;
// char grade='a';
// float value=grade;
// cout<<value<<endl;
// double price=100.9;
// int newprice=int price;
// cout<<newprice<<endl;
// int age;
// cout<<"enter the age:";
// cin>>age;
// cout<<"your age is:"<<age<<endl;
// int a= ,b;
// cout <<"enter a:";
// cin>>a;
// cout <<"enter b:";
//  int age;
//     cout<<"enter the age:";
//     cin >>age;
//     if(age>=18){
//         cout<<"eligible for voting\n";
//     }else{cout<<"not eligible for voting";}
//     int n;
//     cout <<"enter the value of n:";
//     cin >>n;
//     if(n/2==0){
//         cout<<"n is even";
//     }else{cout<<"n is odd";}

// char ch;
// cout<<"enter char:";
// cin>>ch;
// if(ch>='a'&& ch<='z'){
//     cout<<"lower case";
// }else{cout<<"upper case";}
//     // Ask user to enter a year
//     cout << "Enter the year: ";
//     cin >> year;

//     // Check leap year condition
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         cout << year << " is a leap year." << endl;
//     } else {
//         cout << year << " is not a leap year." << endl;
//     }
//      for (int  i=1 ;i<=4 ;i++)
//     {
//         cout <<"*****"<<endl;
//     }
//     // print * in increasing order
//     for (int i=1;i<=5 ;i++){
//     for(int j=1;j<=i;j++){
//     cout<<"*";
//     }
//     cout<<endl;
//     }
//     int n=6;
//     for (int i=1;i<=5 ;i++){
//     for(int j=1;j<=n-i;j++){
//     cout<<j<<" ";
//     }
//     cout<<endl;
//     }

//     //other code
//      for (int i=1;i<=5 ;i++){
//     for(int j=1;j<=5;j++){
//     cout<<i<<" ";
//     }
//     cout<<endl;
//     }
//     int n=0;
//     for (int i=1;i<=5 ;i++){
//     for(int j=1;j<=n+i;j++){
//     cout<<i<<"    ";
//     }
//     cout<<endl;
//     } 
// //     1    
// // 2    2    
// // 3    3    3    
// // 4    4    4    4    
// // 5    5    5    5    5    
// //out put

int n;
cout << "Enter A Number: ";
cin>> n;
int count=0;

if(n<0){
    n=-n;

}


if(n==0){
    count=1;
}

else{
    for(;n>0; n=n/10){
        count++;
    }

}

cout<<"The Number Of Digits Is:"<<count;

    return 0;
}