paragraph = input("Enter a paragraph: ")

words = paragraph.lower().split()

frequency = {}

for word in words:
    if word in frequency:
        frequency[word] += 1
    else:
        frequency[word] = 1

print("\nWord Frequencies:")

for word, count in frequency.items():
    print(word, ":", count)