//Program to check triangle is equilateral, isosceles ot scalene
//Author : Nishant Sabbarwal
#include<iostream>
using namespace std;  
  
void checkTriangle(int x, int y, int z) 
{ 
      
    // Check for equilateral triangle 
    if (x == y && y == z) 
        cout << "Equilateral Triangle"; 
  
    // Check for isoceles triangle 
    else if (x == y || y == z || z == x) 
        cout << "Isoceles Triangle"; 
  
    // Otherwise scalene triangle 
    else
        cout << "Scalene Triangle"; 
} 
  

int main() 
{ 
      
    
    int x = 8, y = 7, z = 9; 
      
    checkTriangle(x, y, z); 
} 
