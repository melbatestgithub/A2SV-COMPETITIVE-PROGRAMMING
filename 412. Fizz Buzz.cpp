class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> output(n,"");
        for(int i=1;i<n+1;i++){
            if(i%15==0) output[i-1]="FizzBuzz";
            else if(i%5==0) output[i-1]="Buzz";
            else if(i%3==0) output[i-1]="Fizz";
            else output[i-1]=to_string(i);
        }
        return output;
        
    }
};
