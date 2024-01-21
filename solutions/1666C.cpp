#include <bits/stdc++.h>
using namespace std;

struct node {
  long long x, y;
} p[5];

struct edge {
  long long x1, y1, x2, y2;
} ans[100];

int z = 0;

bool cmp(node a, node b) {
  if (a.x != b.x) {
    return a.x < b.x;
  } else {
    return a.y < b.y;
  }
}

void addbian(int x1, int y1, int x2, int y2) {
  if (x1 == x2 && y1 == y2)
    return;
  z++;
  ans[z].x1 = x1;
  ans[z].x2 = x2;
  ans[z].y1 = y1;
  ans[z].y2 = y2;
}

void print() {
  printf("%d\n", z);
  for (int i = 1; i <= z; i++) {
    printf("%lld %lld %lld %lld\n", ans[i].x1, ans[i].y1, ans[i].x2, ans[i].y2);
  }
}

int main() {
  scanf("%lld%lld", &p[1].x, &p[1].y);
  scanf("%lld%lld", &p[2].x, &p[2].y);
  scanf("%lld%lld", &p[3].x, &p[3].y);
  sort(p + 1, p + 1 + 3, cmp);
  if (p[1].x == p[2].x && p[1].x == p[3].x) {
    printf("2\n");
    printf("%lld %lld %lld %lld\n", p[1].x, p[1].y, p[2].x, p[2].y);
    printf("%lld %lld %lld %lld\n", p[2].x, p[2].y, p[3].x, p[3].y);
  } else if (p[1].x == p[2].x && p[3].y >= p[1].y && p[3].y <= p[2].y) {
    printf("2\n");
    printf("%lld %lld %lld %lld\n", p[1].x, p[1].y, p[2].x, p[2].y);
    printf("%lld %lld %lld %lld\n", p[2].x, p[3].y, p[3].x, p[3].y);
  } else if (p[1].x == p[2].x && p[3].y < p[1].y) {
    printf("3\n");
    printf("%lld %lld %lld %lld\n", p[1].x, p[1].y, p[2].x, p[2].y);
    printf("%lld %lld %lld %lld\n", p[1].x, p[1].y, p[3].x, p[1].y);
    printf("%lld %lld %lld %lld\n", p[3].x, p[1].y, p[3].x, p[3].y);
  } else if (p[1].x == p[2].x && p[3].y > p[2].y) {
    printf("3\n");
    printf("%lld %lld %lld %lld\n", p[1].x, p[1].y, p[2].x, p[2].y);
    printf("%lld %lld %lld %lld\n", p[2].x, p[2].y, p[3].x, p[2].y);
    printf("%lld %lld %lld %lld\n", p[3].x, p[2].y, p[3].x, p[3].y);
  } else if ((p[1].y <= p[2].y && p[2].y <= p[3].y) ||
             (p[1].y >= p[2].y && p[2].y >= p[3].y)) {
    addbian(p[1].x, p[1].y, p[2].x, p[1].y);
    addbian(p[2].x, p[1].y, p[2].x, p[2].y);
    addbian(p[2].x, p[2].y, p[3].x, p[2].y);
    addbian(p[3].x, p[2].y, p[3].x, p[3].y);
    print();
  } else if ((p[1].y < p[2].y && p[1].y < p[3].y) ||
             (p[1].y > p[2].y && p[1].y > p[3].y)) {

    addbian(p[1].x, p[1].y, p[1].x, p[3].y);
    addbian(p[1].x, p[3].y, p[3].x, p[3].y);
    addbian(p[2].x, p[3].y, p[2].x, p[2].y);
    print();
  } else {
    addbian(p[1].x, p[1].y, p[3].x, p[1].y);
    addbian(p[3].x, p[1].y, p[3].x, p[3].y);
    addbian(p[2].x, p[1].y, p[2].x, p[2].y);
    print();
  }
  return 0;
}
