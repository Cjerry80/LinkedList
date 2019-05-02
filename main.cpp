#include <iostream>
#include <string>
#include "linkedlist.cpp"

using namespace std;

void readFile(linkedlist & list, string & file) {
ifstream infile;
int n1;
infile.open("list.txt");
while(!infile.eof()){
infile >> n1;
addToFront(n1);
}
infile.close();



}

int main() {
readfile(list, file);

    return 0;
}
