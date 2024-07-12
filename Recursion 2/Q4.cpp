// Ques: Predict the output:
// int fun(int n) {
//     if (n <= 1) return 1;
//     if (n % 2 == 0) return fun(n / 2);
//     return fun(n / 2) + fun(n / 2 + 1);
// }

// Solution:
// If n is less than or equal to 1, the function returns 1.
// If n is even, it recursively calls fun(n / 2).
// Otherwise (when n is odd), it computes fun(n / 2) + fun(n / 2 + 1).
