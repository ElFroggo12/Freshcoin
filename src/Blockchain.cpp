#include "../include/Blockchain.h"

Blockchain::Blockchain()
{
    _bChain.emplace_back(Block(0, "Genesis Block"));
    _lvlDifficulty = 6;
}

void Blockchain::AddBlock(Block newB)
{
    newB.PreviousHash = _GetLastBlock().GetHash();
    newB.MineBlock(_lvlDifficulty);
    _bChain.push_back(newB);
}

Block Blockchain::_GetLastBlock() const 
{
    return _bChain.back();
}