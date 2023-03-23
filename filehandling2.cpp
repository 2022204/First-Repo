#include <iostream>
#include <fstream>

using namespace std;

int main() {
   ifstream inputFile("file2.txt");
   char c;
   
   while (inputFile.get(c)) {   // read character by character until EOF is reached
      cout << c;
   }

   if (inputFile.eof()) {   // check if we have reached the end of the file
      cout << "\nEnd of file reached.\n";
   }
   else {
      cout << "\nError occurred while reading the file.\n";
   }

   inputFile.close();   // always remember to close the file
   return 0;
}