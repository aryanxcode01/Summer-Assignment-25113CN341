#include<iostream>
using namespace std;
int main(){
    int answer, score = 0;

    cout << "===== Quiz Application =====\n";

    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\n2. Which language is used for C++?\n";
    cout << "1. Programming\n2. Markup\n3. Database\n4. Query\n";
    cin >> answer;

    if (answer == 1)
        score++;

    cout << "\n3. 5 + 10 = ?\n";
    cout << "1. 10\n2. 12\n3. 15\n4. 20\n";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nYour Score = " << score << " / 3\n";

    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";
    return 0;
}