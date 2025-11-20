#include <iostream>
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::string;
int main()
{
  // create and open a text file
  ofstream MyFile("./tmp/filename.txt");
  // write to the file
  MyFile << "Files can be tricky, but it is fun enough!";
  // close the file
  MyFile.close();

  string myText;
  // Read from the text file
  ifstream MyReadFile("./tmp/filename.txt");
  // Use a while loop together with the getline() function to read the file line by line
  while (getline(MyReadFile, myText))
  {
    // Output the text from the file
    std::cout << myText;
  }
  // Close the file
  MyReadFile.close();
  return 0;
}