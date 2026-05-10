// Last updated: 5/10/2026, 11:50:26 PM
#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2")

using namespace std;
static const size_t ARENA_SIZE = 1 << 26; 
alignas(max_align_t) static unsigned char arena[ARENA_SIZE];
static size_t arena_pos = 0;

void* operator new(size_t sz) {
    size_t aligned = (sz + alignof(max_align_t) - 1) & ~(alignof(max_align_t) - 1);
    if (arena_pos + aligned > ARENA_SIZE) {
        throw bad_alloc();
    }
    void* ptr = arena + arena_pos;
    arena_pos += aligned;
    return ptr;
}

void operator delete(void*) noexcept {}
void operator delete(void*, size_t) noexcept {}
class Solution {
public:
    bool judgeCircle(string moves) {
        int u =0, d = 0, l = 0, r = 0;
        for(char ch : moves){
            if(ch == 'U')u++;
            else if(ch == 'D')d++;
            else if(ch == 'L')l++;
            else r++;
        }
        if(u - d == 0 && l - r == 0) return true;

        return false;
    }
};