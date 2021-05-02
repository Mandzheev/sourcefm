#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int num;
string line[20];

class Leagues {
public:
  Leagues() {
    int r = 1;
    int g = 1;
    ifstream in("list_leagues.txt");

    if (in.is_open()) {
      while (getline(in, line[g]))

      {
        cout << r++ << ") " << line[g++] << endl;
      }

      for (int i = 1; i < 20; i++)
        getline(in, line[i]);
      cin >> num;
    }
    in.close();
  }
};

class League {
public:
  string tm;
  League() {

    char tx[] = ".txt";

    tm = line[num] + tx;

    cout << tm << endl;
  } // ifstream in(tm);
};

// class Team {
// name couch list_player
//};

// class player {
// number  name
//  amplua
//       skill
//};

int main() {

  Leagues l1;
  League l2;
  return 0;
}
