interface A
{
    void fun(); // abstract method
}

interface B
{
    void gun(); // abstract method
}

class Demo implements A,B
{
    public void fun()  // implementation of abstract method
    {
        System.out.println("Inside fun");
    }
    public void gun()  // implementation of abstract method
    {
        System.out.println("Inside gun");
    }
}

class InterfaceDemo4
{
    public static void main(String A[])
    {
        
        Demo dobj = new Demo();
        dobj.fun();
        dobj.gun();
       
    }    
}


