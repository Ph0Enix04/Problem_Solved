//a + b = (a & b) << 1 + a ^ b
//sum of div = ((a^(p+1)-1)/a-1)*((b^+1)-1/b-1))...
//product of div = n^(number of divisors/2)
//number of divisors (p+1)*(q+1)*...
//if s is a set of real number ans f(x) = sum(|s-x|); then f(x) is minimal for x = median
//for 2d prefix sum
//	pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + arr[i][j];
//submatrix sum between row a, A abd col b, B is
//		sum(i==a to A)sum(j = b to B)arr[i][j] = pref[A][B] - pref[a-1][B] - pref[A][b-1] + pref[a-1][b-1]
//
