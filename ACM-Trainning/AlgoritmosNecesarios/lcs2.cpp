#include <bits/stdc++.h>

using namespace std;

int count_substrings (char *str1, char *str2) {
  int n1 = strlen(str1), n2 = strlen(str2);
  int max = 0;

  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      if (str1[i] == str2[j]) {
        int c = 0;
        for (int k = 0; k+i<n1, k+j<n2; k++) {
          if (str1[k+i] != str2[k+j])
            break;
          c++;
        }
        if (c > max)
          max = c;
      }
    }
  }
  return max;
}
