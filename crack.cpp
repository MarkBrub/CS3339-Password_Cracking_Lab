#include "crack.hpp"

const std::string crack::salt("Jj34PeT5GwQzyV4AOhbO5dEljbveRdk3");
const std::vector<std::string> crack::hashes({ "005ed5afbcb8a0d41ff28b5a09d36b5c1b21ebe7f585fa18652ee572a0a3aa36", "07ba4892f05199fd3635f7dff8001d7a182d86c56da1bcd7c427fa712eb4d10b", "0b091ac369e15d3c04e6506fa7e14ec6068ef92f764741a7e7c4be0155572cc3", "0e32a76bda2112809442bd043da24589c88d8ef08250aea21ce1c21ec3aee8f7", "105c8669f2c114ecc07ff266df10987b2bbfc7dde56fae0d782e2e6946794603", "106ec8b9aa2f0d3d5ab90dc07561c324a72d57fca13601496b45a94d176beebd", "1cce47d08447d0db07d0a0790c14a2a9b9f33d9b00fbc4b3296b3204f98e9648", "26ca15a2ded1f9be16550d8836c59f0b490bf86515e6772cd60510a0716be93a", "292805bab6f83c1df81822e34cb51da81a4c2d33bad3bfebb863bb95b97f6fe4", "320b6f13330ea27a1a4262681161bc411b2c3773dacd54db644512171a1f409e", "346c5da2658f690d18214e7d3e3228d5f2a8b35e28cc433b7b94528994cb09f5", "364c6e224172f49c0d366f6334565c96ff8baf6153cf399a463d4979c9db616b", "3dfa3afcfda07e5d7137788518813f9bd8bc15bb6b66cb865289302e51a4468a", "3fcc3f9c30476aeec454551610fe0dec4896344a3088e7048175a5e6d6dfc441", "4b7120c38eb47f0674f11f23cc86b617c39ac3403bcb8588afc12cb4a228225a", "4d6be36bd9ed9c89c40d8e9f91949855490c3b1de4116704526e72b8c00cce88", "55b5f033cc089d4629dac5665fcc793b5e6a976d6f333f7a324b36a95dd48373", "5de22559eb79ff81628447d611417a5af0cbf3767afbf6731425a31c3d1445f2", "609d45dd22cecc63f7e1d9a9327aa6c17185ff57bf6e24d73da46813ab562de8", "60f82655c7ffd758f9e7d41be46633e361055921f1942dd066e4fd470486eb15", "6165d7b9bb70d481e0ebeb39e25eb6963bc9478c5e3eafb7a09ce98fd0113098", "68d3e6dec48a6b6228f429fc7edb047dcfb7ad2c4c3df83c188a0e543647c1cc", "6bf22acab1f77219bbbf28bc79b9146d8f4c8372889354c7c648b4018ae4bc70", "6ce48f3210b713321c20426353bc4c5beb16133eac32d9b145dac05e115865d2", "6fefadd69963eea749040c6f89b2d42ada5aec0c4d7234bff84c466d1435dd3f", "73c65bae6c6ef23c7db4a3c5d257c35212a5005641d0d9d4fbfc9b985cff13cf", "82294dcdde3432343cff5c4f2b0b0d624a1c55632def9c3747c334ab21669e0a", "8292159c56c4beb4b3bda40cb43da1019923fead920e7cbd0ddf4c7be2ee38ba", "858196733c4d66b9959ac813aec9f1978b228341802c69b71e879cdd53096bbd", "8d88243c19394618e422afff989e4d0a927e41f68f9ee01d3ae09a3200597d59", "97e94b40778857afef5a7479695b7757c060d39bf668f4272c5c2e41e90e6fea", "9c656e3c56ddafc2dc3d1cdf37a6988e5dc63711eb680c8185bbfcaea0543fd9", "a89785d0d23283a0563b6a0b6b9e41a49e875d2bdeb61fedded8ea97a3c522bf", "aa5b8f2818562ae363b7646f03d7a1644f7341c0888e2eb1e6bc5b0ba6a4a432", "b2e9406531f2858f4d566d72a9eabcda3637afedf722495eb40a4d13f2718887", "ba1bc057d1c632145801bf2e24b16c18a705a096eaa857c1bb3e8387c6e7b59d", "bbd925f382f4e3e8968985db8ee5692f1bb85ec3629e7ad38b01cb4544cf37ec", "bf65aadf45a8f501177bdc3380fe3e64893c13670b3ac37096550a7852c5107a", "c0c22c764a2b0d4b6b8ffaaae4f496938b5920d3e1f1273bd84d2e2ec858a87e", "c348dd9f7129163d0ad8f9579fff4dc54f31453bc1ef1f419090a743797b7f36", "c3b20ae7d8f81510e8a64612512b75e727e69c9a6b93fc99b469575c99b505ee", "c58435949f32ad7fe2fdcfd6c61dd7d81769dd546c030e74e20b262721956938", "c70760a43a135c8677b61c1d5de01a203c24f4dc9698474c2b26e53c9f2fe2a9", "c97b0361337dbfeb2b4f44b93228fdb05e37e347d7c14ca33e97382f39818e4f", "ca068bc830ac8479a468b8d81d7a756117d2656067fd89c459f08478bd5aff1a", "d77a8dda722ac069107a54149a406430edf8cb2cf33a1f885e37c0f1532b229b", "d7c2e88dd703553e1f421d6b925d9cae52ea362858487c0921bbadb7704bf976", "e63a6e9d493e62cd6e7ef85f4ca652e9ea32a567012f75aaff4625ee8741b082", "e842fc8d378d3f86bc5b5efce1f79e5c6a664ae73dca50bdc076cbde263c0fe9", "ec49b1081aebc1bb59225825ac91ea446f6c0a66ee25c7e18d74938e09b1bbec", "efcd82d02be4c1dd4b1704eebd40beb9af6177fa02ef04f0ea6740495df53142", "f192f7eb66889fcc5df9863096b90e5b664e408a520bd78654cc78f1dc736934", "f230cffd5410a007b9360fc2e8428dd1de825d3fe73e9986a2f16479ab311112", "f7d2d334dff2e127be6e7cc84cd91753de2391ec41a5c8431040ed29b11e1112", "fcdbf8827386fa0613d6f84fef3aa0458d1e317cf2b43f4072d035af1e3eaa8f" });
const std::string crack::lastHash("82294dcdde3432343cff5c4f2b0b0d624a1c55632def9c3747c334ab21669e0a");

void crack::createThreads() {
    start = std::chrono::high_resolution_clock::time_point::clock::now();

    concatanatedWordsThread = std::thread(&crack::concatanate, this);
    randomStringsThread = std::thread(&crack::randomStrings, this);
    for (int x = 0; x < trailingWordsThreads.size(); x++) {
        trailingWordsThreads[x] = std::thread(&crack::trailingWords, this, x + 1);
    }
    replaceVowelsThread = std::thread(&crack::replaceVowels, this);
    guessWordsThreads.emplace_back(std::thread(&crack::guessWords, this, "wordLists/words.txt"));
    guessWordsThreads.emplace_back(std::thread(&crack::guessWords, this, "wordLists/words+.txt"));
    guessWordsThreads.emplace_back(std::thread(&crack::guessWords, this, "wordLists/longwords.txt"));
    guessWordsThreads.emplace_back(std::thread(&crack::guessWords, this, "wordLists/moreWords.txt"));
    for (int x = 0; x < rockyouThreads.size(); x++) {
        rockyouThreads[x] = std::thread(&crack::rockyou, this, x + 1);
    }
}

void crack::joinThreads() {
    concatanatedWordsThread.join();

    randomStringsThread.join();
    replaceVowelsThread.join();
    for (auto& t : trailingWordsThreads) {
        t.join();
    }
    for (auto& t : guessWordsThreads) {
        t.join();
    }
    for (auto& t : rockyouThreads) {
        t.join();
    }

    end = std::chrono::high_resolution_clock::time_point::clock::now();
}

void crack::removeDuplicates() {
    std::sort(foundPasswords.begin(), foundPasswords.end());
    foundPasswords.erase(std::unique(foundPasswords.begin(), foundPasswords.end()), foundPasswords.end());
}

void crack::printResults() {
    std::ofstream out("cracked.txt");

    for (auto p : foundPasswords) {
        out << sha256(salt + p) << ":" << p << std::endl;
    }

    out.close();
}

void crack::printStats() {
    double elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << foundPasswords.size() << " out of 55 passwords found in " << elapsedTime << " milliseconds" << std::endl;
}

void crack::findLastHash() {
    std::vector<std::thread> lastHashThreads;

    for (int x = 1; x <= 8; x++) {
        lastHashThreads.emplace_back(std::thread(&crack::lastHashSleuth, this, x));
    }

    for (auto& t : lastHashThreads) {
        t.join();
    }
}

void crack::addPassword(std::string& word) {
    foundMutex.lock();

    foundPasswords.push_back(word);

    foundMutex.unlock();
}

void crack::guessWords(std::string file) {
    std::ifstream wordFile(file);
    std::string word;

    while (wordFile >> word) {
        std::string hash(sha256(salt + word));
        if (std::binary_search(hashes.begin(), hashes.end(), hash)) addPassword(word);

        //capitalize the first letter
        word[0] = toupper(word[0]);
        hash = sha256(salt + word);
        if (std::binary_search(hashes.begin(), hashes.end(), hash)) addPassword(word);

        //capitalize the whole word
        std::for_each(word.begin(), word.end(), [](auto& c) { c = toupper(c); });
        hash = sha256(salt + word);
        if (std::binary_search(hashes.begin(), hashes.end(), hash)) addPassword(word);
    }

    wordFile.close();

    std::stringstream s;
    s << "guessWords thread for " << file << " finished" << std::endl;
    std::cout << s.str() << std::flush;
}

void crack::rockyou(int filePart) {
    std::ifstream rockyouFile("wordLists/rockyou" + std::to_string(filePart) + ".txt");
    std::string word;

    while (std::getline(rockyouFile, word)) {
        std::string hash(sha256(salt + word));
        if (std::binary_search(hashes.begin(), hashes.end(), hash)) addPassword(word);
    }

    rockyouFile.close();

    std::stringstream s;
    s << "rockyou thread " << filePart << " finished" << std::endl;
    std::cout << s.str() << std::flush;
}

void crack::concatanate() {
    std::ifstream file1("wordLists/words+.txt");
    std::string word1;

    while (file1 >> word1) {
        std::ifstream file2("wordLists/words+.txt");
        std::string word2;

        while (file2 >> word2) {
            std::string newWord(word1 + word2);
            std::string hash(sha256(salt + newWord));
            if (std::binary_search(hashes.begin(), hashes.end(), hash)) addPassword(newWord);
        }

        file2.close();
    }

    file1.close();

    std::stringstream s;
    s << "concatanate thread finished" << std::endl;
    std::cout << s.str() << std::flush;
}

void crack::randomStrings() {
    std::ifstream file("wordLists/randomStrings.txt");
    std::string word;

    while (file >> word) {
        std::string hash(sha256(salt + word));
        if (std::binary_search(hashes.begin(), hashes.end(), hash)) addPassword(word);
    }

    file.close();

    std::stringstream s;
    s << "randomStrings thread finished" << std::endl;
    std::cout << s.str() << std::flush;
}

void crack::trailingWords(int filePart) {
    std::ifstream file1("wordLists/words" + std::to_string(filePart) + ".txt");
    std::string word;

    while (file1 >> word) {
        std::ifstream file2("wordLists/numsAndSymbols.txt");
        std::string suffix;

        while (file2 >> suffix) {
            std::string newWord(word + suffix);
            std::string hash(sha256(salt + newWord));
            if (std::binary_search(hashes.begin(), hashes.end(), hash)) addPassword(newWord);
        }

        file2.close();
    }

    file1.close();

    std::stringstream s;
    s << "trailingWords thread " << filePart << " finished" << std::endl;
    std::cout << s.str() << std::flush;
}

void crack::replaceVowels() {
    std::ifstream wordFile("wordLists/moreWords.txt");
    std::string word;

    while (wordFile >> word) {
        std::replace(word.begin(), word.end(), 'a', '@');
        std::replace(word.begin(), word.end(), 'e', '3');
        std::replace(word.begin(), word.end(), 'i', '1');
        std::replace(word.begin(), word.end(), 'o', '0');
        std::string hash(sha256(salt + word));
        if (std::binary_search(hashes.begin(), hashes.end(), hash)) addPassword(word);
    }

    wordFile.close();

    std::stringstream s;
    s << "replaceVowels thread finished" << std::endl;
    std::cout << s.str() << std::flush;
}

void crack::lastHashSleuth(int filePart) {
    std::ifstream file1("wordLists/words" + std::to_string(filePart) + ".txt");
    std::string word1;

    while (file1 >> word1) {
        std::ifstream file2("wordLists/words.txt");
        std::string word2;

        while (file2 >> word2) {
            std::string newWord(word1 + word2);
            std::string hash(sha256(salt + newWord));
            if (hash == lastHash) {
                std::cout << newWord << std::endl;
                addPassword(newWord);
                return;
            }

            word2[0] = toupper(word2[0]);
            newWord = word1 + word2;
            hash = sha256(salt + newWord);

            if (hash == lastHash) {
                std::cout << newWord << std::endl;
                addPassword(newWord);
                return;
            }

            std::for_each(newWord.begin(), newWord.end(), [](auto& c) { c = toupper(c); });

            hash = sha256(salt + newWord);

            if (hash == lastHash) {
                std::cout << newWord << std::endl;
                addPassword(newWord);
                return;
            }
        }

        file2.close();
    }

    file1.close();

    std::stringstream s;
    s << "Thread " << filePart << " finished" << std::endl;
    std::cout << s.str() << std::flush;
}