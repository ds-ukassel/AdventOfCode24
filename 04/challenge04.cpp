#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//#include <sstream>

using namespace std;

int part1(int argc, char** argv);
int part2(int argc, char** argv);

int main (int argc, char** argv) {
  cout << "There are " << part1(argc, argv)<< " XMAS in there" << std::endl;
  cout << "There are " << part2(argc, argv)<< " X-MAS in there" << std::endl;
  return 0;
}

int part1(int argc, char** argv){
  string line;
  std::vector<std::vector<char>> letter;	
  ifstream input (argv[1]);
  int noXMAS = 0;
  if (input.is_open()){
    while ( getline (input,line) ){
      std::vector<char> row(line.begin(), line.end());
      letter.push_back(row);
    }
    input.close();
  }
  else cout << "Unable to open file";

  for (int j=0; j<letter.size(); j++){
    for (int i=0; i<letter[0].size(); i++){
      if (letter[j][i] == 'X'){
        if (i<letter[0].size()-3 && ((letter[j][i+1] == 'M') && (letter[j][i+2] == 'A') && (letter[j][i+3] == 'S'))){ //forward
          noXMAS++;
        }
        if ( i > 2 && ((letter[j][i-1] == 'M') && (letter[j][i-2] == 'A') && (letter[j][i-3] == 'S'))){ //backward
          noXMAS++;
        }
        if ( j < letter.size() - 3  &&  ((letter[j+1][i] == 'M') && (letter[j+2][i] == 'A') && (letter[j+3][i] == 'S'))){ //down
          noXMAS++;
        }
        if ( j > 2 && ((letter[j-1][i] == 'M') && (letter[j-2][i] == 'A') && (letter[j-3][i] == 'S'))){ //up
          noXMAS++;
        }
        if ( ((j > 2) && (i<letter[0].size()-3))  &&  ((letter[j-1][i+1] == 'M') && (letter[j-2][i+2] == 'A') && (letter[j-3][i+3] == 'S'))){ //diagonal up right
          noXMAS++;
        }
        if ( ((j < letter.size() - 3) && (i<letter[0].size()-3))  &&  ((letter[j+1][i+1] == 'M') && (letter[j+2][i+2] == 'A') && (letter[j+3][i+3] == 'S'))){ //diagonal down right
          noXMAS++;
        }
        if ( ((j > 2) && (i > 2))  &&  ((letter[j-1][i-1] == 'M') && (letter[j-2][i-2] == 'A') && (letter[j-3][i-3] == 'S'))){ //diagonal up left
          noXMAS++;
        }
        if ( ((j < letter.size() - 3) && (i > 2))  &&  ((letter[j+1][i-1] == 'M') && (letter[j+2][i-2] == 'A') && (letter[j+3][i-3] == 'S'))){ //diagonal down left
          noXMAS++;
        }
      }
    }
  }

  return noXMAS;
}


int part2(int argc, char** argv){
  string line;
  std::vector<std::vector<char>> letter;	
  ifstream input (argv[1]);
  int noXMAS = 0;
  if (input.is_open()){
    while ( getline (input,line) ){
      std::vector<char> row(line.begin(), line.end());
      letter.push_back(row);
    }
    input.close();
  }
  else cout << "Unable to open file";

  for (int j=0; j<letter.size(); j++){
    for (int i=0; i<letter[0].size(); i++){
      if (letter[j][i] == 'M'){
        if ( ((j > 1) && ((i<letter[0].size()-2)))  &&  ((letter[j-1][i+1] == 'A') && (letter[j-2][i+2] == 'S'))){ //diagonal up right check
          if (((letter[j][i+2] == 'M') && ((letter[j-1][i+1] == 'A') && (letter[j-2][i] == 'S')))){ //now up left
            noXMAS++;
          }
          else if ((letter[j-2][i] == 'M') && ((letter[j-1][i+1] == 'A') && (letter[j][i+2] == 'S'))){ //now down right
            noXMAS++;
          }
        }
        if ( i > 1 && j > 1  &&  ((letter[j-1][i-1] == 'A') && (letter[j-2][i-2] == 'S'))){ //diagonal up left check
          if ((letter[j][i-2] == 'M') && ((letter[j-1][i-1] == 'A') && (letter[j-2][i] == 'S'))){ // now up right
            noXMAS++;
          }
          else if ((letter[j-2][i] == 'M') && ((letter[j-1][i-1] == 'A') && (letter[j][i-2] == 'S'))){ // now down left
            noXMAS++;
          }
        }
        if ( ((j < letter[0].size() - 2) && (i<letter[0].size()-2))  &&  ((letter[j+1][i+1] == 'A') && (letter[j+2][i+2] == 'S'))){ //diagonal down right check
          if ((letter[j][i+2] == 'M') && ((letter[j+1][i+1] == 'A') && (letter[j+2][i] == 'S'))){ // now down left
            noXMAS++;
          }
          else if (letter[j+2][i] == 'M' && ((letter[j+1][i+1] == 'A') && (letter[j][i+2] == 'S'))){ // now up right
            noXMAS++;
          }
        }
        if ( (j < letter[0].size() - 2) && i>1  &&  ((letter[j+1][i-1] == 'A') && (letter[j+2][i-2] == 'S'))){ //diagonal down left check
          if (((letter[j+2][i] == 'M') && ((letter[j+1][i-1] == 'A') && (letter[j][i-2] == 'S')))){ //now up left
            noXMAS++;
          }
          else if ((letter[j][i-2] == 'M') && ((letter[j+1][i-1] == 'A') && (letter[j+2][i] == 'S'))){ //now down right
            noXMAS++;
          }
        }
      }
    }
  }
  return noXMAS/2;
}