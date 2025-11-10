# include <raylib.h>
# include <stdio.h>

int main ()
{
    InitWindow(GetScreenWidth(), GetScreenHeight(), "My first screen!");
    while(!WindowShouldClose())
    {
        PollInputEvents();
    }
    CloseWindow();
}
