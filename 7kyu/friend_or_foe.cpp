/*
Problem: Friend or Foe
Source: Codewars
Difficulty: 7kyu
Link: https://www.codewars.com/kata/55b42574ff091733d900002f

Description:
Given a list of names, return only those with exactly 4 characters.

Approach:
- Loop through the input vector
- Check if string length == 4
- Store valid names in result vector
*/

#include <string>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input) {
    // Good luck!

  std::vector<std::string> result;
  
  for (const std::string &name : input)
    {
    if (name.length()== 4 ){
      result.push_back(name);
    }
  };
    return result;
}
