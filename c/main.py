def binary(n):
    if n == 0:
        return ""
    return binary(n // 2) + str(n % 2)

num = int(input("Enter a decimal number: "))
print(f"Binary representation: {binary(num)}")
