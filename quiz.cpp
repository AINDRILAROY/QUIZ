#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int ques = 1;
int correct_ans = 0;
int incorrect_ans = 0;
bool quiz[10] = {true , true , true , true , true , true , true , true , true , true};

void disp_ques();
void display();
void question(string question , string a , string b , string c , string d , char cor_answer);
void result();

int main()
{
    display();
    return 0;
}

void display()
{
    system("cls");
    cout << "Question NO:" << ques << "\t\t Correct Answers:" << correct_ans << "\t\t Incorrect Answers:" << incorrect_ans
    << endl << endl;
    cout<<"enter option a/b/c/d"<<endl;
    disp_ques();
}

void disp_ques()
{
    srand(time(0));
    bool is_question_remaining = false;
    for(int i=0; i<10; i++)
    {
        if(quiz[i])
        {
            is_question_remaining = true;
            break;
        }
    }
    while(is_question_remaining)
    {
        int no = rand()%10;
        if(quiz[no])
        {
            quiz[no] = false;
            switch(no)
            {
            case 0 :
                question("What album did Katy Perry release in October 2013?" , "Rainbow"
                         , "Prism" , "Glass" , "Cube" , 'b');
                         break;
            case 1 :
                question("What planet is closest to the Sun?" , "Mercury" , "Jupiter" ,
                         "Mars" , "Earth" , 'a');
                         break;
            case 2 :
                question("How many bones are there in an adult human body?" , "300"
                         , "206" , "306" , "217" , 'b');
                         break;
            case 3 :
                question("A single piece of coiled DNA is known as?" , "chromosome" , "coil" ,
                         "proton" , "cell" , 'a');
                         break;
            case 4 :
                question("Which language supports the Object Oriented Programming Technique?" , "C++ language"
                         , "JAVA language" , "Cobal language" , "Fortran Language" , 'b');
                         break;
            case 5 :
                question("Where was Nintendo founded?" , "England" , "America" ,
                         "China" , "Japan" , 'd');
                         break;
            case 6 :
                question("What is the national sport of China?" , "Judo"
                         , "Ping Pong" , "Hockey" , "Kung Fu" , 'b');
                         break;
            case 7 :
                question("What was the first video game ever created?" , "Mario" , "Snake" ,
                         "Pong" , "Galaxy" , 'c');
                         break;
            case 8 :
                question("Who is the father of Geometry?" , "Aristotle"
                         , "Pythagoras" , "Aryabhatta" , "Euclid" , 'd');
                         break;
            case 9 :
                question("The words Satyameva Jayate inscribed below the base plate of the emblem of India are taken from?" , "Mundak Upanishad" , "Ramayana" ,
                         "Rigveda" , "Satpath" , 'a');
                         break;

            }
        }
    }
    result();
}

void result()
{
    system("cls");
    cout << "Total Question = " << ques-1 << endl;
    cout << "correct_ans Answers = " << correct_ans << endl;
    cout << "incorrect_ans Answers = " << incorrect_ans << endl;
    if(correct_ans > incorrect_ans)
        cout << "Result = PASS" << endl;
    else if(incorrect_ans > correct_ans)
        cout << "Result = FAIL" << endl;
    else
        cout << "Result = Tie" << endl;
}

void question(string question , string a , string b , string c , string d , char cor_answer)
{
    cout << question << endl;
    cout << "A.\t" << a << endl;
    cout << "B.\t" << b << endl;
    cout << "C.\t" << c << endl;
    cout << "D.\t" << d << endl;
    char answer;
    cin >> answer;
    if(answer == cor_answer)
        correct_ans++;
    else
        incorrect_ans++;
    ques++;
    display();
}
