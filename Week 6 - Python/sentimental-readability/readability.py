from cs50 import get_string

def main():
    input = get_string("Text: ")

    letters = count_letter(input)
    words = count_word(input)
    sentences = count_sentence(input)

    avgLetters = (100 / float(words)) * float(letters)
    avgSentences = (100 / float(words)) * float(sentences)

    index = round(0.0588 * avgLetters - 0.296 * avgSentences - 15.8)

    if index < 1:
        print("Before Grade 1")

    elif index > 16:
        print("Grade 16+")

    else:
        print(f"Grade {index}")


def count_letter(input):
    letter = 0

    for i in input:
        if i.isalpha():
            letter += 1
    return letter

def count_word(input):
    return len(input.split())

def count_sentence(input):
    sentence = 0

    for j in input:
        if j in [".", "!", "?"]:
            sentence += 1

    return sentence

main()
