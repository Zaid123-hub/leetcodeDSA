class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        bool cArea = false;
       if((ax1<bx2 && bx1<ax2) && (ay2>by1 && by2>ay1)){
        cArea = true;
       } 
       int commonArea = 0;
       int A1 = (ax2-ax1)*(ay2-ay1);
       int A2 = (bx2-bx1)*(by2-by1);
       if(cArea){
        commonArea = (min(ax2, bx2) - max(ax1, bx1))*(min(ay2, by2) - max(ay1, by1));
       }
       int totalarea = A1+A2-commonArea;
       return totalarea;
    }
};