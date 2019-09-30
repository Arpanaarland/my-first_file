#include<linux/init.h>
#include<linux/module.h>

#include<linux/moduleparam.h>
//create variable
int param_var=0;

//register var
//name,type,permissions
module_param(param_var,int,S_IRUSR|S_IWUSR);

void display(void)
{
printk(KERN_ALERT "parameter value=%d",param_var);
}

static int parameter_init(void)
{
//printk(KERN_INFO "Loading hello module...\n");
printk(KERN_INFO "Hello worlddd\n");
display();
return 0;
}

static void parameter_exit(void)
{
printk(KERN_INFO "Goodbye Mr.\n");
}

module_init(parameter_init);
module_exit(parameter_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SOLIDUSCODE");
MODULE_DESCRIPTION("USB PEN REG DRIVER");



