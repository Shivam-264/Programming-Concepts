abstract class Base
{
    public int i ,j ;

    public int Addition(int No1 , int No2)  //1000
    {
        return No1 + No2;
    }

    public abstract int Substraction(int No1 , int No2); //----
}

class Derived extends Base
{
    public int Substraction(int No1 , int No2)  //2000
    {
        return No1 - No2;
    }

    public int Multiplication(int No1 , int No2) //3000
    {
        return No1 * No2;
    }
}


class AbstractDemo {
    public static void main(String A[])
    {
        Derived dobj = new Derived();

        int Ret = 0;

        Ret = dobj.Addition(11,10);
        System.out.println("Addition is :"+Ret);

        Ret = dobj.Substraction(11, 10);
        System.out.println("Substraction is :"+Ret);

        Ret = dobj.Multiplication(11, 10);
        System.out.println("Multiplication is :"+Ret);

    }


}
