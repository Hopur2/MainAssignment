#ifndef PIZZAUI_H
#define PIZZAUI_H


class PizzaUI
{
    public:
        PizzaUI();
        void create_menu();
        void create_topping();
        void readTopp();
        void readMenu();
        void startUI();
        void delete_menu();
        void New_location();
    protected:
    private:
        int admno;
        //char n[100];
};

#endif // PIZZAUI_H
