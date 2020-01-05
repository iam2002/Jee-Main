#include<stdio.h>
#include<math.h>
int main()
{	char bef[20];
	char ask[20];
	printf("Enter the password to begin:\n");
	scanf("%s", ask);
	if(strcmp(ask,"jeemain")==0)
	{
		printf("Are you sure that you want to attempt this question paper?\nYes or No\n");
		scanf("%s", bef);
		if(strcmp(bef,"Yes")==0 || strcmp(bef,"yes")==0)
		{
			printf("Some instructions:\n");
			printf("a. You can attempt next question only after the previous one.\n");
			printf("b. Every question will demand a result(option) from you.\n");
			printf("c. The time limit is 10 minutes for 10 questions.\n");
			printf("\n");
			printf("All the best!\n");

			char ch[20];
			printf("Enter the name of subject you want to attempt[Physics or Mathematics]=\n");
			scanf("%s", ch);

			if(strcmp(ch,"Mathematics")==0)
			{
				printf("Your time starts now!!\n");
				printf("\n");
				int a[10];
				//Questions
				printf("1. Let a be a factor of 120, then the number of positive integral solutions of x1.x2.x3=a is:\n");
				printf("(1)160\n");
				printf("(2)320\n");
				printf("(3)480\n");
				printf("(4)960\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[0]);
				printf("\n");
				printf("2. The number of real solutions of(x,y), where |y|=sin x and y=| cos-1(cos x)|, x ∈ [-2π, 2π]:\n");
				printf("(1)1\n");
				printf("(2)2\n");
				printf("(3)3\n");
				printf("(4)4\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[1]);
				printf("\n");
				printf("3. lim   (           ln(cos x)      ):\n");
				printf("   x->0   (cos x)^1/p - (cos x)^1/q  \n");
				printf("(1)pq/(p+q)\n");
				printf("(2)pq/(p-q)\n");
				printf("(3)pq/(q-p)\n");
				printf("(4)(q-p)/pq\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[2]);
				printf("\n");
				printf("4. The lines tangent to the curves y^3 - x^2.y + 5y -2x = 0  and  x^4 - x^3.y^2 + 5x + 2y = 0  at the origin intersect at an angle equal to:\n");
				printf("(1)pie/6\n");
				printf("(2)pie/4\n");
				printf("(3)pie/3\n");
				printf("(4)pie/2\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[3]);
				printf("\n");
				printf("5. Which of the following is greater than the value of the expression (tan a - tan b) where 0 < a < b < π/2  is:\n");
				printf("(1)(a-b).(sec b)^2\n");
				printf("(2)(a-b).(sec a)^2\n");
				printf("(3)Both (1) and (2)\n");
				printf("(4)None of these\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[4]);
				printf("\n");
				printf("6. A point is in motion on the curve 12y=x^3. The ordinate is changing at a slower rate than the abscissa in the interval:\n");
				printf("(1)R\n");
				printf("(2)(-oo,-2)U(2,+oo)\n");
				printf("(3)(2,oo)\n");
				printf("(4)(-2,2)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[5]);
				printf("\n");
				printf("7. If f(x) = (2017 - (x^8))^(1/8) for 0 < x < (2017)^(1/8), then f(f(1/2017))=\n");
				printf("(1)1\n");
				printf("(2)1/2017\n");
				printf("(3)(2017)^(1/8)\n");
				printf("(4)1/((2017)^(1/8))\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[6]);
				printf("\n");
				printf("8. In the expansion of (a-2b)^n , the sum of 5th and 6th term is 0, then the value of a/b is\n");
				printf("(1)(n-4)/5\n");
				printf("(2)(2n-8)/5\n");
				printf("(3)5/(n-4)\n");
				printf("(4)5/(2n-8)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[7]);
				printf("\n");
				printf("9. ∫(x^6 + 7.x^5 + 6.x^4 + 5.x^3 + 4.x^2 + 3x + 1)(e^x) dx\n");
				printf("    6 \n");
				printf("(1) S (x^i).(e^x) + c\n");
				printf("   i=0 \n");
				printf("    7 \n");
				printf("(2) S (x^i).(e^x) + c\n");
				printf("   i=0 \n");
				printf("    6 \n");
				printf("(3) S (x^i).(e^x) + c\n");
				printf("   i=0 \n");
				printf("(4)None of these\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[8]);
				printf("\n");
				printf("10. Let f(x) be a polynomial function with negative co-efficients and f(x)=f(-x) for x. Then f(x) must have:\n");
				printf("(1)Exactly 1 point of maxima\n");
				printf("(2)Atleast 1 point of maxima\n");
				printf("(3)Exactly 1 point of minima\n");
				printf("(4)Atleast 1 point of minima\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[9]);
				printf("\n");
				
				int sum =0;

				if(a[0]==2)
				{
					sum = sum+4;
					printf("1. Correct\n");
				}
				else if(a[0]==0)
				{
					sum = sum+0;
					printf("1. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("1. Wrong\n");
				}

				if(a[1]==2)
				{
					sum = sum+4;
					printf("2. Correct\n");
				}
				else if(a[1]==0)
				{
					sum = sum+0;
					printf("2. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("2. Wrong\n");
				}

				if(a[2]==3)
				{
					sum = sum+4;
					printf("3. Correct\n");
				}
				else if(a[2]==0)
				{
					sum = sum+0;
					printf("3. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("3. Wrong\n");
				}

				if(a[3]==4)
				{
					sum = sum+4;
					printf("4. Correct\n");
				}
				else if(a[3]==0)
				{
					sum = sum+0;
					printf("4. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("4. Wrong\n");
				}

				if(a[4]==2)
				{
					sum = sum+4;
					printf("5. Correct\n");
				}
				else if(a[4]==0)
				{
					sum = sum+0;
					printf("5. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("5. Wrong\n");
				}

				if(a[5]==4)
				{
					sum = sum+4;
					printf("6. Correct\n");
				}
				else if(a[5]==0)
				{
					sum = sum+0;
					printf("6. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("6. Wrong\n");
				}

				if(a[6]==2)
				{
					sum = sum+4;
					printf("7. Correct\n");
				}
				else if(a[6]==0)
				{
					sum = sum+0;
					printf("7. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("7. Wrong\n");
				}

				if(a[7]==2)
				{
					sum = sum+4;
					printf("8. Correct\n");
				}
				else if(a[7]==0)
				{
					sum = sum+0;
					printf("8. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("8. Wrong\n");
				}

				if(a[8]==3)
				{
					sum = sum+4;
					printf("9. Correct\n");
				}
				else if(a[8]==0)
				{
					sum = sum+0;
					printf("9. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("9. Wrong\n");
				}

				if(a[9]==1)
				{
					sum = sum+4;
					printf("10. Correct\n");
				}
				else if(a[9]==0)
				{
					sum = sum+0;
					printf("10. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("10. Wrong\n");
				}
				
				printf("Your total score is = %d \n",sum);
			}
			else if(strcmp(ch,"Physics")==0)
			{
				printf("Your time starts now!!\n");
				printf("\n");
				int a[10];

				printf("1.  Two coherent sources of intensity ratio r interfere. Find the ratio (Imax - Imin)/(Imax + Imin) in the interference pattern:\n");
				printf("(1)(2.(r)^1/2)/(1 + r)\n");
				printf("(2)2r/(1 + r)\n");
				printf("(3)(1 + r^0.5)/(r^0.5 - 1)\n");
				printf("(4)None of these\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[0]);
				printf("\n");
				printf("2. Two particles of mass 'm' and '9m' are placed at a distance of r. The gravitational potential at a point on the line joining them where the gravitational field is zero is:\n");
				printf("(1)0\n");
				printf("(2)-16Gm/r\n");
				printf("(3)-16Gm/3r\n");
				printf("(4)-3Gm/16r\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[1]);
				printf("\n");
				printf("3. A particle is projected with 10 m/s at 60 degrees from horizotal ground. Find the ratio of maximum KE to minimum KE of the projectile during its flight.\n");
				printf("(1)2\n");
				printf("(2)1\n");
				printf("(3)5\n");
				printf("(4)4\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[2]);
				printf("\n");
				printf("4. Two charges q and -2q are placed at (-d,0) and (d,0) respectively. Find the locus of points where the potential is zero:\n");
				printf("(1)y = 0\n");
				printf("(2)y^2 + x^2 - 4xd + 2d^2 = 0\n");
				printf("(3)3y^2 + 3x^2 + 10xd +3d^2 = 0\n");
				printf("(4)y^2 + x^2 - 7xd + 18d^2 = 0\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[3]);
				printf("\n");
				printf("5. An unpolarized beam of light of intensity I is incident on a set of four plarising plates such that each plate makes an angle of pie/3 with preceding sheet. The intensity of light transmitted through the combination:\n");
				printf("(1)1/64\n");
				printf("(2)1/128\n");
				printf("(3)1/32\n");
				printf("(4)1/256\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[4]);
				printf("\n");
				printf("6. The ratio of the velocity of sound in two chamber: one is filled with O2 and other is filled with He at same temperature will be:\n");
				printf("(1)(21/200)^0.5\n");
				printf("(2)(1/8)^0.5\n");
				printf("(3)(200/21)^0.5\n");
				printf("(4)(8/1)^0.5\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[5]);
				printf("\n");
				printf("7. In the ideal double slit exp, when a glass plate of ref index 1.5 and thickness t is introduced in the path of one of the interfering beams of wavelength l, the intensity at the position of central maximum remains unchanged. Minimum thickness of glass plate is:\n");
				printf("(1)2l\n");
				printf("(2)2l/3\n");
				printf("(3)l/3\n");
				printf("(4)l\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[6]);
				printf("\n");
				printf("8. A transverse wave is described by the ewuation = ysin(2pie(ft - x/8)) then find the wavelength(all quantities are in SI Units)\n");
				printf("(1)4m\n");
				printf("(2)8m\n");
				printf("(3)16m\n");
				printf("(4)20m\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[7]);
				printf("\n");
				printf("9. A 60kg man running on horizontal road increases his speed from 2m/s to 6m/s. During this period find the work done by friction on man.\n");
				printf("(1)0J\n");
				printf("(2)-960J\n");
				printf("(3)960J\n");
				printf("(4)Data Insufficient\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[8]);
				printf("\n");
				printf("10. 1000 small water drops of equal radii combine to form a big drop. The ratio of final surface energy to the total initial surface energy:\n");
				printf("(1)1000:1\n");
				printf("(2)1:1000\n");
				printf("(3)10:1\n");
				printf("(4)1:10\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[9]);
				printf("\n");
				
				int sum = 0;

				if(a[0]==1)
				{
					sum = sum+4;
					printf("1. Correct\n");
				}
				else if(a[0]==0)
				{
					sum = sum+0;
					printf("1. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("1. Wrong\n");
				}

				if(a[1]==2)
				{
					sum = sum+4;
					printf("2. Correct\n");
				}
				else if(a[1]==0)
				{
					sum = sum+0;
					printf("2. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("2. Wrong\n");
				}

				if(a[2]==4)
				{
					sum = sum+4;
					printf("3. Correct\n");
				}
				else if(a[2]==0)
				{
					sum = sum+0;
					printf("3. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("3. Wrong\n");
				}

				if(a[3]==3)
				{
					sum = sum+4;
					printf("4. Correct\n");
				}
				else if(a[3]==0)
				{
					sum = sum+0;
					printf("4. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("4. Wrong\n");
				}

				if(a[4]==2)
				{
					sum = sum+4;
					printf("5. Correct\n");
				}
				else if(a[4]==0)
				{
					sum = sum+0;
					printf("5. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("5. Wrong\n");
				}

				if(a[5]==1)
				{
					sum = sum+4;
					printf("6. Correct\n");
				}
				else if(a[5]==0)
				{
					sum = sum+0;
					printf("6. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("6. Wrong\n");
				}

				if(a[6]==1)
				{
					sum = sum+4;
					printf("7. Correct\n");
				}
				else if(a[6]==0)
				{
					sum = sum+0;
					printf("7. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("7. Wrong\n");
				}

				if(a[7]==2)
				{
					sum = sum+4;
					printf("8. Correct\n");
				}
				else if(a[7]==0)
				{
					sum = sum+0;
					printf("8. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("8. Wrong\n");
				}

				if(a[8]==1)
				{
					sum = sum+4;
					printf("9. Correct\n");
				}
				else if(a[8]==0)
				{
					sum = sum+0;
					printf("9. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("9. Wrong\n");
				}

				if(a[9]==4)
				{
					sum = sum+4;
					printf("10. Correct\n");
				}
				else if(a[9]==0)
				{
					sum = sum+0;
					printf("10. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("10. Wrong\n");
				}
				
				printf("Your total score is = %d \n",sum);
			}
			/*
			else if(strcmp(ch,"Chemistry")==0)
			{
				printf("Your time starts now!!\n");
				printf("\n");
				int a[10];

				printf("1. :\n");
				printf("(1)\n");
				printf("(2)\n");
				printf("(3)\n");
				printf("(4)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[0]);
				printf("\n");
				printf("2. :\n");
				printf("(1)\n");
				printf("(2)\n");
				printf("(3)\n");
				printf("(4)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[1]);
				printf("\n");
				printf("3. :\n");
				printf("(1)\n");
				printf("(2)\n");
				printf("(3)\n");
				printf("(4)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[2]);
				printf("\n");
				printf("4. :\n");
				printf("(1)\n");
				printf("(2)\n");
				printf("(3)\n");
				printf("(4)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[3]);
				printf("\n");
				printf("5. :\n");
				printf("(1)\n");
				printf("(2)\n");
				printf("(3)\n");
				printf("(4)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[4]);
				printf("\n");
				printf("6. :\n");
				printf("(1)\n");
				printf("(2)\n");
				printf("(3)\n");
				printf("(4)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[5]);
				printf("\n");
				printf("7. \n");
				printf("(1)\n");
				printf("(2)\n");
				printf("(3)\n");
				printf("(4)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[6]);
				printf("\n");
				printf("8. \n");
				printf("(1)\n");
				printf("(2)\n");
				printf("(3)\n");
				printf("(4)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[7]);
				printf("\n");
				printf("9. \n");
				printf("(1)\n");
				printf("(2)\n");
				printf("(3)\n");
				printf("(4)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[8]);
				printf("\n");
				printf("10. :\n");
				printf("(1)\n");
				printf("(2)\n");
				printf("(3)\n");
				printf("(4)\n");
				printf("\nEnter the correct option or if you want to skip the question press 0\n");
				scanf("%d",&a[9]);
				printf("\n");
				
				int sum = 0;

				if(a[0]==2)
				{
					sum = sum+4;
					printf("1. Correct\n");
				}
				else if(a[0]==0)
				{
					sum = sum+0;
					printf("1. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("1. Wrong\n");
				}

				if(a[1]==2)
				{
					sum = sum+4;
					printf("2. Correct\n");
				}
				else if(a[1]==0)
				{
					sum = sum+0;
					printf("2. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("2. Wrong\n");
				}

				if(a[2]==3)
				{
					sum = sum+4;
					printf("3. Correct\n");
				}
				else if(a[2]==0)
				{
					sum = sum+0;
					printf("3. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("3. Wrong\n");
				}

				if(a[3]==4)
				{
					sum = sum+4;
					printf("4. Correct\n");
				}
				else if(a[3]==0)
				{
					sum = sum+0;
					printf("4. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("4. Wrong\n");
				}

				if(a[4]==2)
				{
					sum = sum+4;
					printf("5. Correct\n");
				}
				else if(a[4]==0)
				{
					sum = sum+0;
					printf("5. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("5. Wrong\n");
				}

				if(a[5]==4)
				{
					sum = sum+4;
					printf("6. Correct\n");
				}
				else if(a[5]==0)
				{
					sum = sum+0;
					printf("6. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("6. Wrong\n");
				}

				if(a[6]==2)
				{
					sum = sum+4;
					printf("7. Correct\n");
				}
				else if(a[6]==0)
				{
					sum = sum+0;
					printf("7. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("7. Wrong\n");
				}

				if(a[7]==2)
				{
					sum = sum+4;
					printf("8. Correct\n");
				}
				else if(a[7]==0)
				{
					sum = sum+0;
					printf("8. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("8. Wrong\n");
				}

				if(a[8]==3)
				{
					sum = sum+4;
					printf("9. Correct\n");
				}
				else if(a[8]==0)
				{
					sum = sum+0;
					printf("9. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("9. Wrong\n");
				}

				if(a[9]==1)
				{
					sum = sum+4;
					printf("10. Correct\n");
				}
				else if(a[9]==0)
				{
					sum = sum+0;
					printf("10. Not attempted\n");
				}
				else
				{
					sum = sum-1;
					printf("10. Wrong\n");
				}
				
				printf("Your total score is =%d \n",sum);
			}*/
		}
		else
		{
			printf("Get Lost.");
			return 0;
		}
		return 0;
	}
	else
	{
		printf("Wrong Password.");
		return 0;
	}	
}