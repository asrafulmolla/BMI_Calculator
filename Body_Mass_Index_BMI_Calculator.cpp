#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    float feet,inch,weight,BMI,height;
    string choice;
        cout<<"\nEnter your your Height (feet and inch):Feet= ";cin>>feet;cout<<"Inch= ";cin>>inch;
        height=(feet*0.3048)+(inch*0.0254);
        cout<<"Enter your Weight (KG): ";
        cin>>weight;
        BMI=(weight/(height*height));
        if(BMI<18.5)
        {
            cout<<"Your BMI is "<<BMI<<endl;
            cout<<endl<<BMI<<" < 18.5	Possible nutritional deficiency and osteoporosis.";
        }
        else if(BMI >= 18.5 && BMI < 25.0)
        {
            cout<<"Your BMI is "<<BMI<<endl;
            cout<<endl<<BMI<<" >= 18.5 and "<<BMI<<"< 25	Low risk (healthy range).";
        }
        else if(BMI >= 25.0 && BMI < 35)
        {
            cout<<"Your BMI is "<<BMI<<endl;
            cout<<endl<<BMI<<" >= 25.0 and "<<BMI<<"< 35	Moderate risk of developing heart disease,\nhigh blood pressure, stroke, diabetes mellitus.";
        }
        else if(BMI >= 35.0)
        {
            cout<<"Your BMI is "<<BMI<<endl;
            cout<<endl<<BMI<<" >= 35.0 High risk of developing heart disease,\nhigh blood pressure, stroke,\ndiabetes mellitus. Metabolic Syndrome.";
        }
        cout<<"\nDo you want to see the BMI range Table (yes or no): ";
        cin>>choice;
        if(choice=="yes" ||choice=="Yes"||choice=="YES")
        {
    cout<<"\n________________________________________________________________";
    cout<<"\n|                          BMI Range Table                      |";
    cout<<"\n________________________________________________________________";
    cout<<"\n| Underweight (Severe thinness)   | (BMI < 16.0)                |";
    cout<<"\n________________________________________________________________";
    cout<<"\n| Underweight (Moderate thinness) | (BMI >= 16.0 and BMI < 17)  |";
    cout<<"\n________________________________________________________________";
    cout<<"\n| Underweight (Mild thinness)     | (BMI >= 17.0 and BMI < 18.5)|";
    cout<<"\n________________________________________________________________";
    cout<<"\n| Normal                          | (BMI >= 18.5 and BMI < 25)  |";
    cout<<"\n________________________________________________________________";
    cout<<"\n| Overweight                      | (BMI >= 25 and BMI < 30)    |";
    cout<<"\n________________________________________________________________";
    cout<<"\n| Obese: Class I                  | (BMI >= 30 and BMI < 35)    |";
    cout<<"\n________________________________________________________________";
    cout<<"\n| Obese: Class II                 | (BMI >= 35 and BMI < 40)    |";
    cout<<"\n________________________________________________________________";
    cout<<"\n| Obese: Class III                | (BMI >= 40 )                |";
    cout<<"\n________________________________________________________________";
    cout<<"\n\nThank You for using BMI Calculator.";
        }
        else
        {
            cout<<"\nThank You for using BMI Calculator.";
        }
    getch();
}