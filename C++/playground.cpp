#include <iostream> // do not use C lib for stdio or else you are coding in c
#include <string.h> // this c header is fine

using namespace std;

class 
Person 

{
    public: 
        string name;
        int age;
        float height;
        bool female;
        bool male;
        bool sleeping;

        void eat() {
            cout << "This person is eating " << endl;
        }

        void sleep() {
            cout << "This person is sleeping" << endl;
            sleeping = true;
        }

        void wakeUp() {
            cout << "this person is up!" << endl;
            sleeping = false;
        }
};

int 
main() 

{
    // start of the transition between c and cpp

    string input;
    printf("enter your name please: ");
    cin >> input; 

    printf("your name is: %s..., what a weird name!!", input.c_str()); cout << endl;

    string aString = "arstartsarst";
    printf("the length of %s is %lu\n", aString.c_str(), aString.length());

    Person human1;

    human1.name = "johnny";
    human1.age = 13;
    human1.female = false;
    human1.male = true;
    human1.height = 165.34;

    human1.eat();
    human1.sleep();
    human1.wakeUp();

    printf("this person is %d years old, female is %d, male is %d, height is %0.2f and is called %s", human1.age, human1.female, human1.male, human1.height, human1.name.c_str()); cout << endl;
    return 0;
}