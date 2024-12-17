#include <iostream>
#include <string>

using namespace std;

/* simple sum */
auto sum(int a, int b, int c)
{
    return a + b + c;
}

/* curried sum */
auto treasure_hunt([](int first_chest){                             //find 10
        return [first_chest](int second_chest){                     //find 20
            return[first_chest, second_chest](int third_chest){     //find 30
                return first_chest + second_chest + third_chest;    //result 10 + 20 + 30
            };
        };
    }
);


int main()
{
    cout << sum(1, 2, 3) << "\n";

    // think it as of treasure box
    auto first_chest = treasure_hunt(10);   /* open 1 box with 10 coins */
    auto second_chest = first_chest(10);    /* open 2 box with 10 coins */
    auto final_chest = second_chest(10);    /* open 3 box with 10 coins [go back home]*/

    cout << "Resulted output: " << final_chest;
}