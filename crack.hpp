#include <algorithm>
#include <chrono>
#include <cstring>
#include <fstream>
#include <iostream>
#include <mutex>
#include <sstream>
#include <thread>
#include <vector>

#include "sha256.h"

struct crack {
    static const std::string salt;
    static const std::vector<std::string> hashes;
    static const std::string lastHash;

    std::mutex foundMutex;
    std::vector<std::string> foundPasswords;
    std::thread concatanatedWordsThread;
    std::thread randomStringsThread;
    std::vector<std::thread> trailingWordsThreads = std::vector<std::thread>(4);
    std::thread replaceVowelsThread;
    std::vector<std::thread> guessWordsThreads;
    std::vector<std::thread> rockyouThreads = std::vector<std::thread>(15);
    std::chrono::_V2::system_clock::time_point start;
    std::chrono::_V2::system_clock::time_point end;

    void addPassword(std::string& word);
    void guessWords(std::string file);
    void rockyou(int filePart);
    void concatanate();
    void randomStrings();
    void trailingWords(int filePart);
    void replaceVowels();
    void lastHashSleuth(int filePart);

   public:
    crack() = default;
    void createThreads();
    void joinThreads();
    void removeDuplicates();
    void printResults();
    void printStats();
    void findLastHash();
};