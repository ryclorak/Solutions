public class DRoot {
  public static int digital_root(int n) {		//sum of digits if more than 1 digit
    int sum=0;
    do {
      sum += n%10;
      n/=10;
    }while (n>10);
    sum += n;
    
    if (sum>10)
    {
      sum = digital_root(sum);
    }
    return sum;
  }
}