#include "ctest.h"
#include "check.h"
//STRLN
CTEST(string_lenght, zero_symbol_str) {
    int n;
    char str[4];
    str[0] = '\0';
    n = strln(str);
    ASSERT_EQUAL(0, n);
}
CTEST(string_lenght, one_symbol_str) {
    int n;
    n = strln("a");
    ASSERT_EQUAL(1, n);
}
CTEST(string_lenght, standart_str) {
    int n;
    n = strln("basasasasa");
    ASSERT_EQUAL(10, n);
}
CTEST(string_lenght, slash_n_trigger) {
    int n;
    n = strln("basas\nasasa");
    ASSERT_EQUAL(5, n);
}
//CHECKLN
CTEST(check_string_lenght, biggest_lenght) {
    int n = checkln("abu", "ab");
    ASSERT_EQUAL(1, n);
}
CTEST(check_string_lenght, equivalent_lenght) {
    int n = checkln("abu", "abu");
    ASSERT_EQUAL(0, n);
}
CTEST(check_string_lenght, least_lenght) {
    int n = checkln("ab", "abu");
    ASSERT_EQUAL(-1, n);
}
//CHECK
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
