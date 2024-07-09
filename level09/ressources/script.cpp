#include <iostream>
#include <fstream>

int main(int argc, char** argv){

  int i = 0;
  if (argc != 2){
    return 1;
  }
  std::ifstream file(argv[1]);
  if (!file.is_open()){
    return 1;
  }
  std::string content = "";
  file >> content;
  while(content[i] != '\0')
  {
    std::cout << (char)((int)(content[i]) - i);
    i++;
  }
}