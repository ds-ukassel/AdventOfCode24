#include <iostream>
#include <fstream>
#include <string>
//#include <vector>
//#include <sstream>
#include <regex>

using namespace std;

int parts12(int argc, char** argv);
//bool satisfiesConditions(const std::vector<int>& row);

int main (int argc, char** argv) {
  cout << "Total = " << parts12(argc, argv)<< " !" << std::endl;
  return 0;
}

int parts12(int argc, char** argv){
  string line;
  //std::vector<std::vector<int>> data;
	int safeReports= 0;
  ifstream input (argv[1]);
  std::regex pattern(R"(mul\((\d+),(\d+)\))"); // Regex to match mul(x, y)
  std::smatch matches;
  int total = 0; 
  if (input.is_open()){
    while ( getline (input,line) ){
      std::string::const_iterator searchStart(line.cbegin());
      while (std::regex_search(searchStart, line.cend(), matches, pattern)) {
          int x = std::stoi(matches[1].str());
          int y = std::stoi(matches[2].str()); 
          total += x * y; 
          searchStart = matches.suffix().first;
      }
    //   std::istringstream lineStream(line);
    //   std::vector<int> row;
    //   int number;
    //   while (lineStream >> number) {
    //     row.push_back(number);
    //      std::regex pattern(R"(mul\((\d+),(\d+)\))"); // Regex to match mul(x, y)
    // std::smatch matches;
    // std::string::const_iterator searchStart(input.cbegin());
    //   }

      // data.push_back(row);
    }
    input.close();
  }
  else cout << "Unable to open file"; 

  return total;
}

// bool satisfiesConditions(const std::vector<int>& row) {
//     bool increasing = true;
//     bool decreasing = true;

//     for (size_t i = 1; i < row.size(); ++i) {
//       int diff = std::abs(row[i] - row[i - 1]);

//       if (diff < 1 || diff > 3) {
//           return false;
//       }

//       if (row[i] < row[i - 1]) { 
//           increasing = false;
//       }
//       if (row[i] > row[i - 1]) { 
//           decreasing = false;
//       }
//     }

//     return increasing || decreasing;
// }
