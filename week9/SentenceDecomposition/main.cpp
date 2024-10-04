#include "SentenceDecomposition.hpp"

int main() {
    SentenceDecomposition test;
    std::cout << test.decompose("neotowheret", {"one", "two", "three", "there"}) << std::endl;
    std::cout << test.decompose("abba", {"ab", "ac", "ad"}) << std::endl;
    std::cout << test.decompose("ommwreehisymkiml", {"we", "were", "here", "my", "is", "mom", "here", "si", "milk", "where", "si"}) << std::endl;
    std::cout << test.decompose("ogodtsneeencs", {"go", "good", "do", "sentences", "tense", "scen"}) << std::endl;
    std::cout << test.decompose("sepawaterords", {"separate","words"}) << std::endl;
    return 0;
}