user_str = input()
str_list = [i for i in user_str]
str_upper_list = []
count = 0

for i in str_list:
    count += 1
    ch = i
    if count % 2 == 0:
        ch = ch.upper()
    str_upper_list.append(ch)

str_upper = "".join(str_upper_list)
print(str_upper)
