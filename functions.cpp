#include <iostream>
#include <cmath>

int main() {
  
  // This seeds the random number generator:
  srand (time(NULL));

  int the_amazing_random_number = rand() % 29;
  
  // Use rand() below to initialize the_amazing_random_number
  std::cout << the_amazing_random_number << "\n";
  
}
