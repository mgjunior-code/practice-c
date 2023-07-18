#include <iostream>

int main() {

  for (int i = 1; i < 100; i++ ) {
    std::cout << i << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
    std::cout << i - 1 << " bottles of pop on the wall.\n";
  }
  
}
