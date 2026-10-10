interface A
{
    void fun(); // abstract method
}

interface B
{
    void fun(); // abstract method
}

class Demo implements A,B
{
    public void fun()  // implementation of abstract method
    {
        System.out.println("Inside fun");
    }
}

class InterfaceDemo3
{
    public static void main(String A[])
    {
        
        Demo dobj = new Demo();
        dobj.fun();
       
    }    
}


