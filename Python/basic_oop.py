# Use basic OOP create ATM  5 methods
class ATM():
    def __init__(self, name, bank1, bank2, balance1, balance2):
        self.name = name
        self.bank1 = bank1
        self.bank2 = bank2
        self.balance1 = balance1
        self.balance2 = balance2
    def check_balance(self):
        select = input("Please select your bank account : ")
        if select == "SCB":
            print(f"Current Balance : {self.balance1} ")
        else:
            print(f"Current Balance : {self.balance2} ")
    def deposit_account(self):
        deposit = int(input("How many do you want to deposit in your bank account ? "))
        select = input("Please select your bank account : ")
        if select == "SCB":
            self.balance1 += deposit
            print(f"Current Balance : {self.balance1} ")
        else:
            self.balance2 += deposit
            print(f"Current Balance : {self.balance2} ")
    def withdraw_account(self):
        withdraw = int(input("How many do you want to withdarw in your bank account ? "))
        select = input("Please select your bank account : ")
        if select == "SCB":
            self.balance1 -= withdraw
            print(f"Current Balance : {self.balance1} ")
        else:
            self.balance2 -= withdraw
            print(f"Current Balance : {self.balance2} ")
    def transfer_amount(self):
        select = input("Please select your bank account for fransfer : ")
        if select == "SCB":
            print(f"Current Balance : {self.balance1} ")
        else:
            print(f"Current Balance : {self.balance2} ")

        target = input("Please fill bank account : ")
        amount = int(input("How many do you want to transter ? "))
        if target == "SCB":
            self.balance1 += amount
            self.balance2 -= amount
            print(f"Current Balance : {self.balance2} ")
        else:
            self.balance1 -= amount
            self.balance2 += amount
            print(f"Current Balance : {self.balance1} ")
        print("Completed")
account = ATM("Phlu", "SCB", "BBL", 1000, 2000)
account.check_balance()
account.deposit_account()
account.withdraw_account()
account.transfer_amount()
