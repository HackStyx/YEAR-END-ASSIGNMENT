stationary_prices = {
    'Scale': 10,
    'Pen': 20,
    'Eraser': 5,
    'Sharpener': 8
}

# Print Stationary Items and Prices
print("------------------Stationary Items------------")
for item, price in stationary_prices.items():
    print(f"{item:<20} Rupees {price}")
