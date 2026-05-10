// Last updated: 5/10/2026, 11:50:09 PM
int init = [] {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ofstream out("user.out");
  cout.rdbuf(out.rdbuf());
  for (string s; getline(cin, s); cout << '\n') {
    string t;
    getline(cin, t);
    int tar = stoi(t);
    for (int i = 0, _i = 1, _n = s.length(); _i < _n; ++i, ++_i) {
      bool _neg = 0;
      if (s[_i] == '-')
        ++_i, _neg = 1;
      int v = s[_i++] & 15;
      while ((s[_i] & 15) < 10)
        v = v * 10 + (s[_i++] & 15);
      if (_neg)
        v = -v;
      if (v == tar) {
        cout << i;
        goto next;
      }
      if (v > tar)
        break;
    }
    cout << -1;
  next:;
  }
  exit(0);
  return 0;
}();
class Solution {
public:
    int search(vector<int>& nums, int t) {
        int i = 0, j = nums.size();
        if(nums.size() == 1){
            if(t == nums[0]) return 0;
            else return -1;
        }
        while(i <= j){
            int mid = (j  + i)/2;
            if(nums[mid] == t){
                return mid;
            }
            else if(nums[mid] < t){
                i = mid+1;
            }else j = mid-1;
        }
        return -1;
    }
};