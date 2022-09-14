
/*
 * creating the structure variables and all function prototype in the header file
 */
typedef struct
{
	int age;
	char name[10];
}std;								//student structure with data type std

 typedef struct
{
	int emp_id;
	int salary;
}empl;								//employee structure with data type empl

 typedef struct
{
	int x;
	int y;
	int z;

}sens;								//sensor structure with data type sens


void student(std);
void employee(empl);
void sensor(sens);
