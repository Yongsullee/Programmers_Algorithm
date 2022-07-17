#include <string>
#include <vector>
#include <map>

using namespace std;

map<string, char> m = {
    {"zero", '0'},
    {"one", '1'},
    {"two", '2'},
    {"three", '3'},
    {"four", '4'},
    {"five", '5'},
    {"six", '6'},
    {"seven", '7'},
    {"eight", '8'},
    {"nine", '9'},
};

int solution(string s)
{

    int answer = 0;

    string Result = "";
    string Cur = "";

    for (auto it = cbegin(s); it != cend(s); ++it)
    {
        // 1. 숫자 문자열일 경우
        if (isdigit(*it) != 0)
        {
            Result.push_back(*it);
        }
        else
        {
            Cur.push_back(*it);

            if (m.find(Cur) != cend(m))
            {
                Result.push_back(m[Cur]);
                Cur.clear();
            }
        }
    }
    return answer = stoi(Result);
}