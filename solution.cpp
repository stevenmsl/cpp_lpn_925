#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
using namespace sol925;
using namespace std;

/*takeaways
  - use two pointers
*/

bool Solution::isValid(string name, string typed)
{
  const int m = name.size();
  const int n = typed.size();
  auto i = 0, j = 0;

  for (auto j = 0; j < n; j++)
  {
    if (i < m && name[i] == typed[j])
    {
      /* j is move to the next by the for loop*/
      i++;
    }
    /* i and j are pointing to different char
      - if j == 0 means the very first char from typed is
        different from the very first char in name
      - if we are not repeating the same char in typed
    */
    else if (j == 0 || typed[j - 1] != typed[j])
      return false;
  }

  /* final check to deal with the cases like the following
     - name = "leelee" typed = "llllllll"
     - i will stop at 1 while j can reach to the end (n)
  */
  return i == m;
}