#include <cctype>
#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

// Hash function class
class HashFunction {
private:
  int compressKey(string key) {
    // Compression: Convert the key into a 32-bit integer
    int hashcode = 0;

    return hashcode;
  }

public:
  int hash(string key, int tableSize) {
    int hashIndex = 0;

    // Call compression here.
    return hashIndex;
  };

  // Test function to demonstrate the hashing
  void testHashFunction() {
    // Example keys
    string keys[] = {"9242064424678123", "9NJGDHQQV8E", "ALTEBUERIO"};
    int tableSize = 15;

    cout << "Key\t\t\tHashed Index\n";
    cout << "---------------------------------\n";

    for (int i = 0; i < sizeof(keys) / sizeof(keys[0]); ++i) {
      cout << keys[i] << "\t\t" << HashFunction::hash(keys[i], tableSize)
           << '\n';
    }
  }

  int main() {
    testHashFunction();
    return 0;
  }
};
