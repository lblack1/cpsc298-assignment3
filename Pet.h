#ifndef PET
#define PET

#include <iostream>

using namespace std;

// By Lloyd Black
class Pet {

  public:
    Pet(string name="Unnamed", int age=-1, string type="rock", double weight=-1);

    string getName();
    int getAge();
    string getType();
    double getWeight();

    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);

    friend ostream& operator<<(ostream& os, const Pet& p);

  private:
    string mname;
    int mage;
    string mtype;
    double mweight;

};

#endif
