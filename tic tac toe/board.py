
# ========  DISPLAY BOARD ========
board=["-","-","-","-","-","-","-","-","-"]
#  PLAY GAME
def play_game():
    display_board()

def display_board():
    print('\n')
    print(f"   {board[0]} |  {board[1]} |  {board[2]}   ")
    print(" ____|____|____")
    print(f"   {board[3]} |  {board[4]} |  {board[5]}   ")
    print(" ____|____|____")
    print(f"   {board[6]} |  {board[7]} |  {board[8]}   ")
    print("\n")
    