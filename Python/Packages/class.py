class user:
    def __init__(self, username, active="true"):
        self.username = username
        self.active = active

u = user("Viji")
print(u.username)
print(u.active)