MAX_ING = 5
storage = []
num_ing = 0


def is_valid_date(day, month, year):
    if year < 2000 or year > 2023 or month < 1 or month > 12 or day < 1:
        return False

    max_days = 30 if month in [2, 4, 6, 9, 11] else 31
    return (day <= max_days)


print("Welcome to the restaurant's inventory management system!\n")



while True:
    input_str = input(
        "\nEnter an ingredient name to add to storage (or 'exit' to quit): "
    )

    if input_str == "exit":
        break

    if num_ing >= MAX_ING:
        print(
            "Storage is full. Removing the oldest ingredient using the FIFO algorithm."
        )
        oldest_ing = storage[0]

        for i in range(1, MAX_ING):
            if (
                storage[i]["year"] < oldest_ing["year"]
                or (
                    storage[i]["year"] == oldest_ing["year"]
                    and storage[i]["month"] < oldest_ing["month"]
                )
                or (
                    storage[i]["year"] == oldest_ing["year"]
                    and storage[i]["month"] == oldest_ing["month"]
                    and storage[i]["day"] < oldest_ing["day"]
                )
            ):
                oldest_ing = storage[i]

        print(
            f"Removing {oldest_ing['name']} from storage (added on {oldest_ing['day']}/{oldest_ing['month']}/{oldest_ing['year']})"
        )
        storage = storage[1:]
        num_ing -= 1

    new_ing = {}
    new_ing["name"] = input_str
    
    while True:
        input_str = input(
            f"Enter the date when {new_ing['name']} was added to storage (DD/MM/YYYY): "
        )
        try:
            day, month, year = map(int, input_str.split("/"))
            if is_valid_date(day, month, year):
                new_ing["day"] = day
                new_ing["month"] = month
                new_ing["year"] = year
                break
            else:
                print("The date you entered is not valid.")
        except ValueError:
            print("Invalid date format, please enter date in format DD/MM/YYYY")

    storage.append(new_ing)
    num_ing += 1

print("\nFinal storage contents:")
for i in range(num_ing):
    print(f"{storage[i]['name']} (added on {storage[i]['day']}/{storage[i]['month']})")
