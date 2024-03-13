#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> lost_socks(K);
    for (int i = 0; i < K; ++i) {
        cin >> lost_socks[i];
    }

    // 組み合わせの数（奇数の場合は1つ減らす）
    int pairs = (2 * N - K) / 2;
    // 奇妙さの合計
    int total_weirdness = 0;
    // 現在の色
    int current_color = 1;

    for (int i = 0; i < pairs; ++i) {
        // 次の利用可能な色を探す
        while (find(lost_socks.begin(), lost_socks.end(), current_color) != lost_socks.end()) {
            ++current_color;
        }
        int next_color = current_color + 1;
        // 次のペアのための色を探す
        while (find(lost_socks.begin(), lost_socks.end(), next_color) != lost_socks.end()) {
            ++next_color;
        }
        // 奇妙さを加算
        total_weirdness += next_color - current_color;
        // 更新
        current_color = next_color + 1;
    }

    cout << total_weirdness << endl;
    return 0;
}
