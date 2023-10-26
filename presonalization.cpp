#include <iostream>

class UserSettings {
public:
  std::string boardTexture;
  std::string piecesTexture;
};

const int SIZE_BOARD_TEXTURES = 3;
const int SIZE_PIECES_TEXTURES = 3;

std::string BoardTextures[SIZE_BOARD_TEXTURES] = {"abc", "def", "ghj"};
std::string PiecesTextures[SIZE_PIECES_TEXTURES] = {"123", "456", "789"};

int main() {
  UserSettings userSettings; // query the db
  std::string currentBoard = userSettings.boardTexture;
  std::string currentPiece = userSettings.piecesTexture;

  std::cout << "Change style of your interface!\n";

  for (int i = 0; i < SIZE_BOARD_TEXTURES; ++i)
    std::cout << i + 1 << ". " << BoardTextures[i] << "\n"
}