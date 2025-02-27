

{
    // pattern :
    //  1 2 3 4 5 -- -- -- >  i = (n - i)
    //  0 2 4 8 -----> 2*i = 2*n -(2*i)
    //  1 3 5 7 9 -- -- -- >  2 *i + 1 = 2 * n - (2 * i + 1)
    //  2 *n = 2 * n - 1
    //  6 4 2 0 ----> first = 2(n-1)   first =-2;

    // flip :
    // start =1;
    // start = 1- start

    // char :  A B C D E ...Z
    // 'A'+1 ='A';
    // 'A'+2 ='B';
    // 'A'+3 ='C'
    // 'A'+i = 'z'  // loop finish after 'z'
    // 'A'+i = 'A' + (n-i)  : A B C D E F

    // digit :
    // 1234 % 10 = always give last_digit(4);
    // 1234 / 10 = always remove last_digit;
    // reverse = reverse *10 + last_digit;   123=321
    // count_digit = (int) (log10(n)+1)
    // (n != 0) = negative + posative ;  (n > 0) = only postive
    // palindorm = (original == reverse)
    // armstrong = (original == sum of digit cube) 1^3 + 2^3 + 3^3
    // sqrt(n) == i*i<=n
    // divisor :  if(n%i==0){ i ; if(n/i != i) n/i }
    // prime_number  = more than two divisor;
    // GCD : __gcd(a,b); LCM : a*b / gcd(a,b);

    // recurtion :
    //  factorial:  return n* fact(n-1);
    //  sumofdigit : return n + sumofdigit(n-1);
    //

    // Hashing :
    // a - 97  z- 122
    // 'a'-'a'=0 or a-'0'=1
    // 'b'-'a'=1  or b-'0'=2
    // 'c'-'a'=2
    // hash[arr[i]]++;
    // hash[str[i]-'a']++;  == index
    // int hash[256]={0};
    // hash[always contain (int)]

    // array relate:

    // if(total_sum % n ==0) possible to all emement equal in array; sun/2 
}