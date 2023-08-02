#include <iostream>
#include <vector>
  
int main() {
  std::vector<int> even = {2, 4, 3, 6, 1, 9};

  int total = 0;

  for (int i=0; i < even.size(); i++) {
    if(even[i] % 2 == 0) {
      total += even[i];
    }
  }

  std::cout << total << "\n";

}
