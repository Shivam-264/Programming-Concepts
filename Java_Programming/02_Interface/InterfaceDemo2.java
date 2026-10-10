interface Demo
{
    int no = 11;
    void fun(); // abstract method
}

class HELLO implements Demo
{
    public void fun()  // implementation of abstract method
    {
        System.out.println("Inside fun");
    }
}

class InterfaceDemo2
{
    public static void main(String A[])
    {
        System.out.println("Value of no is :"+Demo.no); 
        HELLO hobj = new HELLO();
        hobj.fun();
       
    }    
}


