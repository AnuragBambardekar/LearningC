/* int increment()
{
    int count = 0;
    count = count + 1;
    return count;
} */

/* int count = 0; //visible to all other files available in project, all other files can access it.
int increment()
{
    //int count = 0;
    count = count + 1;
    return count;
} */

//use static
/* static int count = 0; //its global scope now but now we can retain the value
int increment()
{
    //int count = 0;
    count = count + 1;
    return count;
} */

//use static
//static int count = 0; //its global scope now but now we can retain the value
int increment()
{
    //int count = 0;
    //main advantage of using static, can use it as local and ensure data hiding/privacy
    //not exposing count variable as a global variable
    //cannot assign a var to static variable
    /* int var = 3;
    static int c = var; //not possible */
    //static int count = 4; //possible
    static int count; //local, value initialized to 0 instead of garbage
    count = count + 1;
    return count;
}