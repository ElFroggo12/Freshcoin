#include "include/Blockchain.h"

int main()
{
  Blockchain bChain = Blockchain();

  cout << "mining 1st block..." << endl;
  bChain.AddBlock(Block(1, "Data for 1st Block"));

  cout << "mining 2nd Block..." << endl;
  bChain.AddBlock(Block(2, "Data for 2nd Block"));

  cout << "mining 3rd Block..." << endl;
  bChain.AddBlock(Block(2, "Data for 3rd Block"));

  cout << "mining 4th Block..." << endl;
  bChain.AddBlock(Block(2, "Data for 4th Block"));

  cout << "mining 5th Block..." << endl;
  bChain.AddBlock(Block(2, "Data for 5th Block"));

  

  return 0;
}