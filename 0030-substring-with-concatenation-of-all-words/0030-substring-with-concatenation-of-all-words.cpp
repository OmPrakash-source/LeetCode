class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;

        int wordLength = words[0].size();
        int wordCount = words.size();
        int totalLength = wordLength * wordCount;

        unordered_map<string, int> required;

        for (string word : words) {
            required[word]++;
        }

        for (int start = 0; start < wordLength; start++) {
            int left = start;
            int currentWordCount = 0;

            unordered_map<string, int> current;

            for (int right = start; right + wordLength <= s.size();
                 right += wordLength) {

                string word = s.substr(right, wordLength);

                // Word is not present in words
                if (required.find(word) == required.end()) {
                    current.clear();
                    currentWordCount = 0;
                    left = right + wordLength;
                    continue;
                }

                current[word]++;
                currentWordCount++;

                // Too many occurrences of this word
                while (current[word] > required[word]) {
                    string leftWord = s.substr(left, wordLength);
                    current[leftWord]--;
                    left += wordLength;
                    currentWordCount--;
                }

                // Found all words
                if (currentWordCount == wordCount) {
                    result.push_back(left);

                    // Move window forward
                    string leftWord = s.substr(left, wordLength);
                    current[leftWord]--;
                    left += wordLength;
                    currentWordCount--;
                }
            }
        }

        return result;
    }
};