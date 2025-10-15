#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

enum enLevel { Easy = 1, Med = 2, Hard = 3, Mix = 4 };
enum enOperation { Add = 1, Sub = 2, Mul = 3, Div = 4, Mixo = 5 };
struct stExam
{
    int QuestionsNumber=0;
    enLevel QuestionLevel;
    enOperation OpType;
    short RightAnswers=0;
    short WrongAnswers=0;
};

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int RandomNumber(int from, int to)
{
    int num = rand() % (to - from + 1) + from;
    return num;
}

int GetQuestionsNumber() {
    int n;
    do {
        cout << "How Many Questions You Want Answer ? ";
        cin >> n;
    } while (n < 1 || n>10);
    return n;
}
enLevel GetQuestionLevel() {
    int n;
    do{
        cout << "Enter Question Level[1]:Easy [2]:Medium [3]:Hard [4]:Mix  \n"; cin >> n;
    }while (n < 1 || n>4);
    return (enLevel)n;
}
enOperation GetOpType() {
    int n;
    do {
        cout << "Enter Question OP[1]:ADD [2]:Sub [3]:Mul [4]:div [5]:Mix  \n"; cin >> n;
    } while (n < 1 || n>5);
    return (enOperation)n;
}

int Number(enLevel level)
{
    switch (level)
    {
    case Easy:
        return RandomNumber(0, 10);
        break;
    case Med:
        return RandomNumber(10, 50);
        break;
    case Hard:
        return RandomNumber(50, 100);
        break;
    case Mix:
        return RandomNumber(0, 100);
        break;
    }
    return 0;
}
char OP(enOperation operation)
{
    switch (operation)
    {
    case Add:
        return '+'; break;
    case Sub:
        return '-'; break;
    case Mul:
        return '*'; break;
    case Div:
        return '/'; break;
    }
}



void Question(int num1, int num2, enOperation op, stExam& ex)
{
    int res;
    switch (op)
    {
    case Add:
    {
        cout << num1 << "\n" << OP(op) << " " << num2 << "\n______________\n"; cin >> res;
        if (res == num1 + num2)
        {
            ex.RightAnswers++;
            cout << "Correct Answer\n";
            system("color 2F");
        }
        else
        {
            cout << "Wrong Answer\n" << "The Right Answer : " << num1 + num2 << endl;
            ex.WrongAnswers++;
            system("color 4f");
        }
        break;
    }
    case Sub:
    {
        cout << num1 << "\n" << OP(op) << " " << num2 << "\n______________\n"; cin >> res;
        if (res == num1 - num2)
        {
            ex.RightAnswers++;
            cout << "Correct Answer\n";
            system("color 2F");
        }
        else
        {
            cout << "Wrong Answer\n" << "The Right Answer : " << num1 - num2 << endl;
            ex.WrongAnswers++;
            system("color 4f");
        }
        break;
    }
    case Mul:
    {
        cout << num1 << "\n" << OP(op) << " " << num2 << "\n______________\n"; cin >> res;
        if (res == num1 * num2)
        {
            ex.RightAnswers++;
            cout << "Correct Answer\n";
            system("color 2F");
        }
        else
        {
            cout << "Wrong Answer\n" << "The Right Answer : " << num1 * num2 << endl;
            ex.WrongAnswers++;
            system("color 4f");
        }
        break;
    }
    case Div:
    {
        cout << "Integer Division: \n";
        if (num2 == 0) num2 = 1;
        cout << num1 << "\n" << OP(op) << " " << num2 << "\n______________\n";  cin >> res;
        if (res == num1 / num2)
        {
            cout << "Correct Answer\n";
            ex.RightAnswers++;
            system("color 2F");
        }
        else
        {
            cout << "Wrong Answer\n" << "The Right Answer : " << num1 / num2 << endl;
            ex.WrongAnswers++;
            system("color 4f");
        }
        break;
    }
    default:
    {
        enOperation o = (enOperation)RandomNumber(1, 4);
        Question(num1, num2, o,ex);
        break;
    }
    }
}

void MathOperation(stExam& ex)
{
    int num1 = Number(ex.QuestionLevel);
    int num2 = Number(ex.QuestionLevel);

    Question(num1, num2, ex.OpType, ex);

    system("pause");
    system("color 0F");
}
char op(enOperation i) {
    if (i == 1) return '+';
    else if (i == 2) return '-';
    else if (i == 3) return '*';
    else if (i == 4) return '/';
    else return 'm';
}
string lev(enLevel i) {
    if (i == 1) return "Easy";
    else if (i == 2) return "Medium";
    else if (i == 3) return "Hard";
    else if (i == 4) return "Mix";
}
void FinalResult(stExam& ex) {
    cout << "_______________________________________\n";
    if (ex.RightAnswers >= ex.WrongAnswers)
        cout << "\tFinal result is Pass \n";
    else
        cout << "Final result is Fail \n";

    cout << "_______________________________________\n";
    cout << "Number Of Question :" << ex.QuestionsNumber<<endl;
    cout << "Questions level :" <<lev(ex.QuestionLevel)<< endl;
    cout << "Questions operation :" << op(ex.OpType) << endl;
    cout << "Right Answers :" << ex.RightAnswers << endl;
    cout << "Wrong Answers :" << ex.WrongAnswers << endl;
    cout << "_____________________________________________\n";
}
void ResetScreen() {
    system("cls");
}
void PlayMathGame() {
    stExam Exam; enLevel level;
    Exam.QuestionsNumber = GetQuestionsNumber();
    Exam.QuestionLevel = GetQuestionLevel();
    Exam.OpType = GetOpType();


    for (int i = 1; i <= Exam.QuestionsNumber; i++)
    {
        cout << "Question[" << i << "/" << Exam.QuestionsNumber << "] \n";
        switch (Exam.QuestionLevel)
        {
        case Easy:
            MathOperation(Exam);
            break;
        case Med:
            MathOperation(Exam);
            break;
        case Hard:
            MathOperation(Exam);
            break;
        case Mix:
            MathOperation(Exam);
            break;
        }

    }
    FinalResult(Exam);
}
void StartPlay()
{
    char response = 'y';
    do
    {
        ResetScreen();
        PlayMathGame();

        cout << "Do You Want To play Again?y/n  ";
        cin >> response;
    } while (tolower(response) == 'y');
}

int main()
{
    srand((unsigned)time(NULL));
    StartPlay();
    return 0;
}
