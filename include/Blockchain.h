#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain
{
public: 
    Blockchain();

    void AddBlock(Block NewB);

private:
    uint32_t _lvlDifficulty;
    vector<Block> _bChain;

    Block _GetLastBlock() const;
};