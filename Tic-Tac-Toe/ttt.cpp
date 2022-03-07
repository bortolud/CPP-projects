#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

int main(){
  std::vector<char> board = {'0','1','2','3','4','5','6','7','8'};
  int turns = 0;
  int failsafe = 0;
  int move;

  welcome();
  show_board(board);
  while(!(check_win(board)) && failsafe < 1000){
    if (turns%2 == 0){
      std::cout << "Player 1 (X)\nEnter your move: ";
      std::cin >> move;
      if (check_move(board, move)){
        board[move] = 'X';
        show_board(board);
        turns++;
      }
      else {
        std::cout << "Invalid move.  Please enter valid move.\n";
      }
    }
    else {
      std::cout << "Player 2 (O)\nEnter your move: ";
      std::cin >> move;
      if (check_move(board, move)){
        board[move] = 'O';
        show_board(board);
        turns++;
      }
      else {
        std::cout << "Invalid move.  Please enter valid move.\n";
      }
    }
    failsafe++;
  }
  if ((turns-1)%2 == 0){
    std::cout << "Congrats Player 1! \n";
  }
  else {
    std::cout << "Congrats Player 2! \n";
  }
}