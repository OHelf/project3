#pragma once        // Build this only once
#include <iostream> // Use the standard io library
#include <string>   // Allows use of strings

class Person { // Declares the Person class' methods and variables
public:        // Public scope allows access to methods outside of the class
  /* Declares a parameterized constructor that sets age and name */
  Person(const std::string &name, const int &age);

  /* Declares a default constructor */
  Person();

  /* Declares a get method for returning name property of Person */
  auto getName() const;

  /* Declares a get method for returning age property of Person object */
  auto getAge() const;

  /* Declared a set method for name property of Person object */
  template <typename T> void setName(const T &input);

  /* Declares a set method for age property of Person object */
  template <typename T> void setAge(const T &input);

private: // Private scope prevents properties being called outside of class
  std::string name_{""}; // Name variable, initialized to an empty string
  int age_{-1};          // Age variable, initialized to non-realistic value
};