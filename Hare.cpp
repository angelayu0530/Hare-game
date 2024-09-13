//Angela Yu
//CSCI 135
//TONG YI
//PROJECT 3


#include "Hare.hpp"
#include <iostream>
using namespace std;
Hare :: Hare (){
    patterns.push_back(0);
    patterns.push_back(0);
    patterns.push_back(9);
    patterns.push_back(9);
    patterns.push_back(-12);
    patterns.push_back(1);
    patterns.push_back(1);
    patterns.push_back(1);
    patterns.push_back(-2);
    patterns.push_back(-2);


    
    position = 0;
}

 Hare :: Hare(vector<int> patterns, int position){
   this -> patterns = patterns;
   this -> position = position;
 }

 Hare :: Hare(int* arr, int size, int position){
   for (int i =0; i < size; i++){
    this -> patterns.push_back(arr[i]);
   }
   this -> position = position;
 }

void  Hare ::  move(){
 int track = rand () % patterns.size ();
 int steps = patterns[track];
 position = position + steps;
} 
int Hare ::  getPosition() const {
    return position;
}
void Hare :: setPosition(int position) {
    this -> position = position;
}
