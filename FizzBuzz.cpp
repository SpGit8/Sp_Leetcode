/*
Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. 
For numbers which are multiples of both three and five output “FizzBuzz”.*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> res;
        for (int i = 1; i<= n; i++){
            bool mult3 = (i%3 == 0);
            bool mult5 = (i%5 == 0);
            bool mult35 = (mult3 && mult5);
            
            if (mult35)
                res.push_back("FizzBuzz");
            else if (mult3)
                res.push_back("Fizz"); 
            else if (mult5)
                res.push_back("Buzz");
            else
                res.push_back(to_string(i));
        }
        return res;
    }
};
