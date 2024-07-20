#include<iostream>
class element{
    private:
        int atNo, type;
        char EName[20];
        public:
            void setData() {
        std::cout << "\nEnter atomic number:"; std::cin >> atNo;
        std::cout << "\nEnter Name of the Element:";
   		fflush(stdin);
        gets(EName);
        std::cout << "\nEnter type of a element (1:Solid, 2:Liquid, 3:Gas)" ;
        std::cin >> type;
    }
        void display(){
        std::cout << "\nat.No. : "<< atNo << " , " << EName;
        if (type==1)                
		std::cout << " (solid)";
                else if (type==2)           
				std::cout << " (Liquid)";
                else if (type==3)           
				 std::cout << " (Gas)";
            }
            int getType(){
				return type;
			}
        };

            int main() {
                element list[10];
                int i, n;
                std::cout << "\nEnter number of elements to store: ";
                std::cin >> n;
                for (i = 0; i < n; i++)  {
                    list[i] .setData();
                }
                
                std::cout << "\nList of elements";
                for ( i = 0; i < n; i++){
                    if (list[i] .getType()==1)
                        list[i] .display();   
                }
                for ( i = 0; i < n; i++){
                    if (list[i] .getType()==2)
                        list[i] .display();   
                }
                for ( i = 0; i < n; i++){
                    if (list[i] .getType()==3)
                        list[i] .display();  
                }
                return 0;
            }
