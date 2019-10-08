// A naive solution for calculating sum of 
// geometric series. 
#include<bits/stdc++.h> 
using namespace std; 
  
// function to calculate sum of  
// geometric series 
float sumOfGP(float a, float r, int n) 
{ 
    float sum = 0;  
    for (int i = 0; i < n; i++) 
    { 
        sum = sum + a; 
        a = a * r; 
    } 
    return sum; 
} 
  
// driver function 
int main() 
{ 
    int a = 1; // first term 
    float r = 0.5; // common ratio 
    int n = 10; // number of terms 
  
    cout << sumOfGP(a, r, n) << endl; 
    return 0; 
} 
