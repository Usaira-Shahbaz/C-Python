def inpass():
    global passcode
    passcode = input("Enter New Password: ")

def checkhistory(arrd, arrstrd, arrw, arrstrw):
    ch = int(input("1. To show deposit history\n2. To show withdraw history\n"))
    if ch == 1:
        for i in range(arrcountd):
            print(f"{arrstrd[i]}: {arrd[i]}")
        print()
    elif ch == 2:
        for i in range(arrcountw):
            print(f"{arrstrw[i]}: {arrw[i]}")
        print()
    else:
        print("Invalid Input")

def printpass():
    print(f"Password is: {passcode}")

def deposit(userbal, arrd, arrstrd):
    global bal, arrcountd
    bal += userbal
    print("Your Balance is deposited")
    print(f"Your Balance in account is : {bal}")
    arrd.append(userbal)
    arrstrd.append("User Deposit")
    arrcountd += 1

def withdraw(userwithdraw, arrw, arrstrw):
    global bal, arrcountw
    if bal == 0:
        print("Account is empty")
    elif bal > userwithdraw:
        bal -= userwithdraw
        arrw.append(userwithdraw)
        print("Money is withdraw")
        print(f"Your remaining balance in account is : {bal}")
        arrstrw.append("User Withdraw")
        arrcountw += 1
    else:
        print("Balance is low")

if __name__ == "__main__":
    bal = 0
    arrcountd = 0
    arrcountw = 0
    arrd = []
    arrstrd = []
    arrw = []
    arrstrw = []

    print("Welcome to ATM Machine")
    inpass()

    while True:
        choice = int(input("1. Check history of balance\n2. Withdraw cash\n3. Deposit cash\n4. Wants to change account password\n5. Wants to check your password\n6. Press -1 to exit program\n"))
        if choice == 1:
            checkhistory(arrd, arrstrd, arrw, arrstrw)
        elif choice == 2:
            withbalance = int(input("How much balance you wants to withdraw: "))
            withdraw(withbalance, arrw, arrstrw)
        elif choice == 3:
            depositbalance = int(input("How much balance you wants to deposit: "))
            deposit(depositbalance, arrd, arrstrd)
        elif choice == 4:
            inpass()
        elif choice == 5:
            printpass()
        elif choice == -1:
            break
        else:
            print("Invalid Input")
