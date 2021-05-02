#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Leagues {
public:
  Leagues() {
    int r = 1;
    int num;
    int g = 1;
    string line[20];
    ifstream in("list_leagues.txt");

    if (in.is_open()) {
      while (getline(in, line[g]))

      {
        cout << r++ << ") " << line[g++] << endl;
      }

      for (int i = 1; i < 20; i++)
        getline(in, line[i]);
      cin >> num;
      cout << line[num] << endl;
    }
    in.close();
  }
};

/*class League {
  name list_team
};

class Team {
  name couch list_player
};

//class player {
    //number  name
      //  amplua
 //       skill
//};
*/
int main() {

  Leagues l1;

  return 0;
}
