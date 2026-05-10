// Last updated: 5/10/2026, 11:46:13 PM
class Bank {
public:
    vector<long long> bal;
    Bank(vector<long long>& balance) : bal(move(balance)) {}

    
    bool transfer(int account1, int account2, long long money) {
        if (account1 < 1 || account1 > bal.size() || account2 < 1 || account2 > bal.size())
            return false;
        if(bal[account1-1] < money) return false;
        
        bal[account1-1] -= money;
        bal[account2-1] += money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(account < 1 || account > bal.size()) return false;
        bal[account-1] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        
        if (account < 1 || account > bal.size() || money > bal[account-1])
            return false;

        bal[account-1] -= money;
            return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */