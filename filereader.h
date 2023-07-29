#include <iostream>
#include <fstream>
#include <vector>
#include "convert.h"
using namespace std;
int INTO_FILE(){
    vector<string> lines;
    string *randuse =  new string;
    cin >> *randuse;
    fstream fileO(*randuse);
    while (getline(fileO, *randuse)){
      lines.push_back(*randuse);
      cout << *randuse << "\n";
    }
    string** arrayptr = new string *[lines.size()];
    for(int i; i < lines.size(); i++){
    arrayptr[i] = linetoarr(lines[i]);}
}
