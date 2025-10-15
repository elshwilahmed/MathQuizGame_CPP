# MathQuizGame_CPP

# 🧮 Math Quiz Game (C++)

A simple **console-based math quiz game** written in C++.  
The player answers randomly generated math questions with customizable **difficulty levels** and **operations**.  
It’s a great mini–project to practice logic, control flow, and structured programming in C++.

---

## 🚀 Features

- 🎯 **4 Difficulty Levels:** Easy, Medium, Hard, and Mix  
- ➕ **5 Operation Modes:** Addition, Subtraction, Multiplication, Division, and Mix  
- 🔢 **Custom Question Count:** Choose how many questions to answer (1–10)  
- 🧠 **Automatic Evaluation:** Tracks right and wrong answers  
- 🟢 **Color Feedback:** Green for correct answers, red for wrong ones  
- 🔁 **Replay Option:** Play multiple rounds  
- 💾 **Simple and Modular Code:** Clean structure with enums, structs, and reusable functions

---

## 🧩 How It Works

1. The program asks the player:
   - How many questions they want.
   - What difficulty level to use.
   - Which operation type to practice.
2. Each question is randomly generated.
3. The player types the answer.
4. The program checks the answer and updates the score.
5. A final summary shows:
   - Number of questions
   - Difficulty level
   - Operation type
   - Right/Wrong answers
   - Final result (Pass/Fail)
6. The player can choose to play again or exit.

---

## 🛠️ Technologies Used

- **Language:** C++  
- **Libraries:** `<iostream>`, `<cstdlib>`, `<ctime>`, `<cctype>`  
- **Compiler:** Works with any standard C++ compiler (e.g., g++, MSVC, Clang)

📸 Sample Output

How Many Questions You Want Answer ? 3
Enter Question Level[1]:Easy [2]:Medium [3]:Hard [4]:Mix
1
Enter Question OP[1]:ADD [2]:Sub [3]:Mul [4]:div [5]:Mix
5


Question[1/3]
7
+ 5
______________
12
Correct Answer ✅

Question[2/3]
9
/ 3
______________
3
Correct Answer ✅

Question[3/3]
4
* 6
______________
20
Wrong Answer ❌
The Right Answer : 24

🧾 Final Results Example
_______________________________________
        Final result is Pass 
_______________________________________
Number Of Question : 3
Questions level : Easy
Questions operation : +
Right Answers : 2
Wrong Answers : 1
_______________________________________

🧑‍💻 Author

Ahmed Elshwil
🎓 Computer Science Student | 💻 Passionate about C++ and Problem Solving
📧 [elshwilahmed@gmail.com]
🌐 https://github.com/elshwilahmed
