class Time:
    def __init__(self, seconds):
        self.seconds = seconds

    def increment_time(self):
        hours = self.seconds // 3600
        minutes = (self.seconds % 3600) // 60
        remaining_seconds = (self.seconds % 3600) % 60

        # Incrementing
        hours += remaining_seconds // 3600
        minutes += (remaining_seconds % 3600) // 60
        remaining_seconds = (remaining_seconds % 3600) % 60 

        print(f"Incremented Time: {hours} hours, {minutes} minutes, {remaining_seconds} seconds")


# Get user input for seconds
user_seconds = int(input("Enter the number of seconds: "))

# Example usage:
time_instance = Time(user_seconds)
time_instance.increment_time()
