#include <iostream>
#include "Pet.h"

using namespace std;

// By Lloyd Black
int main(int argc, char** argv) {

  Pet* p = new Pet("Wilbert", 13, "Dog", 123.4);
  Pet* p1 = new Pet();
  Pet* p2 = new Pet("Goose", 4);
  cout << *p << endl;
  cout << *p1 << endl;
  cout << *p2 << endl;
  cout << "Just for fun, here's Unnamed's type again: " << p1->getType() << endl;

}
