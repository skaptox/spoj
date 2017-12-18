def trailing_zeros(n):
    i = 5
    count = 0
    while True:
        r = n // i;
        if (r < 1):
           break
        count += r
        i *= 5
    print(count)

def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        trailing_zeros(n)

if __name__ == '__main__':
    main()