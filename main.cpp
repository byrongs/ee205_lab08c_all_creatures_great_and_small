///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   13_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Animal.h"


int main() {
    Animal myFirstAnimal = Animal( "Felis catus" );
    myFirstAnimal.setGender( MALE );
    myFirstAnimal.setWeight( 19 ); // @todo Refactor to include Unit of Measure
    myFirstAnimal.printInfo();

    Animal mySecondAnimal = Animal("Canis lupus familiaris");
    mySecondAnimal.setGender( FEMALE);
    mySecondAnimal.setWeight( 20);
    mySecondAnimal.printInfo();
    return 0;
}



