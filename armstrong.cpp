int i = 100,bas1,bas10,bas100,carpim100,carpim10,carpim1;

	for (i ; i <= 999 ; i++)
	{
		bas100 = i/100 ;
		bas10 = (i%100) / 10 ;
		bas1 = (i%100)%10 ;

		carpim100 = bas100 * bas100 * bas100;
		carpim10 = bas10 * bas10 * bas10;
		carpim1 = bas1 * bas1 * bas1;

		if (carpim1+carpim10+carpim100 == i) {
			cout << i << endl;
		}
	}