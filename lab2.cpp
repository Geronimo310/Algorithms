#include <iostream>

class Board
{
    int n, curri, currj;
    char** arr = new char* [8];
public:
    Board()
    {
        curri = 7;
        currj = 0;
        std::cout << "Constructor called. \n";
    }
    void creator()
    {
        std::cout << "This is your board" << std::endl;
        for (int i=0; i <8; i++)
        {
            arr[i] = new char[8];

        }
    }
    void filler()
    {
        for (int i=0; i<8; i++)
        {
            for (int j=0; j<8; j++)
            {
              arr[i][j] = *"*";
            }
        }
    this -> start();
    this -> print();
    }
    void print()
    {
        for (int i=0; i<8; i++)
        {
            for (int j=0; j<8; j++)
            {   
                std::cout << arr[i][j];
            }
        std::cout << std::endl;
        }
    }
    void start()
    {
        arr[7][0] = *"L";
    }
    void move()
    {   
        int k;
        std::cout << "Where would you like to move? 1 - upward, 2 - downward, 3 - left, 4 - right, 5 - quit." << std::endl;
        std::cin >> k;
        std::cout << "Enter the number of cells that your figure will pass through. ";
        std::cin >> n;
        while (n > 7 || n < 1)
        {
            std::cout << "Wrong number. Try again." << std::endl;
            std::cin >> n;
        }
        switch (k)
        {
        case 1: 
            if (curri-n<0 || curri == 0)
                {
                    this -> error();
                }
            else
            {
                this -> moveupper();
            }
            break;
        case 2:
            if (curri+n>7 || curri == 7)
            {
                this -> error();
            }
            else
            {
                this -> movedown();
            }
            break;
        case 3:
            if (currj-n<0 || currj == 0)
            {
                this -> error();
            }
            else
            {
                this -> moveleft();
            }
            break;
        case 4:
            if (currj+n<7 || currj == 7)
            {
                this -> error();
            }
            else
            {
                this -> moveright();
            }
            break;
        default:
            std::cout <<"Error! Wrong number.";
            break;
        }
        
    }
    void error()
    {
        std::cout << "Error! You can't move here." << std::endl;
        this -> move();
    }
    int moveupper()
    {
        arr[curri][currj] = *"*";
        arr[curri-n][currj] = *"L";
        curri = curri - n;
        return curri;
    }
        int movedown()
    {
        arr[curri][currj] = *"*";
        arr[curri+n][currj] = *"L";
        curri = curri + n;
        return curri;
    }
        int moveleft()
    {
        arr[curri][currj] = *"*";
        arr[curri][currj-n] = *"L";
        currj = currj - n;
        return currj;
    }
        int moveright()
    {
        arr[curri][currj] = *"*";
        arr[curri][currj+n] = *"L";
        currj = currj + n;
        return currj;
    }
};

int main()
{
    bool game = true;
    int a;
    Board Chess;
    Chess.creator();
    Chess.filler();
    while (game)
    {
        std::cout << "What would you like to do? 1 - move figure, 2 - print map, 3 - quit." << std::endl;
        std::cin >> a;
        switch (a)
        {
            case 1:
                Chess.move();
                break;
            case 2:
                Chess.print();
                break;
            case 3:
                game = false;
                break;
            default:
                std::cout <<"Error! Wrong number." << std::endl;
                break;
        }
    }
    return 0;
}