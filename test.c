#include "ctest.h"
#include "check.h"

CTEST(word_check, right_word) {
    int incorrect_symbols;
    incorrect_symbols = check("hckas", "hckas");
    ASSERT_EQUAL(0, incorrect_symbols);
}
CTEST(word_check, biggest_word) {
    int incorrect_symbols;
    incorrect_symbols = check("hckas", "hckasb");
    ASSERT_EQUAL(1, incorrect_symbols);
}
CTEST(word_check, least_word) {
    int incorrect_symbols;
    incorrect_symbols = check("newfug", "newfu");
    ASSERT_EQUAL(1, incorrect_symbols);
}
CTEST(word_check, first_symbol_incorrect) {
    int incorrect_symbols;
    incorrect_symbols = check("bckas", "hckas");
    ASSERT_EQUAL(1, incorrect_symbols);
}
CTEST(word_check, last_symbol_incorrect) {
    int incorrect_symbols;
    incorrect_symbols = check("hckas", "hckav");
    ASSERT_EQUAL(1, incorrect_symbols);
}
CTEST(word_check, wrong_word) {
    int incorrect_symbols;
    incorrect_symbols = check("hckas", "fffff");
    ASSERT_EQUAL(5, incorrect_symbols);
}
