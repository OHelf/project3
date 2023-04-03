#include "include/Person.h" // Includes the Person method definitions and variables

/* User-defined Person constructor, sets variables to ctor inputs */
Person::Person(const std::string &name, const int &age)
    : name_(name), age_(age) {}

/* Defines default constructor for Person class, takes no inputs */
Person::Person() : name_{""}, age_{-1} {}

/* Defines getName(), which returns the name input into the class object */
auto Person::getName() const { return name_; }

/* Defines getAge(), which returns the age input into the class object */
auto Person::getAge() const { return age_; }

/* Defines setName(), which is an alternative to using the user-defined ctor */
template <typename T> void Person::setName(const T &input) { name_ = input; }

/* Defines setAge(), which is an alternative to using the user-defined ctor */
template <typename T> void Person::setAge(const T &input) { age_ = input; }
