import codecs

lines = []
while True:
     line = input()
     if line:
         lines.append(line)
     else:
         break

for i in lines:
    byte_array = bytearray.fromhex(i)
    print(byte_array.decode())
