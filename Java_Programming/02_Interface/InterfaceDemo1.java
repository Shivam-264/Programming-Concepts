interface Demo
{
    int no = 11;
    void fun(); // abstract method
}

class HELLO implements Demo
{
    // Error
}

class InterfaceDemo1 
{
    public static void main(String A[])
    {

    }    
}


/* The error occours because the class Demo contains an abstract method fun() 
and the class HELLO does not implement it */