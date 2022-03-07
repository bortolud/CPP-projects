#include <iostream>
#include <vector>
void welcome(){
  std::cout << "Welcome to Tic-Tac-Toe\n";
}

void show_board(std::vector<char> board){
  std::cout << board[0] << " | " << board[1] << " | " << board[2] << "\n";
  std::cout << "- - - - -\n";
  std::cout << board[3] << " | " << board[4] << " | " << board[5] << "\n";
  std::cout << "- - - - -\n";
  std::cout << board[6] << " | " << board[7] << " | " << board[8] << "\n";
}

bool check_win(std::vector<char> board){
  if (board[0] == board[3] && board[3] == board[6] && board[0] == board[6]){
    return true;
  } 
  else if (board[1] == board[4] && board[4] == board[7] && board[1] == board[7]){
    return true;
  } 
  else if (board[2] == board[5] && board[5] == board[8] && board[2] == board[8]){
    return true;
  } 
  else if (board[0] == board[1] && board[1] == board[2] && board[0] == board[2]){
    return true;
  } 
  else if (board[3] == board[4] && board[4] == board[5] && board[3] == board[5]){
    return true;
  } 
  else if (board[6] == board[7] && board[7] == board[8] && board[6] == board[8]){
    return true;
  } 
  else if (board[0] == board[4] && board[4] == board[8] && board[0] == board[8]){
    return true;
  } 
  else if (board[2] == board[4] && board[4] == board[6] && board[2] == board[6]){
    return true;
  } 
  return false;
}

bool check_move(std::vector<char> board, int move){
  if (board[move] == 'X' || board[move] == 'O' || move > 8 || move < 0){
    return false;
  }
  return true;
}