#include "mySimpleComputer.h"
#include <iostream>
#include <cstring>

using namespace std;

void print_memory() {
  for (int i = 0; i < MEMORY_SIZE; i++) {
    cout << memory[i] << " ";
  }
  cout << endl << endl;
}

int main() {
  int value;
  int command;
  int operand;
  char *filename;
  strcpy(filename,"Heh");

  sc_memoryInit();

  print_memory();

  sc_memorySet(5, 19);
  sc_memorySet(2, 14);
  sc_memorySave(filename);

  print_memory();

  sc_memoryInit();

  print_memory();

  sc_memoryLoad(filename);

  print_memory();

  sc_memoryGet(5, &value);
  cout << value << endl << endl;

  sc_regInit();

  sc_regGet(INVALID_COMMAND, &value);
  cout << value << endl << endl;

  sc_regSet(INVALID_COMMAND, 1);

  sc_regGet(INVALID_COMMAND, &value);
  cout << value << endl << endl;

  sc_commandEncode(READ, 13, &value);
  cout << value << endl << endl;

  sc_commandDecode(value, &command, &operand);
  cout << command << " " << operand << endl << endl;
}
