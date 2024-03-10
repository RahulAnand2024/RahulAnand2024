double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	double area =0.0; 
	double pi = 2 * acos(0.0); 
	switch (ch)
	{
    case 1:
		area = pi*a[0]*a[0];
		break;
	case 2:
		area = a[0] * a[1];
		break;
	
	default :
		break;
	}
	return area;
}
