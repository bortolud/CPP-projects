#include <iostream>
#include <string>

void bleep(std::string word, std::string &text){
  int wordsize = word.size();
  //int endIndex;
  //std::cout << wordsize << "\n";
  for (int i=0; i < text.size(); i++){
    //endIndex = i + wordsize;
    //std::cout << "i = " << i << "\nend = " << endIndex << "\n";
    //std::cout << text.substr(i, wordsize) << "\n";
    if (text.substr(i, wordsize) == word){
      for(int j = 0; j < wordsize; j++){
        text[i+j] = '*';
      }
    }
  }
  //.substr
}

int main(){
  std::string word = "broccoli";
  std::string text = "Boy, I sure do love me some broccoli.  broccoli is great!";
  bleep(word, text);
  std::cout << text << "\n";
  
}