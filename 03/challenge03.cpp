#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int parts12(int argc, char** argv);

int main (int argc, char** argv) {
  cout << "Total = " << parts12(argc, argv)<< " !" << std::endl;
  return 0;
}


int parts12(int argc, char** argv){
  string line;
  ifstream input (argv[1]);
  std::smatch matches;
  std::regex fullPattern(R"(do\(\)|don't\(\)|mul\((\d+),(\d+)\))");
  bool dos = true;
  int docount = 0;
  int dontcount = 0;
  int total = 0; 
  if (input.is_open()){
    while (std::getline(input, line)) {
        std::string::const_iterator searchStart(line.cbegin());

        while (std::regex_search(searchStart, line.cend(), matches, fullPattern)) {
            if (matches[0].str() == "do()") {
                dos = true; 
            } else if (matches[0].str() == "don't()") {
                dos = false;
            } else if (dos && matches[1].matched && matches[2].matched) {
                int x = std::stoi(matches[1].str()); 
                int y = std::stoi(matches[2].str()); 
                total += x * y; 
            }
            searchStart = matches.suffix().first; 
        }
    }
    input.close();
  }
  else cout << "Unable to open file"; 

  return total;
}

