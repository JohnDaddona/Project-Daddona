file_path = "feed_data.csv"
temp_vals = []

with open(file_path, "r") as file:
  file.readline()  # Skip the header line
  for line in file:
      fields = line.strip().split(",")  # Split by comma
      temp_vals.append(float(fields[1]))  # Add the

min_temp = temp_vals[0]
max_temp = temp_vals[0]
total = 0

for value in temp_vals:
  total += value
  if value < min_temp:
    min_temp = value
  if value > max_temp:
    max_temp = value

average_temp = total / len(temp_vals)

print(f"Minimum Temp: {min_temp}\nMaximum Temp: {max_temp}\nAverage Temp: {average_temp}")

