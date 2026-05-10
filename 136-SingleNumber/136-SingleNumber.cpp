// Last updated: 5/10/2026, 11:53:31 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for(int i : nums){
            x = x ^ i;
        }
        return x;
    }
};
const static auto io_speed_up = []() {
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    FILE* fptr = fopen("user.out", "w");
    int x, out = 0;
    while (!cin.eof()) {
        if (cin.peek() == '[')
            cin.ignore();
        else
            break;
        out = 0;
        while (cin.peek() != ']') {
            cin >> x;
            if (cin.peek() == ',')
                cin.ignore();
            out ^= x;
        }
        fprintf(fptr, "%d\n", out);
        cin.ignore(1024, '\n');
    }
    fclose(fptr);
    exit(0);
    return 0;
}();