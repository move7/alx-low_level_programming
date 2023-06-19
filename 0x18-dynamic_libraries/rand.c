#include <unistd.h>
#include <string.h>

int rand()
{
        static int count = 0;
        int win_numbers[] ={9, 8, 10, 23, 74, 9};
        count++;
        if(count <= 5)
                return(win_numbers[count]);
        return(count*count/1000);
}
