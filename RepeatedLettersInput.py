# Take user input
ch = input("Enter an uppercase letter: ").upper()

n = ord(ch) - ord('A') + 1  # Number of rows

for i in range(n):
    for j in range(i + 1):
        print(chr(ord('A') + i), end=" ")
    print()
