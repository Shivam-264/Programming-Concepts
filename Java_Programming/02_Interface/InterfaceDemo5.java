interface A
{
    void fun(); // abstract method
}

interface B
{
    void fun(int no); // abstract method
}

class Demo implements A,B
{
    public void fun()  // implementation of abstract method
    {
        System.out.println("Inside fun");
    }

    public void fun(int no)  // implementation of abstract method
    {
        System.out.println("Inside fun with parameter :"+no);
    }
}

class InterfaceDemo5
{
    public static void main(String A[])
    {
        
        Demo dobj = new Demo();
        dobj.fun();
        dobj.fun(21);
       
    }    
}


