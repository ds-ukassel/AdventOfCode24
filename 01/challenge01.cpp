#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm> 

using namespace std;

void parts12(int argc, char** argv);

bool comp(int a, int b) {
    return a >= b;
}

int main (int argc, char** argv) {
  parts12(argc, argv);
  return 0;
}

void parts12(int argc, char** argv){
  string line;
  std::vector<int> left;
  std::vector<int> right;
  int sum = 0;
  int similarityScore = 0;

  ifstream input (argv[1]);
    if (input.is_open()){
    while ( getline (input,line) ){
      std::stringstream ss(line);  
      int num1, num2;
      ss >> num1 >> num2;
      left.push_back(num1);
      right.push_back(num2);
    }
    input.close();
  }
  else cout << "Unable to open file"; 

  sort(left.begin(), left.end(), comp);
  sort(right.begin(), right.end(), comp);

  for (int i = 0 ; i < left.size(); i++){
    sum = sum + abs(right[i] - left[i]);
    similarityScore = similarityScore + (left[i] * count(right.begin(), right.end(), left[i]));
  }
  std::cout << "Total Distance = " << sum << std::endl; 
  std::cout << "Similarity Score = " << similarityScore << std::endl; 
}
