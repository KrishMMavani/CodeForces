// #include <bits/stdc++.h>
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl
// #define fi(s, e) for (int i = s; i < e; i++)
// #define fj(s, e) for (int j = s; j < e; j++)
// #define fk(s, e) for (int k = s; k < e; k++)
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         char s[n];
//         fi(0, n) cin >> s[i];
//         int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, ns = 0, o = 0, p = 0, q = 0, r = 0, st = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
//         fi(0, n)
//         {
//             if (s[i] == 'A')
//             {
//                 a++;
//                 if (a >= 1)
//                     break;
//             }
//             else if (s[i] == 'B')
//             {
//                 b++;
//                 if (b >= 2)
//                     break;
//             }
//             else if (s[i] == 'C')
//             {
//                 c++;
//                 if (c >= 3)
//                     break;
//             }
//             else if (s[i] == 'D')
//             {
//                 d++;
//                 if(d >= 4)break;
//             }
//             else if (s[i] == 'E')
//                 e++;
//             else if (s[i] == 'F')
//                 f++;
//             else if (s[i] == 'G')
//                 g++;
//             else if (s[i] == 'H')
//                 h++;
//             else if (s[i] == 'I')
//                 i++;
//             else if (s[i] == 'J')
//                 j++;
//             else if (s[i] == 'K')
//                 k++;
//             else if (s[i] == 'L')
//                 l++;
//             else if (s[i] == 'M')
//                 m++;
//             else if (s[i] == 'N')
//                 ns++;
//             else if (s[i] == 'O')
//                 o++;
//             else if (s[i] == 'P')
//                 p++;
//             else if (s[i] == 'Q')
//                 q++;
//             else if (s[i] == 'R')
//                 r++;
//             else if (s[i] == 'S')
//                 st++;
//             else if (s[i] == 'T')
//                 t++;
//             else if (s[i] == 'U')
//                 u++;
//             else if (s[i] == 'V')
//                 v++;
//             else if (s[i] == 'W')
//                 w++;
//             else if (s[i] == 'X')
//                 x++;
//             else if (s[i] == 'Y')
//                 y++;
//             else
//                 z++;
//         }
//         cout << a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p + q + r + s + t + u + v + w + x + y + z;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi(s, e) for (int i = s; i < e; i++)
#define fj(s, e) for (int j = s; j < e; j++)
#define fk(s, e) for (int k = s; k < e; k++)
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        fi(0, n) cin >> s[i];
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, ns = 0, o = 0, p = 0, q = 0, r = 0, st = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
        fi(0, n)
        {
            if (s[i] == 'A')
            {
                a++;
                if (a == 1)
                    break;
            }
            else if (s[i] == 'B')
            {
                b++;
                if (b == 2)
                    break;
            }
            else if (s[i] == 'C')
            {
                c++;
                if (c == 3)
                    break;
            }
            else if (s[i] == 'D')
            {
                d++;
                if (d >= 4)
                    break;
            }
            else if (s[i] == 'E')
            {
                e++;
                if (e >= 5)
                    break;
            }
            else if (s[i] == 'F')
            {
                f++;
                if (f >= 6)
                    break;
            }
            else if (s[i] == 'G')
            {
                g++;
                if (g >= 7)
                    break;
            }
            else if (s[i] == 'H')
            {
                h++;
                if (h >= 8)
                    break;
            }
            else if (s[i] == 'I')
            {
                i++;
                if (i >= 9)
                    break;
            }
            else if (s[i] == 'J')
            {
                j++;
                if (j >= 10)
                    break;
            }
            else if (s[i] == 'K')
            {
                k++;
                if (k >= 11)
                    break;
            }
            else if (s[i] == 'L')
            {
                l++;
                if (l >= 12)
                    break;
            }
            else if (s[i] == 'M')
            {
                m++;
                if (m >= 13)
                    break;
            }
            else if (s[i] == 'N')
            {
                ns++;
                if (ns >= 14)
                    break;
            }
            else if (s[i] == 'O')
            {
                o++;
                if (o >= 15)
                    break;
            }
            else if (s[i] == 'P')
            {
                p++;
                if (p >= 16)
                    break;
            }
            else if (s[i] == 'Q')
            {
                q++;
                if (q >= 17)
                    break;
            }
            else if (s[i] == 'R')
            {
                r++;
                if (r >= 18)
                    break;
            }
            else if (s[i] == 'S')
            {
                st++;
                if (st >= 19)
                    break;
            }
            else if (s[i] == 'T')
            {
                t++;
                if (t >= 20)
                    break;
            }
            else if (s[i] == 'U')
            {
                u++;
                if (u >= 21)
                    break;
            }
            else if (s[i] == 'V')
            {
                v++;
                if (v >= 22)
                    break;
            }
            else if (s[i] == 'W')
            {
                w++;
                if (w >= 23)
                    break;
            }
            else if (s[i] == 'X')
            {
                x++;
                if (x >= 24)
                    break;
            }
            else if (s[i] == 'Y')
            {
                y++;
                if (y >= 25)
                    break;
            }
            else
            {
                z++;
                if (z >= 26)
                    break;
            }
        }
        cout << a + b + c + d + e + f + g + h + i + j + k + l + m + ns + o + p + q + r + st + t + u + v + w + x + y + z << endl;
    }
    return 0;
}
