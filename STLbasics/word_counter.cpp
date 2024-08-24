#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

// Function to filter out punctuation from a word
string filter_punctuation(const string &s)
{
    const char *forbidden{".,:; "};
    const auto idx_start(s.find_first_not_of(forbidden));
    const auto idx_end(s.find_last_not_of(forbidden));
    return s.substr(idx_start, idx_end - idx_start + 1);
}

int main()
{
    // Create a map to store word frequencies
    map<string, size_t> words;
    int max_word_len{0}; // Initialize the maximum word length

    string s;
    while (cin >> s)
    {
        auto filtered(filter_punctuation(s));                     // Filter punctuation from the input word
        max_word_len = max<int>(max_word_len, filtered.length()); // Update max_word_len
        ++words[filtered];                                        // Increment the word count in the map
    }

    // Create a vector to store word-count pairs
    vector<pair<string, size_t>> word_counts;
    word_counts.reserve(words.size());                          // Reserve memory for efficiency
    move(begin(words), end(words), back_inserter(word_counts)); // Move data from map to vector

    // Sort the word-count pairs by count (descending order)
    sort(begin(word_counts), end(word_counts), [](const auto &a, const auto &b)
         { return a.second > b.second; });

    // Print the word frequencies
    cout << "# " << setw(max_word_len) << "<WORD>" << " #<COUNT>\n";
    for (const auto &entry : word_counts)
    {
        const auto &word = entry.first;
        const auto &count = entry.second;
        cout << setw(max_word_len + 2) << word << " #" << count << '\n';
    }
}