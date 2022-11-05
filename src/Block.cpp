#include "../include/Block.h"
#include "../include/sha256.h"
#include <ctime>
#include <sstream>

Block::Block(uint32_t IndexIn, const string& DataIn) : _Index(IndexIn), _Data(DataIn)
{
    _OnceN = -1;
    _Timet = time(nullptr);
}

string Block::GetHash()
{
    return _Hash;
}

void Block::MineBlock(uint32_t lvlDifficulty)
{
    char cstr[lvlDifficulty +1];
    
    for(uint32_t i = 0; i < lvlDifficulty; i++)
    {
        cstr[i] = '0';
    }

    cstr[lvlDifficulty] = '\0';

    string str(cstr);

    do
    {
        _OnceN++;
        _Hash = _CalculateHash();
    } while (_Hash.substr(0, lvlDifficulty) != str);

    cout << "Block mined: " << _Hash << endl;
}

inline string Block:: _CalculateHash() const{
    stringstream ss;
    ss << _Index << _Timet << _Data << _OnceN << PreviousHash;

    return sha256(ss.str());
}