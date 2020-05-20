#include <string>
#include "lib/Reverse.h"

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

TEST_CASE("simple")
{
    std::string toRev = "Hello";

    Reverse rev;
    auto res = rev.reverse(toRev);

    REQUIRE(res == "olleH");
}

TEST_CASE("empty")
{
    std::string toRev;

    Reverse rev;
    auto res = rev.reverse(toRev);

    REQUIRE(res == "");
}

// TEST_CASE("should fail")
// {
//     std::string toRev = "abcd";

//     Reverse rev;
//     auto res = rev.reverse(toRev);

//     REQUIRE(res == "4321");
// }