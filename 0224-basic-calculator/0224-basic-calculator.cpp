class Solution {
public:
    int calculate(string s) {
        stack<long long> nums;
        stack<char> ops;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if (ch == ' ')
                continue;
            if (isdigit(ch)) {
                long long num = 0;
                while (i < n && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i--;
                nums.push(num);
            } else if (ch == '(') {
                ops.push(ch);
            } else if (ch == '+' || ch == '-') {

                int j = i - 1;
                while (j >= 0 && s[j] == ' ')
                    j--;

                if (j < 0 || s[j] == '(' || s[j] == '+' || s[j] == '-') {
                    nums.push(0);
                }

                while (!ops.empty() && ops.top() != '(') {
                    apply(nums, ops);
                }
                ops.push(ch);
            } else if (ch == ')') {
                while (!ops.empty() && ops.top() != '(') {
                    apply(nums, ops);
                }
                ops.pop();
            }
        }
        while (!ops.empty()) {
            apply(nums, ops);
        }

        return (int)nums.top();
    }

private:
    void apply(stack<long long>& nums, stack<char>& ops) {
        long long b = nums.top();
        nums.pop();
        long long a = nums.top();
        nums.pop();
        char op = ops.top();
        ops.pop();

        if (op == '+')
            nums.push(a + b);
        else
            nums.push(a - b);
    }
};
