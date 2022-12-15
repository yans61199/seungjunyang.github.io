#include <algorithm>
#include <bit>
#include <cassert>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <ranges>
#include <string>
#include <vector>


class CS {
public:
    CS(std::string input, unsigned bs, unsigned a, unsigned c, unsigned mp,
        unsigned wbp) {
        infile.open(input);


        blks = bs;
        asso= a;
        cap = c;
        mc = mp;
        dwp = wbp;



    ~CS() {
        infile.close();
    }

private:

    std::ifstream infile;


    unsigned bs;
    unsigned asso;
    unsigned cap;
    unsigned mp;
    unsigned dwp;


    unsigned so;
    unsigned to;
    unsigned sm;


    }
};