def get_height():
    while True:
        try:
            height = int(input("Height: "))

            if height > 0 and height < 9:
                return height
        except ValueError as error:
            print(error)

def print_dash(height):
    for i in range(height):
        print(" " * (height - i - 1), end = "")
        print("#" * (i + 1), end = "")
        print("  ", end = "")
        print("#" * (i + 1))

print_dash(get_height())
