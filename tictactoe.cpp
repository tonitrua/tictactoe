#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void MakeMove(char[]);
void PrintBoard(char[]);
void GameOver(char[]);
void algorithm(char[]);

int main()
{
    srand(time(0));
    int choice;
    char mark;
    char board[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    MakeMove(board);
}

void MakeMove(char board[])
{
    char choice;
    PrintBoard(board);
    cout << "\n   Choose Square #: ";
    cin >> choice;
    cout << endl << endl;
    if (choice == '1' && board[1] == '1')
    {
        board[1] = 'X';
        if (board[5] == '5')
            board[5] = 'O';
        else algorithm(board);
        PrintBoard(board);
        GameOver(board);
        MakeMove(board);
    }
    else if (choice == '2' && board[2] == '2')
    {
        board[2] = 'X';
        if (board[5] == '5')
            board[5] = 'O';
        else algorithm(board);
        PrintBoard(board);
        GameOver(board);
        MakeMove(board);
    }
    else if (choice == '3' && board[3] == '3')
    {
        board[3] = 'X';
        if (board[5] == '5')
            board[5] = 'O';
        else algorithm(board);
        PrintBoard(board);
        GameOver(board);
        MakeMove(board);
    }
    else if (choice == '4' && board[4] == '4')
    {
        board[4] = 'X';
        if (board[5] == '5')
            board[5] = 'O';
        else algorithm(board);
        PrintBoard(board);
        GameOver(board);
        MakeMove(board);
    }
    else if (choice == '5' && board[5] == '5')
    {
        board[5] = 'X';
        static int table[] = {1, 3, 7, 9};
        int i = rand() % (sizeof table / sizeof *table);
        board[i] = 'O';
        PrintBoard(board);
        GameOver(board);
        MakeMove(board);
    }
    else if (choice == '6' && board[6] == '6')
    {
        board[6] = 'X';
        if (board[5] == '5')
            board[5] = 'O';
        else algorithm(board);
        PrintBoard(board);
        GameOver(board);
        MakeMove(board);
    }
    else if (choice == '7' && board[7] == '7')
    {
        board[7] = 'X';
        if (board[5] == '5')
            board[5] = 'O';
        else algorithm(board);
        PrintBoard(board);
        GameOver(board);
        MakeMove(board);
    }
    else if (choice == '8' && board[8] == '8')
    {
        board[8] = 'X';
        if (board[5] == '5')
            board[5] = 'O';
        else algorithm(board);
        PrintBoard(board);
        GameOver(board);
        MakeMove(board);
    }
    else if (choice == '9' && board[9] == '9')
    {
        board[9] = 'X';
        if (board[5] == '5')
            board[5] = 'O';
        else algorithm(board);
        PrintBoard(board);
        GameOver(board);
        MakeMove(board);
    }
    else
        MakeMove(board);
}

void PrintBoard(char b[])
{
    system("cls");
    cout << "\n\n\t   Tic Tac Toe\n\n";
    cout << "   Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << "\t     |     |     " <<endl;
    cout << "\t  " << b[1] << "  |  " << b[2] << "  |  " << b[3] << "  " <<endl;
    cout << "\t-----|-----|-----" <<endl;
    cout << "\t  " << b[4] << "  |  " << b[5] << "  |  " << b[6] << "  " <<endl;
    cout << "\t-----|-----|-----" <<endl;
    cout << "\t  " << b[7] << "  |  " << b[8] << "  |  " << b[9] << "  " <<endl;
    cout << "\t     |     |     " <<endl << endl;
}

void GameOver(char board[])
{
    if (board[1] != '1' && board[2] != '2' && board[3] != '3' &&
        board[4] != '4' && board[5] != '5' && board[6] != '6' &&
        board[7] != '7' && board[8] != '8' && board[9] != '9')
    {
        cout << "Cat's game!" << endl << endl;
        exit(0);
    }
    else if (board[1] == 'X' && board[2] == 'X' && board[3] == 'X')
        {cout << "You win!" << endl << endl;
        exit(0);}
    else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X')
        {cout << "You win!" << endl << endl;
        exit(0);}
    else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X')
        {cout << "You win!" << endl << endl;
        exit(0);}
    else if (board[4] == 'X' && board[5] == 'X' && board[6] == 'X')
        {cout << "You win!" << endl << endl;
        exit(0);}
    else if (board[3] == 'X' && board[6] == 'X' && board[9] == 'X')
        {cout << "You win!" << endl << endl;
        exit(0);}
    else if (board[7] == 'X' && board[8] == 'X' && board[9] == 'X')
        {cout << "You win!" << endl << endl;
        exit(0);}
    else if (board[1] == 'X' && board[5] == 'X' && board[9] == 'X')
        {cout << "You win!" << endl << endl;
        exit(0);}
    else if (board[3] == 'X' && board[5] == 'X' && board[7] == 'X')
        {cout << "You win!" << endl << endl;
        exit(0);}
    else if (board[1] == 'O' && board[2] == 'O' && board[3] == 'O')
        {cout << "You lose!" << endl << endl;
        exit(0);}
    else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O')
        {cout << "You lose!" << endl << endl;
        exit(0);}
    else if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O')
        {cout << "You lose!" << endl << endl;
        exit(0);}
    else if (board[4] == 'O' && board[5] == 'O' && board[6] == 'O')
        {cout << "You lose!" << endl << endl;
        exit(0);}
    else if (board[3] == 'O' && board[6] == 'O' && board[9] == 'O')
        {cout << "You lose!" << endl << endl;
        exit(0);}
    else if (board[7] == 'O' && board[8] == 'O' && board[9] == 'O')
        {cout << "You lose!" << endl << endl;
        exit(0);}
    else if (board[1] == 'O' && board[5] == 'O' && board[9] == 'O')
        {cout << "You lose!" << endl << endl;
        exit(0);}
    else if (board[3] == 'O' && board[5] == 'O' && board[7] == 'O')
        {cout << "You lose!" << endl << endl;
        exit(0);}
}

void algorithm(char board[])
{
    //offensive moves
    if (board[1] == 'O' && board[2] == 'O' && board[3] == '3')
        board[3] = 'O';
    else if (board[1] == 'O' && board[4] == 'O' && board[7] == '7')
        board[7] = 'O';
    else if (board[1] == 'O' && board[5] == 'O' && board[9] == '9')
        board[9] = 'O';
    else if (board[1] == 'O' && board[3] == 'O' && board[2] == '2')
        board[2] = 'O';
    else if (board[1] == 'O' && board[7] == 'O' && board[4] == '4')
        board[4] = 'O';
    else if (board[1] == 'O' && board[9] == 'O' && board[5] == '5')
        board[5] = 'O';
    else if (board[2] == 'O' && board[3] == 'O' && board[1] == '1')
        board[1] = 'O';
    else if (board[2] == 'O' && board[5] == 'O' && board[8] == '8')
        board[8] = 'O';
    else if (board[2] == 'O' && board[8] == 'O' && board[5] == '5')
        board[5] = 'O';
    else if (board[3] == 'O' && board[6] == 'O' && board[9] == '9')
        board[9] = 'O';
    else if (board[3] == 'O' && board[9] == 'O' && board[1] == '6')
        board[6] = 'O';
    else if (board[3] == 'O' && board[5] == 'O' && board[7] == '7')
        board[7] = 'O';
    //defensive moves
    else if (board[1] == 'X' && board[2] == 'X' && board[3] == '3')
        board[3] = 'O';
    else if (board[1] == 'X' && board[4] == 'X' && board[7] == '7')
        board[7] = 'O';
    else if (board[1] == 'X' && board[5] == 'X' && board[9] == '9')
        board[9] = 'O';
    else if (board[1] == 'X' && board[3] == 'X' && board[2] == '2')
        board[2] = 'O';
    else if (board[1] == 'X' && board[7] == 'X' && board[4] == '4')
        board[4] = 'O';
    else if (board[1] == 'X' && board[9] == 'X' && board[5] == '5')
        board[5] = 'O';
    else if (board[2] == 'X' && board[3] == 'X' && board[1] == '1')
        board[1] = 'O';
    else if (board[2] == 'X' && board[5] == 'X' && board[8] == '8')
        board[8] = 'O';
    else if (board[2] == 'X' && board[8] == 'X' && board[5] == '5')
        board[5] = 'O';
    else if (board[3] == 'X' && board[6] == 'X' && board[9] == '9')
        board[9] = 'O';
    else if (board[3] == 'X' && board[9] == 'X' && board[1] == '6')
        board[6] = 'O';
    else if (board[3] == 'X' && board[5] == 'X' && board[7] == '7')
        board[7] = 'O';
    //misc moves
    else if (board[1] == '1')
        board[1] = 'O';
    else if (board[2] == '2')
        board[2] = 'O';
    else if (board[3] == '3')
        board[3] = 'O';
    else if (board[4] == '4')
        board[4] = 'O';
    else if (board[5] == '5')
        board[5] = 'O';
    else if (board[6] == '6')
        board[6] = 'O';
    else if (board[7] == '7')
        board[7] = 'O';
    else if (board[8] == '8')
        board[8] = 'O';
    else if (board[9] == '9')
        board[9] = 'O';
}
