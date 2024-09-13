//Angela Yu
//CSCI 135
//TONG YI
//PROJECT 3


#include "Competition.hpp"
#include <iostream>
using namespace std;

Competition :: Competition (){
   rabbit = Hare();

   tor = Tortoise ();

   lane = Road ();

}

Competition :: Competition (Hare coney, Tortoise cooter,int length){
   rabbit = coney;

   tor = cooter;

   lane = Road(length);
    
}
void Competition :: play (){
  int round = 1; // counts rounds

  bool game = false;

  while (game == false){ // when game is false 

    cout << "round  " << round << ":" ;    //prints the rount
     rabbit.move();  //moves rabbit

    tor.move();  //moves tor

    if (rabbit.getPosition() < 0){ // checks if < 0, will move hare back to 0
      rabbit.setPosition (0);
    }

    if (rabbit.getPosition() > lane.length()-1){ // checks if > n-1, will move back n-1
      rabbit.setPosition(lane.length()-1);

    } 
     if(tor.getPosition() < 0 ){ // does same for tor

       tor.setPosition(0);
    }
    
   if (tor.getPosition() > lane.length ()-1){ // does same for tor
       tor.setPosition(lane.length()-1);

    }
     
   
    lane.mark (rabbit.getPosition(), 'H'); //marks rabbit

    lane.mark (tor.getPosition(), 'T'); // marks tor 

    lane.display();        //displays
    
    if ( rabbit.getPosition() == tor.getPosition()){  //if statement for bite
      cout << "Tortoise bites hare !" << endl;
    }
    if(tor.getPosition() >= lane.length()-1 && tor.getPosition() > rabbit.getPosition()){ // if statement for if tortoise wins
      cout << "Yay! Tortoise wins! " << endl;
      game = true;
    }
   if (rabbit.getPosition() >= lane.length()-1 && rabbit.getPosition() > tor.getPosition() ){ // if statements for hare wins

      cout << "Yuck. Hare wins." << endl;
      game = true;
    }

    if ( tor.getPosition() == lane.length() && rabbit.getPosition () == lane.length() ) {
      cout << "it is a tie" << endl; // if it is a tie

      game = true;
    }
    
    lane.mark (rabbit.getPosition(),' ');
    lane.mark (tor.getPosition(), ' ' );

    round ++;
  }

}
