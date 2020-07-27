#include <iostream>
#include <string>

using namespace std;

int main() {

    string name1;

    string verb1;
    string verb2;
    string verb3;
    string verb4;
    string verb5;

    string place1;
    
    int number1;
    int number2;
    int number3;
    
    string animal1;    
    
    string emotion1;
    string emotion2;

    string adverb1;

    string adjective1;
    string adjective2;    
    string adjective3;
    string adjective4;
    string adjective5;
    string adjective6;
    string adjective7;
    string adjective8;

    string organization;

    string noun1;
    string noun2;

    cout<<"Hello and welcome to my C++ Madlibs program."<<endl;
    cout<<"You will be prompted to enter types of words (such as adjectives and nouns). "<<endl;
    cout<<"Please enter a different word each time. "<<endl;
    cout<<"Enjoy!"<<endl;
    cout<<"Enter a name: ";
    cin>>name1;
    cout<<"Enter a verb (present tense): ";
    cin>>verb1;
    cout<<"Enter an adjective: ";
    cin>>adjective1;
    cout<<"Enter a place: ";
    cin>>place1;
    cout<<"Enter a number (in digit form): ";
    cin>>number1;
    cout<<"Enter an adjective: ";
    cin>>adjective2;
    cout<<"Enter a type of animal (plural): ";
    cin>>animal1;
    cout<<"Enter a number (in digit form): ";
    cin>>number2;
    cout<<"Enter a verb (present tense): ";
    cin>>verb2;
    cout<<"Enter an emotion: ";
    cin>>emotion1;
    cout<<"Enter an adverb: ";
    cin>>adverb1;
    cout<<"Enter an adjective: ";
    cin>>adjective3;
    cout<<"Enter an adjective: ";
    cin>>adjective4;
    cout<<"Enter an adjective: ";
    cin>>adjective5;
    cout<<"Enter an adjective: ";
    cin>>adjective6;
    cout<<"Enter a noun: ";
    cin>>noun1;
    cout<<"Enter a verb (past tense): ";
    cin>>verb3;
    cout<<"Enter a number (in digit form): ";
    cin>>number3;
    cout<<"Enter a noun (plural): ";
    cin>>noun2;
    cout<<"Enter a verb (past tense): ";
    cin>>verb4;
    cout<<"Enter a verb (past tense): ";
    cin>>verb5;
    cout<<"Enter an emotion: ";
    cin>>emotion2;
    cout<<"Enter an adjective: ";
    cin>>adjective7;
    cout<<"Enter an adjective: ";
    cin>>adjective8;
    cout<<"Enter an organization name: ";
    cin>>organization;

    cout<<"Your Madlibs result: "<<endl;
    
    cout<<name1<<" liked to "<<verb1<<". "<<endl;
    cout<<name1<<" was very "<<adjective1<<" at "<<verb1<<"ing. "<<endl;
    cout<<"One day, "<<name1<<" went to "<<place1<<" to "<< verb1<<". "<<endl;
    cout<<name1<<" didn't know it, but "<<place1<<" was home to "<<number1<<" "<<adjective2<<" "<<animal1<<". "<<endl;
    cout<<"After "<<verb1<<"ing, "<<name1<<" took a "<<number2<<" hour break to "<<verb2<<"."<<endl;
    cout<< "Since "<<name1<<" had never tried to "<<verb2<<" before, "<<name1<<" was "<<emotion1<<". "<<endl;
    cout<<name1<<" "<<adverb1<<" got "<<adjective3<<" and decided to stop and explore."<<endl;
    cout<<"Soon, "<<name1<<" came upon the "<<adjective4<<", "<<adjective5<<", "<<adjective6<<" home of the "<<animal1<<"."<<endl;
    cout<<"At first, "<<name1<<" thought it was a "<<adjective2<<" "<<noun1<<", but "<<name1<<" was wrong. "<<endl;
    cout<<"The "<<animal1<<" came out and "<<verb3<<". "<<endl;
    cout<<name1<<" was left with "<<number3<<" "<<noun2<<" that "<<verb4<<" when "<<verb5<<", but "<<name1<<" was mostly "<<emotion2<<"."<<endl;
    cout<<"Luckily, "<<name1<<" was found by the "<<adjective7<<" "<<adjective8<<" "<<organization<<". THE END";
    return 0;
}
