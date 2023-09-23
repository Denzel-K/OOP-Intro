#include <iostream>
using namespace std;

class Human {
  public:
    string name;
    int age;
    string occupation;
    
    void eat(string food){
      cout << "This person is eating " << food << '\n';
    }
    void walk(double distance){
      cout << "This person walks "<< distance << " km on average everyday\n";
    }
};

int main(){
  Human human1;
  Human human2;
  
  human1.name = "John Doe";
  human1.age = 32;
  human1.occupation = "Plumber";
  
  cout << "Name: " << human1.name << '\n';
  cout << "Age: " << human1.age << '\n';
  cout << "Occupation: " << human1.occupation<< '\n';
  human1.eat("Chicken");
  human1.walk(3.4);
  
  cout << "  \n" ;
  
  human2.name = "Marshal Mathers";
  human2.age = 50;
  human2.occupation = "Rapper";
  
  cout << "Name: " << human2.name << '\n';
  cout << "Age: " << human2.age << '\n';
  cout << "Occupation: " << human2.occupation<< '\n';
  human2.occupation = "Rapper";
  human2.eat("Sushi");
  human2.walk(2);
  
  return 0;
}