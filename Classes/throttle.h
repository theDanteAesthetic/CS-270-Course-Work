#ifndef MAIN_SAVITCH_THROTTLE
#define MAIN_SAVITCH_THROTTLE
namespace main_savitch_2A
{
class throttle
{
    public:
    // CONSTRUCTORS
    throttle( );
    throttle(int size);

    // MODIFICATION MEMBER FUNCTIONS
    void shut_off( ) { position = 0; }
    void shift(int amount);
    
    // CONSTANT MEMBER FUNCTIONS
    double flow( ) const { return position / double(top_position); }
    bool is_on( ) const { return (position > 0); }
    private:
    int top_position;
    int position;
};
}
#endif
