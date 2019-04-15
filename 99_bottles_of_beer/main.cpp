#include <iostream>
#include <string>

/*

99 bottles of beer on the wall, 99 bottles of beer.
Take one down, pass it around, 98 bottles of beer on the wall... 

 */

void print99BottlesOfBeer();
void keep_window_open();
int main()
{

  print99BottlesOfBeer();
  keep_window_open();
  return 0;
}

void print99BottlesOfBeer(){
const std::string phrase1Part1 = " bottles of beer on the wall, ";
//int
const std::string phrase1Part2 = " bottles of beer.\n"
"Take one down, pass it around, ";
//int
const std::string phrase1Part3 = " bottles of beer on the wall...\n";

 const std::string phrase2 = "No more bottles of beer on the wall, no more bottles of beer.\n"
   "Go to the store and buy some more, ";

 const std::string phrase1Part1Alt = " bottle of beer on the wall, ";
 const std::string phrase1Part2Alt = " bottle of beer.\n"
"Take it down, pass it around, ";
 
 for(int i = 99; i >= 0; i--){
   if(i > 1){
     std::cout << i << phrase1Part1 << i << phrase1Part2
	       << i - 1 << phrase1Part3;
    
   }
   else if(i == 1){
     std::cout << i << phrase1Part1Alt << i << phrase1Part2Alt
	       << i - 1 << phrase1Part3;
   }
   else{
     std::cout << phrase2 << 99 << phrase1Part3;
   }
 }

}

void keep_window_open(){
  int a;
  std::cout << "Enter a character to exit.\n";
  std::cin >> a;
}
