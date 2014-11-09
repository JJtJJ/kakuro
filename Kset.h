#ifndef SET_H
#define SET_H

#include <vector>

class Kset {
private:
  int sum;
  int length;
  std::vector<int> nums;
public:
  Kset(int sum, int length);
  Kset(int sum, int length, std::vector<int> ns);
  virtual ~Kset();
  std::vector<int> possibleNums();
  bool isPossible(int n);
};

#endif
