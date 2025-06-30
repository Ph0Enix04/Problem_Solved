//upto 1e16

ull modmul(ull a, ull b, ull M) {
    ll ret = a * b - M * ull(1.L / M * a * b);
    return ret + M * (ret < 0) - M * (ret >= (ll)M);
}

ull modpow(ull b, ull e, ull mod) {
    ull ans = 1;
    for (; e; b = modmul(b, b, mod), e /= 2) {
        if (e & 1) {
            ans = modmul(ans, b, mod);
        }
    }
    return ans;
}
//miller robin primality test
bool is_prime(ull n) {
    if (n < 2 || n % 6 % 4 != 1) {
        return (n | 1) == 3;
    }

    ull A[] = {2, 325, 9375, 28178, 450775, 9780504, 1795265022};
    ull s = __builtin_ctzll(n - 1), d = n >> s;
    for (ull a : A) {
        ull p = modpow(a % n, d, n), i = s;
        while (p != 1 && p != n - 1 && a % n && i--) {
            p = modmul(p, p, n);
        }
        if (p != n - 1 && i != s) {
            return 0;
        }
    }
    return 1;
}

ull pollard(ull n) {
    auto f = [n](ull x) { return modmul(x, x, n) + 1; };
    ull x = 0, y = 0, t = 30, prd = 2, i = 1, q;
    while (t++ % 40 || __gcd(prd, n) == 1) {
        if (x == y) {
            x = ++i, y = f(x);
        }
        if ((q = modmul(prd, max(x, y) - min(x, y), n))) {
            prd = q;
        }
        x = f(x), y = f(f(y));
    }
    return __gcd(prd, n);
}

vector<ull> factor(ull n) {
    if (n == 1) {
        return {};
    }
    if (is_prime(n)) {
        return {n};
    }
    ull x = pollard(n);
    auto l = factor(x), r = factor(n / x);
    l.insert(end(l), begin(r), end(r));
    return l;
}

vector<ull> get_divisors(ull n) {
    auto f = factor(n);
    vector<ull> divisors({1});
    sort(begin(f), end(f));
    for (int i = 0, ii = 0, len = (int)f.size(); i < len; i = ii) {
        ii = i;
        while (ii < len && f[i] == f[ii]) ++ii;
        int e = ii - i;
        int n = (int)divisors.size();
        for (int k = 0; k < n; ++k) {
            ull u = divisors[k];
            ull v = 1;
            for (int j = 0; j < e; ++j) {
                v *= f[i];
                divisors.emplace_back(u * v);
            }
        }
    }
    sort(begin(divisors), end(divisors));
    return divisors;
}
