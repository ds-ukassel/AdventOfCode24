#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int part1(int argc, char** argv);
int part2(int argc, char** argv);

int main (int argc, char** argv) {
  cout << "There are " << part1(argc, argv)<< " increases!" << std::endl;
  cout << "There are " << part2(argc, argv)<< " window increases!" << std::endl;
  return 0;
}

int part1(int argc, char** argv){
  string line;
	int reading;
	int count = 0;
	bool first = 0;
  ifstream input (argv[1]);
  if (input.is_open()){
    while ( getline (input,line) ){
			if (first == 0){
				reading = stoi( line );
				first = 1;
			}
			if (stoi(line)>reading){
				count++;
      }
			reading = stoi(line);
    }
    input.close();
  }

  else cout << "Unable to open file"; 

  return count;
}

int part2(int argc, char** argv){
  string line;
	vector<int> readings;
  int start = 0;
  int end = 0;
  int i = 0;
	int count = 0;
  int sum_a;
	int sum_b;
  int k=3;
  ifstream input (argv[1]);
  if (input.is_open()){
    while ( getline (input,line) )
    {
      readings.push_back(stoi(line));
    }
    input.close();
  }
  else cout << "Unable to open file"; 
  for (int i=0;i<k;i++)
  {
    sum_a += readings.at(i);
  }
  sum_b = sum_a;
  start = 0;
  end = k - 1;
  for (int i=k;i<readings.size();i++)
  {
    sum_b += readings.at(i) - readings.at(i-k);
    if (sum_b > sum_a)
    {
      start = i - k + 1; 
      end = i; 
      count++;
    }
    sum_a = sum_b;
 
  }
  return count;
}
