#include "libs/Person.cpp" // Includes Person.cpp, which defines Person class

int main() {
  /* Creates name and age values, uses the Person constructor to initialize the
   * object 'person' */
  std::string name = "Ryan";
  int age = 26;
  Person person(name, age);

  /* Prints the values stored in the 'person' object */
  std::cout << "Name: " << person.getName() << std::endl;
  std::cout << "Age: " << person.getAge() << std::endl;

  /* Creates name and age values, and uses the default constructor to make
   * another object */
  std::string name1 = "Alice";
  int age1 = 20;
  Person person1;

  /* Sets the name and age properties for person1 object */
  person1.setName(name1);
  person1.setAge(age1);

  /* Prints the name and age properties for person1 */
  std::cout << "Name: " << person1.getName() << std::endl;
  std::cout << "Age: " << person1.getAge() << std::endl;
}
