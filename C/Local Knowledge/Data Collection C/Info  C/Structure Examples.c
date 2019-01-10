/**************************************************************************************************************************************************/
//	Way 1 : Declare and Initialize
struct student
{
   char name[20];
   int roll;
   float marks;
}std1 = { "Pritesh",67,78.3 };


//	Way 2 : Declaring and Initializing Multiple Variables
struct student
{
   char name[20];
   int roll;
   float marks;
}

std1 = {"Pritesh",67,78.3};
std2 = {"Don",62,71.3};
/**	In this example, we have declared two structure variables in above code. After declaration of variable we have initialized two variable.  */

//	Way 3 : Initializing Single member
struct student
{
   int mark1;
   int mark2;
   int mark3;
} sub1={67};
/** Though there are three members of structure,only one is initialized , Then remaining two members are initialized with Zero. */
/**************************************************************************************************************************************************/