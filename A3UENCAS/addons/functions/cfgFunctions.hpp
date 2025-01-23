class CfgFunctions 
{
    //be careful when overwriting functions as version updates can break your extension
    class A3A 
    {
        class Supports
        {
            class initSupports
            {
                file = QPATHTOFOLDER(Supports\fn_initSupports.sqf);
            };
        }
    };

    //your own functions should be kept here
    class ADDON
    {
        class Events 
        { //these two functions are used to demonstrate use of events
            file = QPATHTOFOLDER(Events);
            class addExampleEventListener { postInit = 1; };
            class AIVehInit {};
        };
    };
};
