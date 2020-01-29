#include <iostream>
#include "Pet.h"

using namespace std;

// By Lloyd Black
Pet::Pet(string name, int age, string type, double weight) {
  mname = name;
  mage = age;
  mtype = type;
  mweight = weight;
}

string Pet::getName() {
  return mname;
}

int Pet::getAge() {
  return mage;
}

string Pet::getType() {
  return mtype;
}

double Pet::getWeight() {
  return mweight;
}


void Pet::setName(string name) {
  mname = name;
}

void Pet::setAge(int age) {
  mage = age;
}

void Pet::setType(string type) {
  mtype = type;
}

void Pet::setWeight(double weight) {
  mweight = weight;
}

ostream& operator<<(ostream& os, const Pet& pet) {

  os << pet.mname << "'s details" << endl;
  os << "\t" << "Type: " << pet.mtype << endl;
  os << "\t" << "Age: " << pet.mage << endl;
  os << "\t" << "Weight: " << pet.mweight << endl;
  return os;

}
