#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int num;
string line1[10];

class Leagues {

public:
  void print_Leagues() {

    int r = 1;
    int g = 1;

    ifstream in("list_leagues.txt");

    if (in.is_open()) {
      while (getline(in, line1[g])) {
        cout << r++ << ") " << line1[g++] << endl;
      }
    }
    in.close();
  }

  void get_number() {

    string line2[10];
    ifstream in("list_leagues.txt");

    if (in.is_open()) {
      for (int i = 1; i < 5; i++)
        getline(in, line2[i]);
      cin >> num;
    }
    in.close();
  }
};

class League {

public:
  void print_League() {

    int p;
    int t = 1;
    char tx[] = ".txt";
    string line3[10];

    string tm = line1[num] + tx;

    ifstream in(tm);

    if (in.is_open()) {
      while (getline(in, line3[p])) {
        cout << t++ << ") " << line3[p++] << endl;
      }
    }
    in.close();
  }
};

// class Team {
// name couch list_player
//};

// class player {
// number  name
//  amplua
//       skil
//};

int main() {

  Leagues l1;
  l1.print_Leagues();
  l1.get_number();

  League l2;
  l2.print_League();
  return 0;
}
