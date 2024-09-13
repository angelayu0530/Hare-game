//Angela Yu
//CSCI 135
//TONG YI
//PROJECT 3


#include "Tortoise.hpp"
#include <iostream>
using namespace std;
Tortoise :: Tortoise (){
    for (int i = 0; i < 5; i++){ // 50% 3 to the right
    patterns.push_back(3);
    }
    for(int i = 0; i < 2; i++){  // 20% 6 to the left
        patterns.push_back(-6);

    }
    for(int i = 0; i < 3;i++){ // 30% 1 to the right
    patterns.push_back(1);
    }
    position =0;
}
Tortoise :: Tortoise (int*arr , int size, int position){
  for(int i = 0; i < size; i++){
    this -> patterns.push_back(arr[i]);
  }
  this -> position = position;
}
Tortoise :: Tortoise (vector< int> patterns, int position){
     this -> patterns = patterns;
     this -> position = position;
}
void Tortoise :: move (){
     int track = rand () % patterns.size ();
    int steps = patterns[track];
     position = position + steps;
}
int Tortoise :: getPosition() const {
   return position;
}
void Tortoise :: setPosition(int position) {
  this -> position = position;
}
   


