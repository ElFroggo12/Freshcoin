#include <cstdint>
#include <iostream>

using namespace std;

class Block 
{
public:
    string PreviousHash;

    Block(uint32_t idxIn, const string& Data);

    string GetHash();

    void MineBlock(uint32_t lvlDifficulty);

private:
    uint32_t _Index;
    int64_t _OnceN;
    string _Data;
    string _Hash;
    time_t _Timet;

    string _CalculateHash() const;

};