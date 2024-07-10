// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void printer(string str)
// {
//     int n=str.length();
//     int result=0;
//     for(auto x:str)
//     {
//         int temp=x-'A';
//         temp=26-temp;
//         result=result+temp;
//     }
//     cout <<"Sum is "<<result<<endl;
//     int temp;
    

// }
// int main()
// {
//     string str1 ="CALIFORNT";
//     string str2="SWIZERLINDF";
//     printer(str1);
//     printer(str2);
//     printer("CAMWENBERG");
//     return 0;
// }
#include<iostream> 
using namespace std;
int main()
{
    float Amount;
    float Calculate(float P = 5.0, int N = 2, float R = 2.0);
    Amount = Calculate(); 
    cout<< Amount << endl; 
    return 0;
}

float Calculate(float P, int N, float R)
{
    int Year = 1;
    float Sum = 1 ;
    Sum = Sum * (1 + P * ++N * R);
    Year =  (int)(Year + Sum);
    return Year; 
}