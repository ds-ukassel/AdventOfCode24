#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int parts12(int argc, char** argv);
bool satisfiesConditions(const std::vector<int>& row);

int main (int argc, char** argv) {
  cout << "There are " << parts12(argc, argv)<< " safe reports!" << std::endl;
  return 0;
}

int parts12(int argc, char** argv){
  string line;
  std::vector<std::vector<int>> data;
	int safeReports= 0;
  ifstream input (argv[1]);
  if (input.is_open()){
    while ( getline (input,line) ){
      std::istringstream lineStream(line);
      std::vector<int> row;
      int number;
      while (lineStream >> number) {
        row.push_back(number);
      }
      if (satisfiesConditions(row)){
        safeReports++;
      }
      else {
        for (int i = 0; i < row.size(); ++i){
          std::vector<int> dampnerRow = row;
          dampnerRow.erase(dampnerRow.begin()+i);
          if(satisfiesConditions(dampnerRow)){
            safeReports++;
            break;
          }
        }
      }
      data.push_back(row);
    }
    input.close();
  }

  else cout << "Unable to open file"; 

  return safeReports;
}

bool satisfiesConditions(const std::vector<int>& row) {
    bool increasing = true;
    bool decreasing = true;

    for (size_t i = 1; i < row.size(); ++i) {
      int diff = std::abs(row[i] - row[i - 1]);

      if (diff < 1 || diff > 3) {
          return false;
      }

      if (row[i] < row[i - 1]) { 
          increasing = false;
      }
      if (row[i] > row[i - 1]) { 
          decreasing = false;
      }
    }

    return increasing || decreasing;
}
