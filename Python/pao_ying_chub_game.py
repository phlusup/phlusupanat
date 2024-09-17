from random import choice


def pao_ying_chub():
    round = 1
    com_score = 0
    user_score = 0
    print("Let's play game!")
    hands = ["hammer","scissor","paper"]
    while round < 11:
        print("Round : ", round)
        com_hand = choice(hands)
        print("Please choose your hand: [hammer, scissor, paper]")
        user_hand = input("Your hand: ")
        print("Com hand: ", com_hand)
        if com_hand == "hammer" and user_hand == "scissor":
            com_score += 1
            print("You lose")
        elif com_hand == "scissor" and user_hand == "paper":
            com_score += 1
            print("You lose")
        elif com_hand == "paper" and user_hand == "hammer":
            com_score += 1
            print("You lose")
        elif com_hand == "hammer" and user_hand == "paper":
            user_score += 1
            print("You win")
        elif com_hand == "paper" and user_hand == "scissor":
            user_score += 1
            print("You win")
        elif com_hand == "scissor" and user_hand == "hammer":
            user_score += 1
            print("You win")
        else:
            print("Tie")
        round += 1
    print("Total_com_score : ", com_score)
    print("Total_user_score : ", user_score)
    if com_score > user_score :
        print("You lose !")
    else:
        print("You win !")
pao_ying_chub()
