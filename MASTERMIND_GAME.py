def player1(p_1, p_2, p1_attempt):
    if p_1 > 9:
        while True:
            print("Now Player 2 will Guess the Number")
            p_2 = int(input())

            if p_2 == p_1:
                print(f"You Guessed the correct Number {p_1} In {p1_attempt} Attempt")
                if p1_attempt == 1:
                    print("Player 2 Wins Game and He is crowned mastermind")
                    break
                break
            else:
                p1_attempt += 1
                print("You Guessed the Wrong Number")
                print("Player 1 wants to give you a hint")

                p1_digits = [int(d) for d in str(p_1)]
                p2_digits = [int(d) for d in str(p_2)]

                correct_digits = sum(1 for a, b in zip(p1_digits, p2_digits) if a == b)
                print(f"You got {correct_digits} digit(s) correct.")

    else:
        print("Not a Multi_Digit Number")


def player2(p_1, p_2, p2_attempt):
    if p_2 > 9:
        while True:
            print("Now Player 1 will Guess the Number")
            p_1 = int(input())

            if p_1 == p_2:
                print(f"You Guessed the correct Number {p_2} In {p2_attempt} Attempt")
                break
            else:
                p2_attempt += 1
                print("You Guessed the Wrong Number")
                print("Player 2 wants to give you a hint")

                p1_digits = [int(d) for d in str(p_1)]
                p2_digits = [int(d) for d in str(p_2)]

                correct_digits = sum(1 for a, b in zip(p1_digits, p2_digits) if a == b)
                print(f"You got {correct_digits} digit(s) correct.")

    else:
        print("You have not selected a multi-digit number")


def check_result(p1_attempt, p2_attempt):
    if p1_attempt > p2_attempt:
        print("Player 1 wins")
    elif p1_attempt < p2_attempt:
        print("Player 2 wins")
    else:
        print("Both are Equal")


def main():
    p_1 = int(input("Player 1, please enter a multi-digit number: "))
    p_2 = 0
    p1_attempt = 1
    p2_attempt = 1
    chk = 0

    player1(p_1, p_2, p1_attempt)
    if p1_attempt != 1:
        p_2 = int(input("Player 2, please enter a multi-digit number: "))
        player2(p_1, p_2, p2_attempt)

    chk = int(input("Enter 1 to check result\n"))
    if chk == 1:
        check_result(p1_attempt, p2_attempt)


if __name__ == "__main__":
    main()
