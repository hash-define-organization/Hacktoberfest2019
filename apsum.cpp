#include<bits/stdc++.h> 
using namespace std; 
  
// This is a Function to find sum of series. 
float sumOfAP(float a, float d, int n) 
{ 
    float sum = 0; 
    for (int i=0;i<n;i++) 
    { 
        sum = sum + a; 
        a = a + d; 
    } 
    return sum; 
} 
  
// This is a Driver function 
int main() 
{ 
    int n = 20; 
    float a = 2.5, d = 1.5; 
    cout<<sumOfAP(a, d, n); 
    return 0; 
} 
