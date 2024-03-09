from cs50 import get_float

def main():
    while True:
        input = get_float("Change owed: ")

        if input > 0:
            break
    calculation(input)

def calculation(input):
    quarter = 25
    dime = 10
    nickel = 5
    penny = 1

    sum, q, d, n, p = 0, 0, 0, 0, 0

    input *= 100

    if input >= quarter:
        q = int(input / quarter)
        input -= quarter * q

    if input >= dime:
        d += int(input / dime)
        input -= dime * d

    if input >= nickel:
        n += int(input / nickel)
        input -= nickel * n

    if input >= penny:
        p += int(input / penny)

    sum = q + d + n + p

    print(f"{sum}")

main()
