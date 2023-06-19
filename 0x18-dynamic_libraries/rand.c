#include <unistd.h>
#include <string.h>

int rand()
{
        static int count = -1;
        int win_numbers[] ={8, 8, 7, 9, 23, 74};
        count++;
        if(count <= 5)
                return(win_numbers[count]);
        return(count*count/1000);
}
