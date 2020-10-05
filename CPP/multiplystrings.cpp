class Solution {
public:
    string multiply(string num1, string num2)
    { 
        int p;
        int first = std::stoi(num1);
        int second = std::stoi(num2);
      p=first*second;
     std::string str = to_string(p);

   return str;
    }
};
