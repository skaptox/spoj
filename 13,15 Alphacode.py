#http://www.spoj.com/problems/ACODE/

def acode(str):
    n = (len(str)) + 1
    dp = [0] * n
    dp[0] = 1
    dp[-1] = 1
    for i in range(1, len(str)):
        if (str[i] != '0'):
            dp[i] += dp[i-1]
        v = int(str[i-1] + str[i])
        if (v >= 10 and v <= 26):
            dp[i] += dp[i-2]
    return dp[n - 2]

def main():
    while(True):
        str = input()
        if str == "0":
            break
        print(acode(str))

if __name__ == '__main__':
    main()
