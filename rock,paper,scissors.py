while True:
    p_1 = input("Player 1 Choose rock, paper or scissors: ")
    p_2 = input("Player 2 Choose rock, paper or scissors: ")

    if p_1 == p_2:
        print("It's a tie! Both players choose", p_1)
    elif (p_1 == "rock" and p_2 == "scissors") or \
         (p_1 == "paper" and p_2 == "rock") or \
         (p_1 == "scissors" and p_2 == "paper"):
        print("Player 1 wins!")
    elif (p_2 == "rock" and p_1 == "scissors") or \
         (p_2 == "paper" and p_1 == "rock") or \
         (p_2 == "scissors" and p_1 == "paper"):
        print("Player 2 wins!")
    else:
        print("Wrong Input! Please choose either rock, paper, or scissors.")
        continue

    again = input("Do you want to play again (yes/no): ")
    if again.lower() != "yes":
        break
