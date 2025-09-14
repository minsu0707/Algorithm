while True:
    text = input()
    if text == "END":
        break
    revers_text = "".join(reversed(text))
    print(revers_text)