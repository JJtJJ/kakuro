#include "Kakuro.h"

int main(int argc, char **argv) {
  Kset *s = new Kset(5, 2);
  std::vector<int> sNums = s->possibleNums();
  for (int i = 0; i < sNums.size(); i++) {
    std::cout << sNums[i] << std::endl;
  }
}
