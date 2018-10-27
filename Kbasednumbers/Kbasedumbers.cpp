#include <iostream>

using namespace std;

//ifstream fin("q.in");
//ofstream fout("q.out");

int N,K;
long long rez;
pair < long long, long long > dp[13];

int main() {
    cin >> N >> K;
    
    dp[1].first = K - 1;
    dp[1].second = 0;
    for(int i = 2; i <= N; i++) {
        dp[i].first = (K - 1) * (dp[i - 1].first + dp[i - 1].second);
        dp[i].second = dp[i - 1].first;
    }
    
    cout << dp[N].first + dp[N].second;
    
}
