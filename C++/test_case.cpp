#include <iostream>
#include <time.h> // Include the time header file
#include <random>

using namespace std;

int main() {
  int t = 10; // Number of test cases
  cout<<t<<endl;
  int max_n = 10; // Maximum length of the binary string

  mt19937 gen(time(0)); // Random number generator
  uniform_int_distribution<int> dist(0, 1); // Distribution for generating random bits

  for (int i = 0; i < t; ++i) {
    int n = 1 + gen() % max_n; // Generate random length of the binary string

    string s;
    for (int j = 0; j < n; ++j) {
      s += (dist(gen) == 1) ? '1' : '0'; // Generate random bit
    }

    cout << n << endl;
    cout << s << endl;
  }

  return 0;
}
