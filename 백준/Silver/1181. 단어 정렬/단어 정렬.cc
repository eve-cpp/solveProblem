#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    vector<string> words[51]; // 최대 길이 50까지

    cin >> N;
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        int length = word.length();
        words[length].push_back(word);
    }

    for (int i = 1; i <= 50; i++) { // 1부터 50까지 길이 순으로 출력
        if (!words[i].empty()) {
            sort(words[i].begin(), words[i].end());
            words[i].erase(unique(words[i].begin(), words[i].end()), words[i].end());
            for (const string& word : words[i]) {
                cout << word << "\n";
            }
        }
    }
}
