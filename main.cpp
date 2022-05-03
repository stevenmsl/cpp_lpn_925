#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol925;

/*
Input: name = "alex", typed = "aaleex"
Output: true
Explanation: 'a' and 'e' in 'alex' were long pressed.
*/
tuple<string, string, bool>
testFixture1()
{
  return make_tuple("alex", "aaleex", true);
}

/*
Input: name = "saeed", typed = "ssaaedd"
Output: false
Explanation: 'e' must have been pressed twice, but it wasn't in the typed output.
*/
tuple<string, string, bool>
testFixture2()
{
  return make_tuple("saeed", "ssaaedd", false);
}

/*
Input: name = "leelee", typed = "lleeelee"
Output: true
*/
tuple<string, string, bool>
testFixture3()
{
  return make_tuple("leelee", "lleeelee", true);
}

/*
Input: name = "laiden", typed = "laiden"
Output: true
Explanation: It's not necessary to long press any character.
*/
tuple<string, string, bool>
testFixture4()
{
  return make_tuple("laiden", "laiden", true);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << get<2>(f)
       << ": " << sol.isValid(get<0>(f), get<1>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << get<2>(f)
       << ": " << sol.isValid(get<0>(f), get<1>(f)) << endl;
}

void test3()
{
  auto f = testFixture3();
  Solution sol;
  cout << "Expect to see " << get<2>(f)
       << ": " << sol.isValid(get<0>(f), get<1>(f)) << endl;
}

void test4()
{
  auto f = testFixture4();
  Solution sol;
  cout << "Expect to see " << get<2>(f)
       << ": " << sol.isValid(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  test4();
  return 0;
}