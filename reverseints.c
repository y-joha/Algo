int reverseints(int num)
{
    int reversed = 0, last_digit = 0;
    while (!num)
    {
        // places rightmost digit in last digit
        last_digit = num % 10;
        // this pushes the number to the left (multiply by 10)
        reversed = reversed * 10 + last_digit;

        num /= 10;
    }
    return reversed;
}