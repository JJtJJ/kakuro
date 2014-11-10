#include "Kset.h"

Kset::Kset(int s, int l) {
  sum = s;
  length = l;
  nums.resize(l);
}

Kset::Kset(int s, int l, std::vector<int> ns) {
  sum = s;
  length = l;
  nums = ns;
}

Kset::~Kset() {
  
}

std::vector<int> Kset::possibleNums() {
  std::vector<int> posNums;
  for (int i = 1; i < 10; i++) {
    if (find(nums.begin(), nums.end(), i) == nums.end()) {
        posNums.push_back(i);
    }  
  } 
  return posNums;
}
