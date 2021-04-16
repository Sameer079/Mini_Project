# Requirements
## Introduction
 * Tic-tac-toe, also known as noughts and crosses, is a game for two players, X and O, who take turns marking the spaces in a 3×3 grid. The player who succeeds in placing three of their marks in a diagonal, horizontal, or vertical row is the winner. It is a solved game with a forced draw assuming best play from both players. It is usually played on paper but as the technology evolved, here is a digital version of it.

## Research
### Tic-tac-toe Game Features and Benefits
It is often used as a pedagogical tool for teaching the concepts of good sportsmanship and the branch of artificial intelligence that deals with the searching of game trees. It is straightforward to write a computer program to play tic-tac-toe perfectly or to enumerate the 765 essentially different positions (the state space complexity) or the 26,830 possible games up to rotations and reflections (the game tree complexity) on this space. If played optimally by both players, the game always ends in a draw, making tic-tac-toe a futile game.


## Benefits
Tic-tac-toe Game offers a few benefits. Here are just a few of them:

### Good Sportsmanship
Like any game, tic tac toe also teaches a person to accept the defeat as well as ackowledge the win.

### Prepares for more complex games
It prepares a person for more complex games because they have to think of multiple things at one time.

### Developement of Coordination
Tic-tac-toe helps to develop coordination, fine motor skills and visual skills.

### Mannerism
It helps one to learn how to follow rules and take turns.

### Concentration
It can help to improve a person's concentration as well as strategic thinking

## Cost and Features with Time 
| Time | Feature | Cost |
| ----- | ----- | ----- |
| 1558| Started as a pen and paper game in Roman Emire, earlier it was called tic tac.   | Free (Pen and Paper) |
| 1952 |In 1952, OXO (or Noughts and Crosses), developed by British computer scientist Sandy Douglas for the EDSAC computer at the University of Cambridge, became one of the first known video games.| $5 |
| 2000-2021 | After Digitalisation, this game is almost free for everyone on multiple mediums.| Cost-effective |

## Defining Our System

![Description](https://github.com/Sameer079/blob/6_Images/flow.png?raw=true)
### Explanation:
* The game starts giving you single input options(1, 2, 3, 4, 5, 6, 7, 8, 9):
    * Player 1 palys with 'X', and enter the no. which place want to select.
    * Player 2 plays with 'O', and enter the no. which place want to select.
* The game ends when:
    * It is in a draw situation , i.e, a total of 9 moves have been completed and nobody has won.
    * Player 1 win.
    * Player 2 wins.
* The game continues in the beginning if the check for draw is false.
* Then it checks if anyone has won yet.
* If not, then it again checks if it is a draw situation.

## SWOT ANALYSIS
![SWOT Analysis]//(https://github.com/ArnoldKevinDesouza/Tic-Tac-Toe/blob/main/6_Media/swot.png?raw=true)

# 4W&#39;s and 1&#39;H

## Who:
* Anyone can play this game. 
* Also, businesses can use it.

## What:
* This game is for recreational purposes. 
* Businesses can also use is for development of strategies as there are many possible outcomes in this game.

## When:
* This game can be played whenever you are feeling bored or want to figure out ways, outcomes and situations of this game.

## Where:
* A variety of websites make a simple tic tac toe game available.
* Also used in businesses and organizations.


## How:
* It can be implemented in a business strategy to help improve it. Business strategy is about moving swiftly and getting an advantageous position. In Tic-Tac-Toe, this is pretty straight forward: The first mover can choose the best position. In business, it is a bit more complicated. Even if business strategy is more complex, the principle is the same: Move swiftly when the time comes, go for an advantageous position.

# Detail requirements
## High Level Requirements: 
| ID | Description | 
| ----- | ----- | 
| HR01 | User shall be able to enter the place for Palyer 1 |
| HR02 | User shall be able to enter the place for player 2 |
| HR03 | Player 1 shall lose and Player 2 shall win|
| HR04 | Player 1 shall win and Player 2 shall lose|
| HR05 | Both Players shall end up in a Draw situation|
##  Low level Requirements:
 
| ID | Description | HLR ID |
| ------ | --------- | ------ |
| LR01 | If the Player 1 enters any digit from 1 to 9 then it should mark 'X' and return invalid if already marked. | HR01 |
| LR02 | If the Player 2 enters any digit from 1 to 9 then it should mark 'O' and return invalid if already marked. | HR02 |
| LR03 | If the Player is playing with 'O', he'll be the Player 2 and get second chance. | HR02 |
| LR04 | If the Player 1 gets 3 Xs in vertical,horizontal or diagonal row, Player 2 will lose. | HR04 |
| LR05 | If the Player 2 gets 3 Os in vertical,horizontal or diagonal row, he'll win. | HR03 |
| LR06 | If the total number of moves, i.e., 9 moves have been completed and neither the player 1 nor the player 2 has won, it'll end up in a draw. | HR05 |

