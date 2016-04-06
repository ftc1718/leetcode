int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    int ret = (C - A) * (D - B) + (G - E) * (H - F);
    if(C > E && D > F && A < G && B < H){
        int left1, left2;
        int right1, right2;
        left1 = E > A ? E : A;
        left2 = F > B ? F : B;
        right1 = C < G ? C : G;
        right2 = D < H ? D : H;
        ret -= (right1 - left1) * (right2 - left2);
    }
    return ret;
}