while True:
    try:
        line = input()
        print("".join([chr(int(line[i : i + 2], 16)) for i in range(0, len(line), 2)]))

    except EOFError:
        break
