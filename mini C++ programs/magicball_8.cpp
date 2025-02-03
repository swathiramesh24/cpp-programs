#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
    std::string question;
    std::cout << "\t\t\t\t*******Welcome to Magic Ball 8*******\n";
    std::cout << "Ask a question!\t";
    getline(std::cin,question);
    
    srand(time(NULL));
    
    std::string answers[]={
        "Yes, definitely.",
        "Without a doubt.",
        "It is certain.",
        "You may rely on it.",
        "Most likely.",
        "Outlook good.",
        "Signs point to yes.",
        "Yes.",
        "Reply hazy, try again.",
        "Ask again later.",
        "Better not tell you now.",
        "Cannot predict now.",
        "Concentrate and ask again.",
        "Dont count on it.",
        "My reply is no.",
        "My sources say no.",
        "Outlook not so good.",
        "Very doubtful.",
        "Absolutely not.",
        "Thats a mystery even to me."
    };
    
    int response = rand() % 20;
    
    std::cout << answers[response] << "\n";
    
    return 0;
    
    
}
