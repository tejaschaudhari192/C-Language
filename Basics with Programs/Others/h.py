import tkinter as tk


def convert():
    # Get the user input
    input_value = float(input_entry.get())
    input_unit = input_unit_var.get()
    output_unit = output_unit_var.get()

    # Perform the conversion
    converted_value = 0.0

    # Conversion logic based on input_unit and output_unit
    if input_unit == "Meter" and output_unit == "Foot":
        converted_value = input_value * 3.28084
    elif input_unit == "Foot" and output_unit == "Meter":
        converted_value = input_value * 0.3048
    elif input_unit == "Kilometer" and output_unit == "Mile":
        converted_value = input_value * 0.621371
    elif input_unit == "Mile" and output_unit == "Kilometer":
        converted_value = input_value * 1.60934
    elif input_unit == "Meter" and output_unit == "Kilometer":
        converted_value = input_value * 0.001
    elif input_unit == "Kilometer" and output_unit == "Meter":
        converted_value = input_value * 1000

    # Update the result label
    result_label.config(text=str(converted_value))


# Create the main window
window = tk.Tk()
window.title("Unit Converter")

# Create labels and entry fields
input_label = tk.Label(window, text="Input Value:")
input_label.pack()
input_entry = tk.Entry(window)
input_entry.pack()

input_unit_label = tk.Label(window, text="Input Unit:")
input_unit_label.pack()
input_unit_var = tk.StringVar(window)
input_unit_var.set("Meter")  # Set a default value
input_unit_option = tk.OptionMenu(
    window, input_unit_var, "Meter", "Foot", "Kilometer", "Mile"
)
input_unit_option.pack()

output_unit_label = tk.Label(window, text="Output Unit:")
output_unit_label.pack()
output_unit_var = tk.StringVar(window)
output_unit_var.set("Foot")  # Set a default value
output_unit_option = tk.OptionMenu(
    window, output_unit_var, "Meter", "Foot", "Kilometer", "Mile"
)
output_unit_option.pack()

# Create the button to perform conversion
convert_button = tk.Button(window, text="Convert", command=convert)
convert_button.pack()

# Create a label to display the result
result_label = tk.Label(window, text="")
result_label.pack()

# Start the GUI main loop
window.mainloop()
