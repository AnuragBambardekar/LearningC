#include <stdio.h>

static int k;
static int j = 24;
static int i = 0;
int main()
{
    static int i;
    return 0;
}
/*Before and after defining static int i,j,k*/
//text    data     bss     dec     hex filename
//9232    1708     416   11356    2c5c q3.exe

/*After initializing i to 0*/
//text    data     bss     dec     hex filename                                
//9232    1708     416   11356    2c5c q3.exe 

/*After initializing j to 24*/
//text    data     bss     dec     hex filename
//9232    1724     416   11372    2c6c q3.exe