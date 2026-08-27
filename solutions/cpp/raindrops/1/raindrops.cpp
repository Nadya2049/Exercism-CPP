using namespace std;
#include <string>
#include "raindrops.h"

namespace raindrops
{
// TODO: add your solution here
    string convert(int n)
    {
        string r = "";
        
        if(n % 3 == 0) r += "Pling";

        if(n % 5 == 0) r += "Plang";

        if(n % 7 == 0) r += "Plong";

        return r.length() > 0 ? r : to_string(n);
    }
}  // namespace raindrops
