#include <stdio.h>
#include <math.h>

int main()
{
  long long a, b, c, d;
  
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
  if (b * log(a) > d * log(c))     // This uses the logarithmic property to convert the power calculation into a more manageable form.
    printf("YES");
  else
    printf("NO");
    
  return 0;
}

/* If b * log(a) is greater than d * log(c), then a^b is greater than c^d.
Otherwise, a^b is less than or equal to c^d. */

// Take log for both sides ^^^ log(5^2) = 2 * log 5