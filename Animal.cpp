///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   13_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Animal.h"

using namespace std;

const string Animal::kingdom = "Animalia" ;

Animal::Animal(const string &newSpecies) : species(newSpecies) {
    Animal::species = newSpecies;
}


Animal::Animal(const string &species, Gender gender) : species(species), gender(gender) {


}

Animal::Animal(const string &species, Gender gender, float newWeight) : species(species), gender(gender) {
    setWeight(newWeight);

}


Animal::Animal(const string &species, float newWeight) : species(species), weight(newWeight) {
    setWeight(newWeight );

}


const string &Animal::getKingdom() {
    return kingdom;
}

const string &Animal::getSpecies() const {
    return species;
}


Gender Animal::getGender() const {
    return gender;
}

void Animal::setGender(Gender gender) {
    Animal::gender = gender;
}

float Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(float newWeight) {
    if( !validateWeight( newWeight)) {
        throw invalid_argument( "Weight must be < 0");
    }
    Animal::weight = newWeight;
}

void Animal::printInfo() {
    cout << "Animal Fields" << endl;
    cout << " Kingdom = [" << getKingdom() << "]" << endl;
    cout << " Species = [" << getSpecies() << "]" << endl;
    cout << " Weight = [" << getWeight() << "]" << endl;
    cout << "Gender = [" << getGender() << "]" << endl;

}

bool Animal::isValid() {
    if( !validateWeight(weight ))
    return false;

    return true;
}

bool Animal::validateWeight(const float newWeight) {
    if( newWeight == UNKNOWN_WEIGHT)
    return true;

    if( newWeight > 0 )
        return true;
    //In all other cases
    return false;
}

bool Animal::validateSpecies(const std::string newSpecies) {
    if( newSpecies.empty() )
        return false;

    return true;

}

