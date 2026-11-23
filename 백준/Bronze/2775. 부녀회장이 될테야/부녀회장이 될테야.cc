
#include <iostream>
using namespace std;

int main() {
    // 입출력 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int k, n;
        cin >> k >> n;

        // 15 x 15 배열 선언 및 0으로 초기화
        int apt[15][15] = {0};

        // 0층 초기화: n호에는 n명이 거주
        for (int i = 1; i <= n; i++) {
            apt[0][i] = i;
        }

        // 각 층과 호수별 거주자 수 계산
        // 점화식: apt[i][j] = apt[i][j-1] + apt[i-1][j]
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
            }
        }

        cout << apt[k][n] << '\n';
    }

    return 0;
}
