//Angela Yu
//CSCI 135
//TONG YI
//PROJECT 3


#include "Road.hpp"
#include <iostream>
using namespace std;
Road :: Road (){
    for (int i =0; i < 70; i++){
       blocks.push_back(' ');
    }
    this -> blocks = blocks;
   
}
Road :: Road (int length){
    if (length < 1){
        length= 70;
    }
    for (int i = 0; i < length;i++){
       blocks.push_back (' ');
    }
   
}
void Road:: mark (int index, char ch){

       blocks[index] = ch;

 }
 void Road :: display () const  {
   for(int i =0; i <  blocks.size (); i++){
    cout <<  blocks[i];
   }
   cout << endl;
 }
 int  Road :: length() const {
    return  this -> blocks.size();
 }


       

