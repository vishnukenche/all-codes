import java.lang.*;

class Demo
{}
class classinfo
{
    public static void main(String Arg[])
    {
        Demo obj=new Demo();

        class cref=obj.getClass();
        System.out.println("Class name of obj is:"+cref.getName());
    }  
}

