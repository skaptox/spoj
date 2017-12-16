"""
http://www.spoj.com/problems/ADDREV/
"""
def main():
    n = int(input())
    for i in range(n):
        num1, num2 = input().split()
        sum = int(num1[::-1]) + int(num2[::-1])
        print(str(sum)[::-1].strip("0"))

if __name__ == "__main__":
    main()
