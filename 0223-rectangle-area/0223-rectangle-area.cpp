class Solution {
public:
     int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
	int area1 = (D - B)*(C - A);
	int area2 = (H - F)*(G - E);
	int area3;
	if (area1 == 0) {
		return area2;
	}
	if (area2 == 0) {
		return area1;
	}
	if ((A == D) && (B == F) && (C == G) && (D == H)) {
		return area1;
	}
	if ((E >= C) | (G <= A) | (H <= B) | (D <= F)) {    //not overlapping
		return (area1 + area2);
	}
	if (((G - E) <= (C - A)) && ((H - F) <= (D - B)) && (E >= A) && (F >= B) && (G <= C) && (D >= H)) {                        //rect2 is inside rect1
		return area1;
	}
	if (((C - A) <= (G - E)) && ((D - B) <= (H - F)) && (E <= A) && (B >= F) && (G >= C) && (H >= D)) {                        //rect1 is inside rect2
		return area2;
	}
	if ((F >= B) && (E >= A) && (G >= C) && (H >= D)) {                       //overlapping upper right corner
		area3 = (C - E)*(D - F);
	}
	else if ((F >= B) && (E <= A) && (G <= C) && (H >= D)) {                       //overlapping upper left corner
		area3 = (G - A)*(D - F);
	}
	else if ((F <= B) && (E <= A) && (G <= C) && (H <= D)) {                       //overlapping bottom left corner
		area3 = (G - A)*(H - B);
	}
	else if ((F <= B) && (E >= A) && (G >= C) && (H <= D)) {                        //overlapping bottom right corner
		area3 = (H - B)*(C - E);
	}
	else if (((C - A) <= (G - E)) && (H <= D) && (G >= C) && (E <= A) && (F <= B)) {               //overlapping bottom side
		area3 = (C - A)*(H - B);
	}
	else if (((C - A) <= (G - E)) && (H >= D) && (G >= C) && (E <= A) && (F >= B)) {               //overlapping top side
		area3 = (C - A)*(D - F);
	}
	else if (((D - B) <= (H - F)) && (E <= A) && (F <= B) && (H >= D) && (G <= C)) {               //overlapping left side
		area3 = (G - A)*(D - B);
	}
	else if (((D - B) <= (H - F)) && (E >= A) && (F <= B) && (H >= D) && (G >= C)) {               //overlapping right side
		area3 = (C - E)*(D - B);
	}
	else if (((C - A) >= (G - E)) && (E >= A) && (F >= B) && (C >= G) && (D <= H)) {      //overlapping part of top side
		area3 = (G - E)*(D - F);
	}
	else if (((C - A) >= (G - E)) && (A <= E) && (B >= F) && (G <= C) && (D >= H)) {       //overlapping part of bottom side
		area3 = (G - E)*(H - B);
	}
	else if (((D - B) >= (H - F)) && (E <= A) && (F >= B) && (G <= C) && (H <= D)) {      //overlapping part of left side
		area3 = (G - A)*(H - F);
	}
	else if (((D - B) >= (H - F)) && (E >= A) && (F >= B) && (G >= C) && (H <= D)) {       //overlapping part of right side
		area3 = (C - E)*(H - F);
	}
	else if (((G - E) <= (C - A)) && (E >= A) && (F <= B) && (G <= C) && (H >= D)) {     //overlapping top and bottom
		area3 = (G - E)*(D - B);
	}
	else if (((H - F) <= (D - B)) && (E <= A) && (F >= B) && (C <= G) && (D >= H)) {     //overlapping left and right
		area3 = (C - A)*(H - F);
	}

	return (area1 + area2 - area3);
}
};